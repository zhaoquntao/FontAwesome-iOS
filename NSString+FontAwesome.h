///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  NSString+FontAwesome.h
//
//  Created by Dalton Cherry on 4/24/13.
//  Copyright 2013 Basement Krew. All rights reserved.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//font awesome license:
//The Font Awesome font is licensed under the SIL Open Font License
//Font Awesome CSS, LESS, and SASS files are licensed under the MIT License
//The Font Awesome pictograms are licensed under the CC BY 3.0 License
//Attribution is no longer required in Font Awesome 3.0, but much appreciated:
//"Font Awesome by Dave Gandy - http://fortawesome.github.com/Font-Awesome"

//font awesome icon enum - 359 icons in all!
typedef enum {
    AwesomeIconGlass = 0,
    AwesomeIconMusic,
    AwesomeIconSearch,
    AwesomeIconEnvelope,
    AwesomeIconHeart,
    AwesomeIconStar,
    AwesomeIconStarEmpty,
    AwesomeIconUser,
    AwesomeIconFilm,
    AwesomeIconThLarge,
    AwesomeIconTh,
    AwesomeIconThList,
    AwesomeIconOk,
    AwesomeIconRemove,
    AwesomeIconZoomIn,
    AwesomeIconZoomOut,
    AwesomeIconOff,
    AwesomeIconSignal,
    AwesomeIconCog,
    AwesomeIconTrash,
    AwesomeIconHome,
    AwesomeIconFile,
    AwesomeIconTime,
    AwesomeIconRoad,
    AwesomeIconDownloadAlt,
    AwesomeIconDownload,
    AwesomeIconUpload,
    AwesomeIconInbox,
    AwesomeIconPlayCircle,
    AwesomeIconRepeat,
    AwesomeIconRefresh,
    AwesomeIconListAlt,
    AwesomeIconLock,
    AwesomeIconFlag,
    AwesomeIconHeadphones,
    AwesomeIconVolumeOff,
    AwesomeIconVolumeDown,
    AwesomeIconVolumeUp,
    AwesomeIconQRCode,
    AwesomeIconBarcode,
    AwesomeIconTag,
    AwesomeIconTags,
    AwesomeIconBook,
    AwesomeIconBookmark,
    AwesomeIconPrint,
    AwesomeIconCamera,
    AwesomeIconFont,
    AwesomeIconBold,
    AwesomeIconItalic,
    AwesomeIconTextHeight,
    AwesomeIconTextWidth,
    AwesomeIconAlignLeft,
    AwesomeIconAlignCenter,
    AwesomeIconAlignRight,
    AwesomeIconAlignJustify,
    AwesomeIconList,
    AwesomeIconIndentLeft,
    AwesomeIconIndentRight,
    AwesomeIconFaceTimeVideo,
    AwesomeIconPicture,
    AwesomeIconPencil,
    AwesomeIconMapMarker,
    AwesomeIconAdjust,
    AwesomeIconTint,
    AwesomeIconEdit,
    AwesomeIconShare,
    AwesomeIconCheck,
    AwesomeIconMove,
    AwesomeIconStepBackward,
    AwesomeIconFastBackward,
    AwesomeIconBackward,
    AwesomeIconPlay,
    AwesomeIconPause,
    AwesomeIconStop,
    AwesomeIconForward,
    AwesomeIconFastForward,
    AwesomeIconStepForward,
    AwesomeIconEject,
    AwesomeIconChevronLeft,
    AwesomeIconChevronRight,
    AwesomeIconPlusSign,
    AwesomeIconMinusSign,
    AwesomeIconRemoveSign,
    AwesomeIconOkSign,
    AwesomeIconQuestionSign,
    AwesomeIconInfoSign,
    AwesomeIconScreenShot,
    AwesomeIconremoveCircle,
    AwesomeIconOkCircle,
    AwesomeIconBanCircle,
    AwesomeIconArrowLeft,
    AwesomeIconArrowRight,
    AwesomeIconArrowUp,
    AwesomeIconArrowDown,
    AwesomeIconShareAlt,
    AwesomeIconResizeFull,
    AwesomeIconResizeSmall,
    AwesomeIconPlus,
    AwesomeIconMinus,
    AwesomeIconAsterisk,
    AwesomeIconExclamationSign,
    AwesomeIconGift,
    AwesomeIconLeaf,
    AwesomeIconFire,
    AwesomeIconEyeOpen,
    AwesomeIconEyeClose,
    AwesomeIconWarningSign,
    AwesomeIconPlane,
    AwesomeIconCalendar,
    AwesomeIconRandom,
    AwesomeIconComment,
    AwesomeIconMagnet,
    AwesomeIconChevronUp,
    AwesomeIconChevronDown,
    AwesomeIconReTweet,
    AwesomeIconShoppingCart,
    AwesomeIconFolderClose,
    AwesomeIconFolderOpen,
    AwesomeIconResizeVertical,
    AwesomeIconResizeHorizontal,
    AwesomeIconBarChar,
    AwesomeIconTwitterSign,
    AwesomeIconFacebookSign,
    AwesomeIconCameraRetro,
    AwesomeIconKey,
    AwesomeIconCogs,
    AwesomeIconComments,
    AwesomeIconThumbsUp,
    AwesomeIconThumbsDown,
    AwesomeIconStarHalf,
    AwesomeIconHeartEmpty,
    AwesomeIconSignout,
    AwesomeIconLinkedinSign,
    AwesomeIconPushpin,
    AwesomeIconExternalLink,
    AwesomeIconSignin,
    AwesomeIconTrophy,
    AwesomeIconGithubSign,
    AwesomeIconUploadAlt,
    AwesomeIconLemon,
    AwesomeIconPhone,
    AwesomeIconCheckEmpty,
    AwesomeIconBookmarkEmpty,
    AwesomeIconPhoneSign,
    AwesomeIconTwitter,
    AwesomeIconFacebook,
    AwesomeIconGithub,
    AwesomeIconUnlock,
    AwesomeIconCreditCard,
    AwesomeIconRSS,
    AwesomeIconHDD,
    AwesomeIconBullHorn,
    AwesomeIconBell,
    AwesomeIconCertificate,
    AwesomeIconHandRight,
    AwesomeIconHandLeft,
    AwesomeIconHandUp,
    AwesomeIconHandDown,
    AwesomeIconCircleArrowLeft,
    AwesomeIconCircleArrowRight,
    AwesomeIconCircleArrowUp,
    AwesomeIconCircleArrowDown,
    AwesomeIconGlobe,
    AwesomeIconWrench,
    AwesomeIconTasks,
    AwesomeIconFilter,
    AwesomeIconBriefcase,
    AwesomeIconFullscreen,
    AwesomeIconGroup,
    AwesomeIconLink,
    AwesomeIconCloud,
    AwesomeIconBeaker,
    AwesomeIconCut,
    AwesomeIconCopy,
    AwesomeIconPaperClip,
    AwesomeIconSave,
    AwesomeIconSignBlank,
    AwesomeIconReorder,
    AwesomeIconListul,
    AwesomeIconListol,
    AwesomeIconStrikeThrough,
    AwesomeIconUnderline,
    AwesomeIconTable,
    AwesomeIconMagic,
    AwesomeIconTruck,
    AwesomeIconPinterest,
    AwesomeIconPinterestSign,
    AwesomeIconGooglePlusSign,
    AwesomeIconGooglePlus,
    AwesomeIconMoney,
    AwesomeIconCaretDown,
    AwesomeIconCaretUp,
    AwesomeIconCaretLeft,
    AwesomeIconCaretRight,
    AwesomeIconColumns,
    AwesomeIconSort,
    AwesomeIconSortDown,
    AwesomeIconSortUp,
    AwesomeIconEnelopeAlt,
    AwesomeIconLinkedin,
    AwesomeIconUndo,
    AwesomeIconLegal,
    AwesomeIconDashboard,
    AwesomeIconCommentAlt,
    AwesomeIconCommentsAlt,
    AwesomeIconBolt,
    AwesomeIconSitemap,
    AwesomeIconUmbrella,
    AwesomeIconPaste,
    AwesomeIconLightbulb,
    AwesomeIconExchange,
    AwesomeIconCloudDownload,
    AwesomeIconCloudUpload,
    AwesomeIconUserMD,
    AwesomeIconStethoscope,
    AwesomeIconSuitCase,
    AwesomeIconBellAlt,
    AwesomeIconCoffee,
    AwesomeIconFood,
    AwesomeIconFileAlt,
    AwesomeIconBuilding,
    AwesomeIconHospital,
    AwesomeIconAmbulance,
    AwesomeIconMedkit,
    AwesomeIconFighterJet,
    AwesomeIconBeer,
    AwesomeIconHSign,
    AwesomeIconPlusSignAlt,
    AwesomeIconDoubleAngleLeft,
    AwesomeIconDoubleAngleRight,
    AwesomeIconDoubleAngleUp,
    AwesomeIconDoubleAngleDown,
    AwesomeIconAngleLeft,
    AwesomeIconAngleRight,
    AwesomeIconAngleUp,
    AwesomeIconAngleDown,
    AwesomeIconDesktop,
    AwesomeIconLaptop,
    AwesomeIconTablet,
    AwesomeIconMobilePhone,
    AwesomeIconCircleBlank,
    AwesomeIconQuoteLeft,
    AwesomeIconQuoteRight,
    AwesomeIconSpinner,
    AwesomeIconCircle,
    AwesomeIconReply,
    AwesomeIconGithubAlt,
    AwesomeIconFolderCloseAlt,
    AwesomeIconFolderOpenAlt,
    AwesomeIconExpandAlt,
    AwesomeIconCollapseAlt,
    AwesomeIconSmile,
    AwesomeIconFrown,
    AwesomeIconMeh,
    AwesomeIconGamepad,
    AwesomeIconKeyboard,
    AwesomeIconFlagAlt,
    AwesomeIconFlagCheckered,
    AwesomeIconTerminal,
    AwesomeIconCode,
    AwesomeIconReplyAll,
    AwesomeIconStarHalfEmpty,
    AwesomeIconLocationArrow,
    AwesomeIconCrop,
    AwesomeIconCodeFork,
    AwesomeIconUnlink,
    AwesomeIconQuestion,
    AwesomeIconInfo,
    AwesomeIconExclamation,
    AwesomeIconSuperScript,
    AwesomeIconSubScript,
    AwesomeIconEraser,
    AwesomeIconPuzzlePiece,
    AwesomeIconMicrophone,
    AwesomeIconMicrophoneOff,
    AwesomeIconShield,
    AwesomeIconCalendarEmpty,
    AwesomeIconFireExtinguisher,
    AwesomeIconRocket,
    AwesomeIconMaxcdn,
    AwesomeIconChevronSignLeft,
    AwesomeIconChevronSignRight,
    AwesomeIconChevronSignUp,
    AwesomeIconChevronSignDown,
    AwesomeIconHtml5,
    AwesomeIconCss3,
    AwesomeIconAnchor,
    AwesomeIconUnlockAlt,
    AwesomeIconBullseye,
    AwesomeIconEillpsisHorizontal,
    AwesomeIconEllipsisVertical,
    AwesomeIconRssSign,
    AwesomeIconPlaySign,
    AwesomeIconTicket,
    AwesomeIconMinusSignAlt,
    AwesomeIconCheckMinus,
    AwesomeIconLevelUp,
    AwesomeIconLevelDown,
    AwesomeIconCheckSign,
    AwesomeIconEditSign,
    AwesomeIconExternalLinkSign,
    AwesomeIconShareSign,
    AwesomeIconCompass,
    AwesomeIconCollapse,
    AwesomeIconCollapseTop,
    AwesomeIconExpand,
    AwesomeIconEur,
    AwesomeIconGdp,
    AwesomeIconUsd,
    AwesomeIconInr,
    AwesomeIconJpy,
    AwesomeIconCny,
    AwesomeIconKrw,
    AwesomeIconBtc,
    AwesomeIconFileOther,
    AwesomeIconFileText,
    AwesomeIconSortByAlpha,
    AwesomeIconSortByAlphaAlt,
    AwesomeIconSortByAttrs,
    AwesomeIconSortByAttrsAlt,
    AwesomeIconSortByOrder,
    AwesomeIconSortByOrderAlt,
    AwesomeIconThumbsUpOther,
    AwesomeIconThumbsDownOther,
    AwesomeIconYoutubeSign,
    AwesomeIconYoutube,
    AwesomeIconXing,
    AwesomeIconXingSign,
    AwesomeIconYoutubePlay,
    AwesomeIconDropBox,
    AwesomeIconStackExchange,
    AwesomeIconInstagram,
    AwesomeIconFlickr,
    AwesomeIconAdn,
    AwesomeIconBitBucket,
    AwesomeIconBitBucketSign,
    AwesomeIconTumblr,
    AwesomeIconTumblrSign,
    AwesomeIconLongArrowDown,
    AwesomeIconLongArrowUp,
    AwesomeIconLongArrowLeft,
    AwesomeIconLongArrowRight,
    AwesomeIconApple,
    AwesomeIconWindows,
    AwesomeIconAndroid,
    AwesomeIconLinux,
    AwesomeIconDibbble,
    AwesomeIconSkype,
    AwesomeIconFoursquare,
    AwesomeIconTrello,
    AwesomeIconFemale,
    AwesomeIconMale,
    AwesomeIconGittip,
    AwesomeIconSun,
    AwesomeIconMoon,
    AwesomeIconArchive,
    AwesomeIconBug,
    AwesomeIconVk,
    AwesomeIconWeibo,
    AwesomeIconRenren,
} AwesomeIcon;


@interface NSString (AwesomeString)

//creates a string with the font awesome character
+(NSString*)awesomeIcon:(AwesomeIcon)index;

@end
