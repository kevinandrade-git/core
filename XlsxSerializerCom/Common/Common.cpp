#include "Common.h"

#include "BinReaderWriterDefines.h"
#include "../../Common/DocxFormat/Source/XlsxFormat/Xlsx.h"
#include "../../Common/Base64.h"
#include "../../DesktopEditor/common/Types.h"
#ifndef DISABLE_FILE_DOWNLOADER
#include "../../ASCOfficeDocxFile2/BinReader/FileDownloader.h"
#endif
#include "../../DesktopEditor/common/file.h"

#ifndef CP_UTF8
#define CP_UTF8 65001
#endif

namespace SerializeCommon
{
	CString DownloadImage(const CString& strFile)
	{
#ifndef DISABLE_FILE_DOWNLOADER
		CFileDownloader oDownloader(strFile, FALSE);
		oDownloader.Start( 1 );
		while ( oDownloader.IsRunned() )
		{
			::Sleep( 10 );
		}
		CString strFileName;
		if ( oDownloader.IsFileDownloaded() )
		{
			strFileName = oDownloader.GetFilePath();
		}
		return strFileName;
#else
		return L"";
#endif
	}
	VOID convertBase64ToImage (NSFile::CFileBinary& oFile, CString &pBase64)
	{
		BYTE* pUtf8 = NULL;
		long nUtf8Size;
		NSFile::CUtf8Converter::GetUtf8StringFromUnicode(pBase64.GetString(), pBase64.GetLength(), pUtf8, nUtf8Size);
		CStringA sUnicode((char*)pUtf8, nUtf8Size);
		RELEASEARRAYOBJECTS(pUtf8);

		//������� "data:image/jpg;base64,"
		int nShift = 0;
		int nIndex = sUnicode.Find("base64,");
		if(-1 != nIndex)
		{
			nShift = nIndex + 7;
		}
		// �������� ������ �����
		LONG lFileSize = sUnicode.GetLength () - nShift;
		INT nDstLength = lFileSize;
		BYTE *pBuffer = new BYTE [lFileSize];
		memset(pBuffer, 0, lFileSize);
		Base64::Base64Decode ((LPCSTR)sUnicode.GetBuffer () + nShift, lFileSize, pBuffer, &nDstLength);

		// ����� � ����
		oFile.WriteFile(pBuffer, nDstLength);

		RELEASEARRAYOBJECTS (pBuffer);
	}

	long Round(double val)
	{
		return (long)(val+ 0.5);
	}
	CString changeExtention(const CString& sSourcePath, const CString& sTargetExt)
	{
		int nIndex = sSourcePath.ReverseFind('.');
		if(-1 != nIndex)
			return sSourcePath.Left(nIndex + 1) + sTargetExt;
		return sSourcePath;
	}
	void ReadFileType(CString& sXMLOptions, BYTE& result, UINT& nCodePage, WCHAR& wcDelimiter)
	{
		result = BinXlsxRW::c_oFileTypes::XLSX;
		nCodePage = CP_UTF8;
		wcDelimiter = _T(',');
		nullable<SimpleTypes::CUnsignedDecimalNumber<>> fileType;
		nullable<SimpleTypes::CUnsignedDecimalNumber<>> codePage;
		nullable<CString> delimiter;

		// Read options
		XmlUtils::CXmlLiteReader oReader;
		if (TRUE != oReader.FromString(sXMLOptions) || TRUE != oReader.IsValid())
			return;

		oReader.ReadNextNode(); // XmlOptions
		if (oReader.IsEmptyNode())
			return;

		int nCurDepth = oReader.GetDepth();
		while(oReader.ReadNextSiblingNode(nCurDepth))
		{
			CWCharWrapper sName = oReader.GetName();
			if (_T("fileOptions") == sName)
			{
				// ������ ��������
				WritingElement_ReadAttributes_Start(oReader)
				WritingElement_ReadAttributes_Read_if (oReader, _T("fileType"), fileType)
				WritingElement_ReadAttributes_Read_else_if (oReader, _T("codePage"), codePage)
				WritingElement_ReadAttributes_Read_else_if (oReader, _T("delimiter"), delimiter)
				WritingElement_ReadAttributes_End(oReader)
				result = (BYTE)fileType->GetValue();
				nCodePage = (UINT)codePage->GetValue();
				const CString& sDelimiter = delimiter.get();
				if (0 < sDelimiter.GetLength())
					wcDelimiter = sDelimiter.GetAt(0);
				break;
			}
		}

		return;
	}
}