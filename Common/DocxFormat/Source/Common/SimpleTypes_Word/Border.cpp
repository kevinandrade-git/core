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
    //--------------------------------------------------------------------------------
    // Border 17.18.2 (Part 1)
    //--------------------------------------------------------------------------------

    template<EBorder eDefValue>
    CBorder<eDefValue>::CBorder() {}

    template<EBorder eDefValue>
    EBorder CBorder<eDefValue>::FromString(std::wstring &sValue)
    {
        wchar_t wsFirstChar = 0;

        if ( sValue.length() > 0 )
            wsFirstChar = sValue[0];

        switch(wsFirstChar)
        {
        case 'a':
            {
                if      ( (L"apples")                 == sValue ) this->m_eValue = bordervalueApples;
                else if ( (L"archedScallops")         == sValue ) this->m_eValue = bordervalueArchedScallops;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'b':
            {
                if      ( (L"babyPacifier")           == sValue ) this->m_eValue = bordervalueBabyPacifier;
                else if ( (L"babyRattle")             == sValue ) this->m_eValue = bordervalueBabyRattle;
                else if ( (L"balloons3Colors")        == sValue ) this->m_eValue = bordervalueBalloons3Colors;
                else if ( (L"balloonsHotAir")         == sValue ) this->m_eValue = bordervalueBalloonsHotAir;
                else if ( (L"basicBlackDashes")       == sValue ) this->m_eValue = bordervalueBasicBlackDashes;
                else if ( (L"basicBlackDots")         == sValue ) this->m_eValue = bordervalueBasicBlackDots;
                else if ( (L"basicBlackSquares")      == sValue ) this->m_eValue = bordervalueBasicBlackSquares;
                else if ( (L"basicThinLines")         == sValue ) this->m_eValue = bordervalueBasicThinLines;
                else if ( (L"basicWhiteDashes")       == sValue ) this->m_eValue = bordervalueBasicWhiteDashes;
                else if ( (L"basicWhiteDots")         == sValue ) this->m_eValue = bordervalueBasicWhiteDots;
                else if ( (L"basicWhiteSquares")      == sValue ) this->m_eValue = bordervalueBasicWhiteSquares;
                else if ( (L"basicWideInline")        == sValue ) this->m_eValue = bordervalueBasicWideInline;
                else if ( (L"basicWideMidline")       == sValue ) this->m_eValue = bordervalueBasicWideMidline;
                else if ( (L"basicWideOutline")       == sValue ) this->m_eValue = bordervalueBasicWideOutline;
                else if ( (L"bats")                   == sValue ) this->m_eValue = bordervalueBats;
                else if ( (L"birds")                  == sValue ) this->m_eValue = bordervalueBirds;
                else if ( (L"birdsFlight")            == sValue ) this->m_eValue = bordervalueBirdsFlight;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'c':
            {
                if      ( (L"cabins")                 == sValue ) this->m_eValue = bordervalueCabins;
                else if ( (L"cakeSlice")              == sValue ) this->m_eValue = bordervalueCakeSlice;
                else if ( (L"candyCorn")              == sValue ) this->m_eValue = bordervalueCandyCorn;
                else if ( (L"celticKnotwork")         == sValue ) this->m_eValue = bordervalueCelticKnotwork;
                else if ( (L"certificateBanner")      == sValue ) this->m_eValue = bordervalueCertificateBanner;
                else if ( (L"chainLink")              == sValue ) this->m_eValue = bordervalueChainLink;
                else if ( (L"champagneBottle")        == sValue ) this->m_eValue = bordervalueChampagneBottle;
                else if ( (L"checkedBarBlack")        == sValue ) this->m_eValue = bordervalueCheckedBarBlack;
                else if ( (L"checkedBarColor")        == sValue ) this->m_eValue = bordervalueCheckedBarColor;
                else if ( (L"checkered")              == sValue ) this->m_eValue = bordervalueCheckered;
                else if ( (L"christmasTree")          == sValue ) this->m_eValue = bordervalueChristmasTree;
                else if ( (L"circlesLines")           == sValue ) this->m_eValue = bordervalueCirclesLines;
                else if ( (L"circlesRectangles")      == sValue ) this->m_eValue = bordervalueCirclesRectangles;
                else if ( (L"classicalWave")          == sValue ) this->m_eValue = bordervalueClassicalWave;
                else if ( (L"clocks")                 == sValue ) this->m_eValue = bordervalueClocks;
                else if ( (L"compass")                == sValue ) this->m_eValue = bordervalueCompass;
                else if ( (L"confetti")               == sValue ) this->m_eValue = bordervalueConfetti;
                else if ( (L"confettiGrays")          == sValue ) this->m_eValue = bordervalueConfettiGrays;
                else if ( (L"confettiOutline")        == sValue ) this->m_eValue = bordervalueConfettiOutline;
                else if ( (L"confettiStreamers")      == sValue ) this->m_eValue = bordervalueConfettiStreamers;
                else if ( (L"confettiWhite")          == sValue ) this->m_eValue = bordervalueConfettiWhite;
                else if ( (L"cornerTriangles")        == sValue ) this->m_eValue = bordervalueCornerTriangles;
                else if ( (L"couponCutoutDashes")     == sValue ) this->m_eValue = bordervalueCouponCutoutDashes;
                else if ( (L"couponCutoutDots")       == sValue ) this->m_eValue = bordervalueCouponCutoutDots;
                else if ( (L"crazyMaze")              == sValue ) this->m_eValue = bordervalueCrazyMaze;
                else if ( (L"creaturesButterfly")     == sValue ) this->m_eValue = bordervalueCreaturesButterfly;
                else if ( (L"creaturesFish")          == sValue ) this->m_eValue = bordervalueCreaturesFish;
                else if ( (L"creaturesInsects")       == sValue ) this->m_eValue = bordervalueCreaturesInsects;
                else if ( (L"creaturesLadyBug")       == sValue ) this->m_eValue = bordervalueCreaturesLadyBug;
                else if ( (L"crossStitch")            == sValue ) this->m_eValue = bordervalueCrossStitch;
                else if ( (L"cup")                    == sValue ) this->m_eValue = bordervalueCup;
                else if ( (L"custom")                 == sValue ) this->m_eValue = bordervalueCustom;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'd':
            {
                if      ( (L"dashDotStroked")         == sValue ) this->m_eValue = bordervalueDashDotStroked;
                else if ( (L"dashed")                 == sValue ) this->m_eValue = bordervalueDashed;
                else if ( (L"dashSmallGap")           == sValue ) this->m_eValue = bordervalueDashSmallGap;
                else if ( (L"decoArch")               == sValue ) this->m_eValue = bordervalueDecoArch;
                else if ( (L"decoArchColor")          == sValue ) this->m_eValue = bordervalueDecoArchColor;
                else if ( (L"decoBlocks")             == sValue ) this->m_eValue = bordervalueDecoBlocks;
                else if ( (L"diamondsGray")           == sValue ) this->m_eValue = bordervalueDiamondsGray;
                else if ( (L"dotDash")                == sValue ) this->m_eValue = bordervalueDotDash;
                else if ( (L"dotDotDash")             == sValue ) this->m_eValue = bordervalueDotDotDash;
                else if ( (L"dotted")                 == sValue ) this->m_eValue = bordervalueDotted;
                else if ( (L"double")                 == sValue ) this->m_eValue = bordervalueDouble;
                else if ( (L"doubleD")                == sValue ) this->m_eValue = bordervalueDoubleD;
                else if ( (L"doubleDiamonds")         == sValue ) this->m_eValue = bordervalueDoubleDiamonds;
                else if ( (L"doubleWave")             == sValue ) this->m_eValue = bordervalueDoubleWave;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'e':
            {
                if      ( (L"earth1")                 == sValue ) this->m_eValue = bordervalueEarth1;
                else if ( (L"earth2")                 == sValue ) this->m_eValue = bordervalueEarth2;
                else if ( (L"earth3")                 == sValue ) this->m_eValue = bordervalueEarth3;
                else if ( (L"eclipsingSquares1")      == sValue ) this->m_eValue = bordervalueEclipsingSquares1;
                else if ( (L"eclipsingSquares2")      == sValue ) this->m_eValue = bordervalueEclipsingSquares2;
                else if ( (L"eggsBlack")              == sValue ) this->m_eValue = bordervalueEggsBlack;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'f':
            {
                if      ( (L"fans")                   == sValue ) this->m_eValue = bordervalueFans;
                else if ( (L"film")                   == sValue ) this->m_eValue = bordervalueFilm;
                else if ( (L"firecrackers")           == sValue ) this->m_eValue = bordervalueFirecrackers;
                else if ( (L"flowersBlockPrint")      == sValue ) this->m_eValue = bordervalueFlowersBlockPrint;
                else if ( (L"flowersDaisies")         == sValue ) this->m_eValue = bordervalueFlowersDaisies;
                else if ( (L"flowersModern1")         == sValue ) this->m_eValue = bordervalueFlowersModern1;
                else if ( (L"flowersModern2")         == sValue ) this->m_eValue = bordervalueFlowersModern2;
                else if ( (L"flowersPansy")           == sValue ) this->m_eValue = bordervalueFlowersPansy;
                else if ( (L"flowersRedRose")         == sValue ) this->m_eValue = bordervalueFlowersRedRose;
                else if ( (L"flowersRoses")           == sValue ) this->m_eValue = bordervalueFlowersRoses;
                else if ( (L"flowersTeacup")          == sValue ) this->m_eValue = bordervalueFlowersTeacup;
                else if ( (L"flowersTiny")            == sValue ) this->m_eValue = bordervalueFlowersTiny;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'g':
            {
                if      ( (L"gems")                   == sValue ) this->m_eValue = bordervalueGems;
                else if ( (L"gingerbreadMan")         == sValue ) this->m_eValue = bordervalueGingerbreadMan;
                else if ( (L"gradient")               == sValue ) this->m_eValue = bordervalueGradient;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'h':
            {
                if      ( (L"handmade1")              == sValue ) this->m_eValue = bordervalueHandmade1;
                else if ( (L"handmade2")              == sValue ) this->m_eValue = bordervalueHandmade2;
                else if ( (L"heartBalloon")           == sValue ) this->m_eValue = bordervalueHeartBalloon;
                else if ( (L"heartGray")              == sValue ) this->m_eValue = bordervalueHeartGray;
                else if ( (L"hearts")                 == sValue ) this->m_eValue = bordervalueHearts;
                else if ( (L"heebieJeebies")          == sValue ) this->m_eValue = bordervalueHeebieJeebies;
                else if ( (L"holly")                  == sValue ) this->m_eValue = bordervalueHolly;
                else if ( (L"houseFunky")             == sValue ) this->m_eValue = bordervalueHouseFunky;
                else if ( (L"hypnotic")               == sValue ) this->m_eValue = bordervalueHypnotic;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'i':
            {
                if      ( (L"iceCreamCones")          == sValue ) this->m_eValue = bordervalueIceCreamCones;
                else if ( (L"inset")                  == sValue ) this->m_eValue = bordervalueInset;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'l':
            {
                if      ( (L"lightBulb")              == sValue ) this->m_eValue = bordervalueLightBulb;
                else if ( (L"lightning1")             == sValue ) this->m_eValue = bordervalueLightning1;
                else if ( (L"lightning2")             == sValue ) this->m_eValue = bordervalueLightning2;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'm':
            {
                if      ( (L"mapleLeaf")              == sValue ) this->m_eValue = bordervalueMapleLeaf;
                else if ( (L"mapleMuffins")           == sValue ) this->m_eValue = bordervalueMapleMuffins;
                else if ( (L"mapPins")                == sValue ) this->m_eValue = bordervalueMapPins;
                else if ( (L"marquee")                == sValue ) this->m_eValue = bordervalueMarquee;
                else if ( (L"marqueeToothed")         == sValue ) this->m_eValue = bordervalueMarqueeToothed;
                else if ( (L"moons")                  == sValue ) this->m_eValue = bordervalueMoons;
                else if ( (L"mosaic")                 == sValue ) this->m_eValue = bordervalueMosaic;
                else if ( (L"musicNotes")             == sValue ) this->m_eValue = bordervalueMusicNotes;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'n':
            {
                if      ( (L"nil")                    == sValue ) this->m_eValue = bordervalueNil;
                else if ( (L"none")                   == sValue ) this->m_eValue = bordervalueNone;
                else if ( (L"northwest")              == sValue ) this->m_eValue = bordervalueNorthwest;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'o':
            {
                if      ( (L"outset")                 == sValue ) this->m_eValue = bordervalueOutset;
                else if ( (L"ovals")                  == sValue ) this->m_eValue = bordervalueOvals;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'p':
            {
                if      ( (L"packages")               == sValue ) this->m_eValue = bordervaluePackages;
                else if ( (L"palmsBlack")             == sValue ) this->m_eValue = bordervaluePalmsBlack;
                else if ( (L"palmsColor")             == sValue ) this->m_eValue = bordervaluePalmsColor;
                else if ( (L"paperClips")             == sValue ) this->m_eValue = bordervaluePaperClips;
                else if ( (L"papyrus")                == sValue ) this->m_eValue = bordervaluePapyrus;
                else if ( (L"partyFavor")             == sValue ) this->m_eValue = bordervaluePartyFavor;
                else if ( (L"partyGlass")             == sValue ) this->m_eValue = bordervaluePartyGlass;
                else if ( (L"pencils")                == sValue ) this->m_eValue = bordervaluePencils;
                else if ( (L"people")                 == sValue ) this->m_eValue = bordervaluePeople;
                else if ( (L"peopleHats")             == sValue ) this->m_eValue = bordervaluePeopleHats;
                else if ( (L"peopleWaving")           == sValue ) this->m_eValue = bordervaluePeopleWaving;
                else if ( (L"poinsettias")            == sValue ) this->m_eValue = bordervaluePoinsettias;
                else if ( (L"postageStamp")           == sValue ) this->m_eValue = bordervaluePostageStamp;
                else if ( (L"pumpkin1")               == sValue ) this->m_eValue = bordervaluePumpkin1;
                else if ( (L"pushPinNote1")           == sValue ) this->m_eValue = bordervaluePushPinNote1;
                else if ( (L"pushPinNote2")           == sValue ) this->m_eValue = bordervaluePushPinNote2;
                else if ( (L"pyramids")               == sValue ) this->m_eValue = bordervaluePyramids;
                else if ( (L"pyramidsAbove")          == sValue ) this->m_eValue = bordervaluePyramidsAbove;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'q':
            {
                if      ( (L"quadrants")              == sValue ) this->m_eValue = bordervalueQuadrants;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'r':
            {
                if      ( (L"rings")                  == sValue ) this->m_eValue = bordervalueRings;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 's':
            {
                if      ( (L"safari")                 == sValue ) this->m_eValue = bordervalueSafari;
                else if ( (L"sawtooth")               == sValue ) this->m_eValue = bordervalueSawtooth;
                else if ( (L"sawtoothGray")           == sValue ) this->m_eValue = bordervalueSawtoothGray;
                else if ( (L"scaredCat")              == sValue ) this->m_eValue = bordervalueScaredCat;
                else if ( (L"seattle")                == sValue ) this->m_eValue = bordervalueSeattle;
                else if ( (L"shadowedSquares")        == sValue ) this->m_eValue = bordervalueShadowedSquares;
                else if ( (L"shapes1")                == sValue ) this->m_eValue = bordervalueShapes1;
                else if ( (L"shapes2")                == sValue ) this->m_eValue = bordervalueShapes2;
                else if ( (L"sharksTeeth")            == sValue ) this->m_eValue = bordervalueSharksTeeth;
                else if ( (L"shorebirdTracks")        == sValue ) this->m_eValue = bordervalueShorebirdTracks;
                else if ( (L"single")                 == sValue ) this->m_eValue = bordervalueSingle;
                else if ( (L"skyrocket")              == sValue ) this->m_eValue = bordervalueSkyrocket;
                else if ( (L"snowflakeFancy")         == sValue ) this->m_eValue = bordervalueSnowflakeFancy;
                else if ( (L"snowflakes")             == sValue ) this->m_eValue = bordervalueSnowflakes;
                else if ( (L"sombrero")               == sValue ) this->m_eValue = bordervalueSombrero;
                else if ( (L"southwest")              == sValue ) this->m_eValue = bordervalueSouthwest;
                else if ( (L"stars")                  == sValue ) this->m_eValue = bordervalueStars;
                else if ( (L"stars3d")                == sValue ) this->m_eValue = bordervalueStars3d;
                else if ( (L"starsBlack")             == sValue ) this->m_eValue = bordervalueStarsBlack;
                else if ( (L"starsShadowed")          == sValue ) this->m_eValue = bordervalueStarsShadowed;
                else if ( (L"starsTop")               == sValue ) this->m_eValue = bordervalueStarsTop;
                else if ( (L"sun")                    == sValue ) this->m_eValue = bordervalueSun;
                else if ( (L"swirligig")              == sValue ) this->m_eValue = bordervalueSwirligig;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 't':
            {
                if      ( (L"thick")                  == sValue ) this->m_eValue = bordervalueThick;
                else if ( (L"thickThinLargeGap")      == sValue ) this->m_eValue = bordervalueThickThinLargeGap;
                else if ( (L"thickThinMediumGap")     == sValue ) this->m_eValue = bordervalueThickThinMediumGap;
                else if ( (L"thickThinSmallGap")      == sValue ) this->m_eValue = bordervalueThickThinSmallGap;
                else if ( (L"thinThickLargeGap")      == sValue ) this->m_eValue = bordervalueThinThickLargeGap;
                else if ( (L"thinThickMediumGap")     == sValue ) this->m_eValue = bordervalueThinThickMediumGap;
                else if ( (L"thinThickSmallGap")      == sValue ) this->m_eValue = bordervalueThinThickSmallGap;
                else if ( (L"thinThickThinLargeGap")  == sValue ) this->m_eValue = bordervalueThinThickThinLargeGap;
                else if ( (L"thinThickThinMediumGap") == sValue ) this->m_eValue = bordervalueThinThickThinMediumGap;
                else if ( (L"thinThickThinSmallGap")  == sValue ) this->m_eValue = bordervalueThinThickThinSmallGap;
                else if ( (L"threeDEmboss")           == sValue ) this->m_eValue = bordervalueThreeDEmboss;
                else if ( (L"threeDEngrave")          == sValue ) this->m_eValue = bordervalueThreeDEngrave;
                else if ( (L"tornPaper")              == sValue ) this->m_eValue = bordervalueTornPaper;
                else if ( (L"tornPaperBlack")         == sValue ) this->m_eValue = bordervalueTornPaperBlack;
                else if ( (L"trees")                  == sValue ) this->m_eValue = bordervalueTrees;
                else if ( (L"triangle1")              == sValue ) this->m_eValue = bordervalueTriangle1;
                else if ( (L"triangle2")              == sValue ) this->m_eValue = bordervalueTriangle2;
                else if ( (L"triangleCircle1")        == sValue ) this->m_eValue = bordervalueTriangleCircle1;
                else if ( (L"triangleCircle2")        == sValue ) this->m_eValue = bordervalueTriangleCircle2;
                else if ( (L"triangleParty")          == sValue ) this->m_eValue = bordervalueTriangleParty;
                else if ( (L"triangles")              == sValue ) this->m_eValue = bordervalueTriangles;
                else if ( (L"triple")                 == sValue ) this->m_eValue = bordervalueTriple;
                else if ( (L"twistedLines1")          == sValue ) this->m_eValue = bordervalueTwistedLines1;
                else if ( (L"twistedLines2")          == sValue ) this->m_eValue = bordervalueTwistedLines2;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'v':
            {
                if      ( (L"vine")                   == sValue ) this->m_eValue = bordervalueVine;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'w':
            {
                if      ( (L"wave")                   == sValue ) this->m_eValue = bordervalueWave;
                else if ( (L"waveline")               == sValue ) this->m_eValue = bordervalueWaveline;
                else if ( (L"weavingAngles")          == sValue ) this->m_eValue = bordervalueWeavingAngles;
                else if ( (L"weavingBraid")           == sValue ) this->m_eValue = bordervalueWeavingBraid;
                else if ( (L"weavingRibbon")          == sValue ) this->m_eValue = bordervalueWeavingRibbon;
                else if ( (L"weavingStrips")          == sValue ) this->m_eValue = bordervalueWeavingStrips;
                else if ( (L"whiteFlowers")           == sValue ) this->m_eValue = bordervalueWhiteFlowers;
                else if ( (L"woodwork")               == sValue ) this->m_eValue = bordervalueWoodwork;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'x':
            {
                if      ( (L"xIllusions")             == sValue ) this->m_eValue = bordervalueXIllusions;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        case 'z':
            {
                if      ( (L"zanyTriangles")          == sValue ) this->m_eValue = bordervalueZanyTriangles;
                else if ( (L"zigZag")                 == sValue ) this->m_eValue = bordervalueZigZag;
                else if ( (L"zigZagStitch")           == sValue ) this->m_eValue = bordervalueZigZagStitch;
                else                                               this->m_eValue = eDefValue;
                break;
            }
        default:
            {
                this->m_eValue = eDefValue;
                break;
            }
        }

        return this->m_eValue;
    }

    template<EBorder eDefValue>
    std::wstring CBorder<eDefValue>::ToString() const
    {
        switch(this->m_eValue)
        {
        case bordervalueApples                : return (L"apples");
        case bordervalueArchedScallops        : return (L"archedScallops");
        case bordervalueBabyPacifier          : return (L"babyPacifier");
        case bordervalueBabyRattle            : return (L"babyRattle");
        case bordervalueBalloons3Colors       : return (L"balloons3Colors");
        case bordervalueBalloonsHotAir        : return (L"balloonsHotAir");
        case bordervalueBasicBlackDashes      : return (L"basicBlackDashes");
        case bordervalueBasicBlackDots        : return (L"basicBlackDots");
        case bordervalueBasicBlackSquares     : return (L"basicBlackSquares");
        case bordervalueBasicThinLines        : return (L"basicThinLines");
        case bordervalueBasicWhiteDashes      : return (L"basicWhiteDashes");
        case bordervalueBasicWhiteDots        : return (L"basicWhiteDots");
        case bordervalueBasicWhiteSquares     : return (L"basicWhiteSquares");
        case bordervalueBasicWideInline       : return (L"basicWideInline");
        case bordervalueBasicWideMidline      : return (L"basicWideMidline");
        case bordervalueBasicWideOutline      : return (L"basicWideOutline");
        case bordervalueBats                  : return (L"bats");
        case bordervalueBirds                 : return (L"birds");
        case bordervalueBirdsFlight           : return (L"birdsFlight");
        case bordervalueCabins                : return (L"cabins");
        case bordervalueCakeSlice             : return (L"cakeSlice");
        case bordervalueCandyCorn             : return (L"candyCorn");
        case bordervalueCelticKnotwork        : return (L"celticKnotwork");
        case bordervalueCertificateBanner     : return (L"certificateBanner");
        case bordervalueChainLink             : return (L"chainLink");
        case bordervalueChampagneBottle       : return (L"champagneBottle");
        case bordervalueCheckedBarBlack       : return (L"checkedBarBlack");
        case bordervalueCheckedBarColor       : return (L"checkedBarColor");
        case bordervalueCheckered             : return (L"checkered");
        case bordervalueChristmasTree         : return (L"christmasTree");
        case bordervalueCirclesLines          : return (L"circlesLines");
        case bordervalueCirclesRectangles     : return (L"circlesRectangles");
        case bordervalueClassicalWave         : return (L"classicalWave");
        case bordervalueClocks                : return (L"clocks");
        case bordervalueCompass               : return (L"compass");
        case bordervalueConfetti              : return (L"confetti");
        case bordervalueConfettiGrays         : return (L"confettiGrays");
        case bordervalueConfettiOutline       : return (L"confettiOutline");
        case bordervalueConfettiStreamers     : return (L"confettiStreamers");
        case bordervalueConfettiWhite         : return (L"confettiWhite");
        case bordervalueCornerTriangles       : return (L"cornerTriangles");
        case bordervalueCouponCutoutDashes    : return (L"couponCutoutDashes");
        case bordervalueCouponCutoutDots      : return (L"couponCutoutDots");
        case bordervalueCrazyMaze             : return (L"crazyMaze");
        case bordervalueCreaturesButterfly    : return (L"creaturesButterfly");
        case bordervalueCreaturesFish         : return (L"creaturesFish");
        case bordervalueCreaturesInsects      : return (L"creaturesInsects");
        case bordervalueCreaturesLadyBug      : return (L"creaturesLadyBug");
        case bordervalueCrossStitch           : return (L"crossStitch");
        case bordervalueCup                   : return (L"cup");
        case bordervalueCustom                : return (L"custom");
        case bordervalueDashDotStroked        : return (L"dashDotStroked");
        case bordervalueDashed                : return (L"dashed");
        case bordervalueDashSmallGap          : return (L"dashSmallGap");
        case bordervalueDecoArch              : return (L"decoArch");
        case bordervalueDecoArchColor         : return (L"decoArchColor");
        case bordervalueDecoBlocks            : return (L"decoBlocks");
        case bordervalueDiamondsGray          : return (L"diamondsGray");
        case bordervalueDotDash               : return (L"dotDash");
        case bordervalueDotDotDash            : return (L"dotDotDash");
        case bordervalueDotted                : return (L"dotted");
        case bordervalueDouble                : return (L"double");
        case bordervalueDoubleD               : return (L"doubleD");
        case bordervalueDoubleDiamonds        : return (L"doubleDiamonds");
        case bordervalueDoubleWave            : return (L"doubleWave");
        case bordervalueEarth1                : return (L"earth1");
        case bordervalueEarth2                : return (L"earth2");
        case bordervalueEarth3                : return (L"earth3");
        case bordervalueEclipsingSquares1     : return (L"eclipsingSquares1");
        case bordervalueEclipsingSquares2     : return (L"eclipsingSquares2");
        case bordervalueEggsBlack             : return (L"eggsBlack");
        case bordervalueFans                  : return (L"fans");
        case bordervalueFilm                  : return (L"film");
        case bordervalueFirecrackers          : return (L"firecrackers");
        case bordervalueFlowersBlockPrint     : return (L"flowersBlockPrint");
        case bordervalueFlowersDaisies        : return (L"flowersDaisies");
        case bordervalueFlowersModern1        : return (L"flowersModern1");
        case bordervalueFlowersModern2        : return (L"flowersModern2");
        case bordervalueFlowersPansy          : return (L"flowersPansy");
        case bordervalueFlowersRedRose        : return (L"flowersRedRose");
        case bordervalueFlowersRoses          : return (L"flowersRoses");
        case bordervalueFlowersTeacup         : return (L"flowersTeacup");
        case bordervalueFlowersTiny           : return (L"flowersTiny");
        case bordervalueGems                  : return (L"gems");
        case bordervalueGingerbreadMan        : return (L"gingerbreadMan");
        case bordervalueGradient              : return (L"gradient");
        case bordervalueHandmade1             : return (L"handmade1");
        case bordervalueHandmade2             : return (L"handmade2");
        case bordervalueHeartBalloon          : return (L"heartBalloon");
        case bordervalueHeartGray             : return (L"heartGray");
        case bordervalueHearts                : return (L"hearts");
        case bordervalueHeebieJeebies         : return (L"heebieJeebies");
        case bordervalueHolly                 : return (L"holly");
        case bordervalueHouseFunky            : return (L"houseFunky");
        case bordervalueHypnotic              : return (L"hypnotic");
        case bordervalueIceCreamCones         : return (L"iceCreamCones");
        case bordervalueInset                 : return (L"inset");
        case bordervalueLightBulb             : return (L"lightBulb");
        case bordervalueLightning1            : return (L"lightning1");
        case bordervalueLightning2            : return (L"lightning2");
        case bordervalueMapleLeaf             : return (L"mapleLeaf");
        case bordervalueMapleMuffins          : return (L"mapleMuffins");
        case bordervalueMapPins               : return (L"mapPins");
        case bordervalueMarquee               : return (L"marquee");
        case bordervalueMarqueeToothed        : return (L"marqueeToothed");
        case bordervalueMoons                 : return (L"moons");
        case bordervalueMosaic                : return (L"mosaic");
        case bordervalueMusicNotes            : return (L"musicNotes");
        case bordervalueNil                   : return (L"nil");
        case bordervalueNone                  : return (L"none");
        case bordervalueNorthwest             : return (L"northwest");
        case bordervalueOutset                : return (L"outset");
        case bordervalueOvals                 : return (L"ovals");
        case bordervaluePackages              : return (L"packages");
        case bordervaluePalmsBlack            : return (L"palmsBlack");
        case bordervaluePalmsColor            : return (L"palmsColor");
        case bordervaluePaperClips            : return (L"paperClips");
        case bordervaluePapyrus               : return (L"papyrus");
        case bordervaluePartyFavor            : return (L"partyFavor");
        case bordervaluePartyGlass            : return (L"partyGlass");
        case bordervaluePencils               : return (L"pencils");
        case bordervaluePeople                : return (L"people");
        case bordervaluePeopleHats            : return (L"peopleHats");
        case bordervaluePeopleWaving          : return (L"peopleWaving");
        case bordervaluePoinsettias           : return (L"poinsettias");
        case bordervaluePostageStamp          : return (L"postageStamp");
        case bordervaluePumpkin1              : return (L"pumpkin1");
        case bordervaluePushPinNote1          : return (L"pushPinNote1");
        case bordervaluePushPinNote2          : return (L"pushPinNote2");
        case bordervaluePyramids              : return (L"pyramids");
        case bordervaluePyramidsAbove         : return (L"pyramidsAbove");
        case bordervalueQuadrants             : return (L"quadrants");
        case bordervalueRings                 : return (L"rings");
        case bordervalueSafari                : return (L"safari");
        case bordervalueSawtooth              : return (L"sawtooth");
        case bordervalueSawtoothGray          : return (L"sawtoothGray");
        case bordervalueScaredCat             : return (L"scaredCat");
        case bordervalueSeattle               : return (L"seattle");
        case bordervalueShadowedSquares       : return (L"shadowedSquares");
        case bordervalueShapes1               : return (L"shapes1");
        case bordervalueShapes2               : return (L"shapes2");
        case bordervalueSharksTeeth           : return (L"sharksTeeth");
        case bordervalueShorebirdTracks       : return (L"shorebirdTracks");
        case bordervalueSingle                : return (L"single");
        case bordervalueSkyrocket             : return (L"skyrocket");
        case bordervalueSnowflakeFancy        : return (L"snowflakeFancy");
        case bordervalueSnowflakes            : return (L"snowflakes");
        case bordervalueSombrero              : return (L"sombrero");
        case bordervalueSouthwest             : return (L"southwest");
        case bordervalueStars                 : return (L"stars");
        case bordervalueStars3d               : return (L"stars3d");
        case bordervalueStarsBlack            : return (L"starsBlack");
        case bordervalueStarsShadowed         : return (L"starsShadowed");
        case bordervalueStarsTop              : return (L"starsTop");
        case bordervalueSun                   : return (L"sun");
        case bordervalueSwirligig             : return (L"swirligig");
        case bordervalueThick                 : return (L"thick");
        case bordervalueThickThinLargeGap     : return (L"thickThinLargeGap");
        case bordervalueThickThinMediumGap    : return (L"thickThinMediumGap");
        case bordervalueThickThinSmallGap     : return (L"thickThinSmallGap");
        case bordervalueThinThickLargeGap     : return (L"thinThickLargeGap");
        case bordervalueThinThickMediumGap    : return (L"thinThickMediumGap");
        case bordervalueThinThickSmallGap     : return (L"thinThickSmallGap");
        case bordervalueThinThickThinLargeGap : return (L"thinThickThinLargeGap");
        case bordervalueThinThickThinMediumGap: return (L"thinThickThinMediumGap");
        case bordervalueThinThickThinSmallGap : return (L"thinThickThinSmallGap");
        case bordervalueThreeDEmboss          : return (L"threeDEmboss");
        case bordervalueThreeDEngrave         : return (L"threeDEngrave");
        case bordervalueTornPaper             : return (L"tornPaper");
        case bordervalueTornPaperBlack        : return (L"tornPaperBlack");
        case bordervalueTrees                 : return (L"trees");
        case bordervalueTriangle1             : return (L"triangle1");
        case bordervalueTriangle2             : return (L"triangle2");
        case bordervalueTriangleCircle1       : return (L"triangleCircle1");
        case bordervalueTriangleCircle2       : return (L"triangleCircle2");
        case bordervalueTriangleParty         : return (L"triangleParty");
        case bordervalueTriangles             : return (L"triangles");
        case bordervalueTriple                : return (L"triple");
        case bordervalueTwistedLines1         : return (L"twistedLines1");
        case bordervalueTwistedLines2         : return (L"twistedLines2");
        case bordervalueVine                  : return (L"vine");
        case bordervalueWave                  : return (L"wave");
        case bordervalueWaveline              : return (L"waveline");
        case bordervalueWeavingAngles         : return (L"weavingAngles");
        case bordervalueWeavingBraid          : return (L"weavingBraid");
        case bordervalueWeavingRibbon         : return (L"weavingRibbon");
        case bordervalueWeavingStrips         : return (L"weavingStrips");
        case bordervalueWhiteFlowers          : return (L"whiteFlowers");
        case bordervalueWoodwork              : return (L"woodwork");
        case bordervalueXIllusions            : return (L"xIllusions");
        case bordervalueZanyTriangles         : return (L"zanyTriangles");
        case bordervalueZigZag                : return (L"zigZag");
        case bordervalueZigZagStitch          : return (L"zigZagStitch");

        default                               : return (L"none");
        }
    }

    template<EBorder eDefValue>
    bool CBorder<eDefValue>::IsArtBorder() const
    {
        return ((int)this->m_eValue > 100);
    }

    template<EBorder eDefValue>
    bool CBorder<eDefValue>::IsLineBorder() const
    {
        return ( (int)this->m_eValue <= 25 && (int)this->m_eValue >= 1 );
    }

    template<EBorder eDefValue>
    bool CBorder<eDefValue>::IsNoBorder() const
    {
        return ( (int)this->m_eValue <= 0 );
    }
}
