/*
 * (c) Copyright Ascensio System SIA 2010-2019
 *
 * This program is a free software product. You can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License (AGPL)
 * version 3 as published by the Free Software Foundation. In accordance with
 * Section 7(a) of the GNU AGPL its Section 15 shall be amended to the effect
 * that Ascensio System SIA expressly excludes the warranty of non-infringement
 * of any third-party rights.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR  PURPOSE. For
 * details, see the GNU AGPL at: http://www.gnu.org/licenses/agpl-3.0.html
 *
 * You can contact Ascensio System SIA at 20A-12 Ernesta Birznieka-Upisha
 * street, Riga, Latvia, EU, LV-1050.
 *
 * The  interactive user interfaces in modified source and object code versions
 * of the Program must display Appropriate Legal Notices, as required under
 * Section 5 of the GNU AGPL version 3.
 *
 * Pursuant to Section 7(b) of the License you must retain the original Product
 * logo when distributing the program. Pursuant to Section 7(e) we decline to
 * grant you any rights under trademark law for use of our trademarks.
 *
 * All the Product's GUI elements, including illustrations and icon sets, as
 * well as technical writing content are licensed under the terms of the
 * Creative Commons Attribution-ShareAlike 4.0 International. See the License
 * terms at http://creativecommons.org/licenses/by-sa/4.0/legalcode
 *
 */

#include "../SimpleTypes_Word.h"

namespace SimpleTypes
{
    template<ENumberFormat eDefValue>
    CNumberFormat<eDefValue>::CNumberFormat() {}

    template<ENumberFormat eDefValue>
    ENumberFormat CNumberFormat<eDefValue>::FromString(std::wstring &sValue)
    {
        if      ( (L"aiueo")                        == sValue ) this->m_eValue = numberformatAiueo;
        else if ( (L"aiueoFullWidth")               == sValue ) this->m_eValue = numberformatAiueoFullWidth;
        else if ( (L"arabicAbjad")                  == sValue ) this->m_eValue = numberformatArabicAbjad;
        else if ( (L"arabicAlpha")                  == sValue ) this->m_eValue = numberformatArabicAlpha;
        else if ( (L"bahtText")                     == sValue ) this->m_eValue = numberformatBahtText;
        else if ( (L"bullet")                       == sValue ) this->m_eValue = numberformatBullet;
        else if ( (L"cardinalText")                 == sValue ) this->m_eValue = numberformatCardinalText;
        else if ( (L"chicago")                      == sValue ) this->m_eValue = numberformatChicago;
        else if ( (L"chineseCounting")              == sValue ) this->m_eValue = numberformatChineseCounting;
        else if ( (L"chineseCountingThousand")      == sValue ) this->m_eValue = numberformatChineseCountingThousand;
        else if ( (L"chineseLegalSimplified")       == sValue ) this->m_eValue = numberformatChineseLegalSimplified;
        else if ( (L"chosung")                      == sValue ) this->m_eValue = numberformatChosung;
        else if ( (L"custom")                       == sValue ) this->m_eValue = numberformatCustom;
        else if ( (L"decimal")                      == sValue ) this->m_eValue = numberformatDecimal;
        else if ( (L"decimalEnclosedCircle")        == sValue ) this->m_eValue = numberformatDecimalEnclosedCircle;
        else if ( (L"decimalEnclosedCircleChinese") == sValue ) this->m_eValue = numberformatDecimalEnclosedCircleChinese;
        else if ( (L"decimalEnclosedFullstop")      == sValue ) this->m_eValue = numberformatDecimalEnclosedFullstop;
        else if ( (L"decimalEnclosedParen")         == sValue ) this->m_eValue = numberformatDecimalEnclosedParen;
        else if ( (L"decimalFullWidth")             == sValue ) this->m_eValue = numberformatDecimalFullWidth;
        else if ( (L"decimalFullWidth2")            == sValue ) this->m_eValue = numberformatDecimalFullWidth2;
        else if ( (L"decimalHalfWidth")             == sValue ) this->m_eValue = numberformatDecimalHalfWidth;
        else if ( (L"decimalZero")                  == sValue ) this->m_eValue = numberformatDecimalZero;
        else if ( (L"dollarText")                   == sValue ) this->m_eValue = numberformatDollarText;
        else if ( (L"ganada")                       == sValue ) this->m_eValue = numberformatGanada;
        else if ( (L"hebrew1")                      == sValue ) this->m_eValue = numberformatHebrew1;
        else if ( (L"hebrew2")                      == sValue ) this->m_eValue = numberformatHebrew2;
        else if ( (L"hex")                          == sValue ) this->m_eValue = numberformatHex;
        else if ( (L"hindiConsonants")              == sValue ) this->m_eValue = numberformatHindiConsonants;
        else if ( (L"hindiCounting")                == sValue ) this->m_eValue = numberformatHindiCounting;
        else if ( (L"hindiNumbers")                 == sValue ) this->m_eValue = numberformatHindiNumbers;
        else if ( (L"hindiVowels")                  == sValue ) this->m_eValue = numberformatHindiVowels;
        else if ( (L"ideographDigital")             == sValue ) this->m_eValue = numberformatIdeographDigital;
        else if ( (L"ideographEnclosedCircle")      == sValue ) this->m_eValue = numberformatIdeographEnclosedCircle;
        else if ( (L"ideographLegalTraditional")    == sValue ) this->m_eValue = numberformatIdeographLegalTraditional;
        else if ( (L"ideographTraditional")         == sValue ) this->m_eValue = numberformatIdeographTraditional;
        else if ( (L"ideographZodiac")              == sValue ) this->m_eValue = numberformatIdeographZodiac;
        else if ( (L"ideographZodiacTraditional")   == sValue ) this->m_eValue = numberformatIdeographZodiacTraditional;
        else if ( (L"iroha")                        == sValue ) this->m_eValue = numberformatIroha;
        else if ( (L"irohaFullWidth")               == sValue ) this->m_eValue = numberformatIrohaFullWidth;
        else if ( (L"japaneseCounting")             == sValue ) this->m_eValue = numberformatJapaneseCounting;
        else if ( (L"japaneseDigitalTenThousand")   == sValue ) this->m_eValue = numberformatJapaneseDigitalTenThousand;
        else if ( (L"japaneseLegal")                == sValue ) this->m_eValue = numberformatJapaneseLegal;
        else if ( (L"koreanCounting")               == sValue ) this->m_eValue = numberformatKoreanCounting;
        else if ( (L"koreanDigital")                == sValue ) this->m_eValue = numberformatKoreanDigital;
        else if ( (L"koreanDigital2")               == sValue ) this->m_eValue = numberformatKoreanDigital2;
        else if ( (L"koreanLegal")                  == sValue ) this->m_eValue = numberformatKoreanLegal;
        else if ( (L"lowerLetter")                  == sValue ) this->m_eValue = numberformatLowerLetter;
        else if ( (L"lowerRoman")                   == sValue ) this->m_eValue = numberformatLowerRoman;
        else if ( (L"none")                         == sValue ) this->m_eValue = numberformatNone;
        else if ( (L"numberInDash")                 == sValue ) this->m_eValue = numberformatNumberInDash;
        else if ( (L"ordinal")                      == sValue ) this->m_eValue = numberformatOrdinal;
        else if ( (L"ordinalText")                  == sValue ) this->m_eValue = numberformatOrdinalText;
        else if ( (L"russianLower")                 == sValue ) this->m_eValue = numberformatRussianLower;
        else if ( (L"russianUpper")                 == sValue ) this->m_eValue = numberformatRussianUpper;
        else if ( (L"taiwaneseCounting")            == sValue ) this->m_eValue = numberformatTaiwaneseCounting;
        else if ( (L"taiwaneseCountingThousand")    == sValue ) this->m_eValue = numberformatTaiwaneseCountingThousand;
        else if ( (L"taiwaneseDigital")             == sValue ) this->m_eValue = numberformatTaiwaneseDigital;
        else if ( (L"thaiCounting")                 == sValue ) this->m_eValue = numberformatThaiCounting;
        else if ( (L"thaiLetters")                  == sValue ) this->m_eValue = numberformatThaiLetters;
        else if ( (L"thaiNumbers")                  == sValue ) this->m_eValue = numberformatThaiNumbers;
        else if ( (L"upperLetter")                  == sValue ) this->m_eValue = numberformatUpperLetter;
        else if ( (L"upperRoman")                   == sValue ) this->m_eValue = numberformatUpperRoman;
        else if ( (L"vietnameseCounting")           == sValue ) this->m_eValue = numberformatVietnameseCounting;
        else                                                     this->m_eValue = eDefValue;

        return this->m_eValue;
    }

    template<ENumberFormat eDefValue>
    std::wstring CNumberFormat<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case numberformatAiueo                        : return (L"aiueo");
        case numberformatAiueoFullWidth               : return (L"aiueoFullWidth");
        case numberformatArabicAbjad                  : return (L"arabicAbjad");
        case numberformatArabicAlpha                  : return (L"arabicAlpha");
        case numberformatBahtText                     : return (L"bahtText");
        case numberformatBullet                       : return (L"bullet");
        case numberformatCardinalText                 : return (L"cardinalText");
        case numberformatChicago                      : return (L"chicago");
        case numberformatChineseCounting              : return (L"chineseCounting");
        case numberformatChineseCountingThousand      : return (L"chineseCountingThousand");
        case numberformatChineseLegalSimplified       : return (L"chineseLegalSimplified");
        case numberformatChosung                      : return (L"chosung");
        case numberformatCustom                       : return (L"custom");
        case numberformatDecimal                      : return (L"decimal");
        case numberformatDecimalEnclosedCircle        : return (L"decimalEnclosedCircle");
        case numberformatDecimalEnclosedCircleChinese : return (L"decimalEnclosedCircleChinese");
        case numberformatDecimalEnclosedFullstop      : return (L"decimalEnclosedFullstop");
        case numberformatDecimalEnclosedParen         : return (L"decimalEnclosedParen");
        case numberformatDecimalFullWidth             : return (L"decimalFullWidth");
        case numberformatDecimalFullWidth2            : return (L"decimalFullWidth2");
        case numberformatDecimalHalfWidth             : return (L"decimalHalfWidth");
        case numberformatDecimalZero                  : return (L"decimalZero");
        case numberformatDollarText                   : return (L"dollarText");
        case numberformatGanada                       : return (L"ganada");
        case numberformatHebrew1                      : return (L"hebrew1");
        case numberformatHebrew2                      : return (L"hebrew2");
        case numberformatHex                          : return (L"hex");
        case numberformatHindiConsonants              : return (L"hindiConsonants");
        case numberformatHindiCounting                : return (L"hindiCounting");
        case numberformatHindiNumbers                 : return (L"hindiNumbers");
        case numberformatHindiVowels                  : return (L"hindiVowels");
        case numberformatIdeographDigital             : return (L"ideographDigital");
        case numberformatIdeographEnclosedCircle      : return (L"ideographEnclosedCircle");
        case numberformatIdeographLegalTraditional    : return (L"ideographLegalTraditional");
        case numberformatIdeographTraditional         : return (L"ideographTraditional");
        case numberformatIdeographZodiac              : return (L"ideographZodiac");
        case numberformatIdeographZodiacTraditional   : return (L"ideographZodiacTraditional");
        case numberformatIroha                        : return (L"iroha");
        case numberformatIrohaFullWidth               : return (L"irohaFullWidth");
        case numberformatJapaneseCounting             : return (L"japaneseCounting");
        case numberformatJapaneseDigitalTenThousand   : return (L"japaneseDigitalTenThousand");
        case numberformatJapaneseLegal                : return (L"japaneseLegal");
        case numberformatKoreanCounting               : return (L"koreanCounting");
        case numberformatKoreanDigital                : return (L"koreanDigital");
        case numberformatKoreanDigital2               : return (L"koreanDigital2");
        case numberformatKoreanLegal                  : return (L"koreanLegal");
        case numberformatLowerLetter                  : return (L"lowerLetter");
        case numberformatLowerRoman                   : return (L"lowerRoman");
        case numberformatNone                         : return (L"none");
        case numberformatNumberInDash                 : return (L"numberInDash");
        case numberformatOrdinal                      : return (L"ordinal");
        case numberformatOrdinalText                  : return (L"ordinalText");
        case numberformatRussianLower                 : return (L"russianLower");
        case numberformatRussianUpper                 : return (L"russianUpper");
        case numberformatTaiwaneseCounting            : return (L"taiwaneseCounting");
        case numberformatTaiwaneseCountingThousand    : return (L"taiwaneseCountingThousand");
        case numberformatTaiwaneseDigital             : return (L"taiwaneseDigital");
        case numberformatThaiCounting                 : return (L"thaiCounting");
        case numberformatThaiLetters                  : return (L"thaiLetters");
        case numberformatThaiNumbers                  : return (L"thaiNumbers");
        case numberformatUpperLetter                  : return (L"upperLetter");
        case numberformatUpperRoman                   : return (L"upperRoman");
        case numberformatVietnameseCounting           : return (L"vietnameseCounting");
        default                                       : return (L"none");
        }
    }

    template<ENumberFormat eDefValue>
    ENumberFormat CNumberFormat<eDefValue>::GetValue() const
    {
        return this->m_eValue;
    }
}
