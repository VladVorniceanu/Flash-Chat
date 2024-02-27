#import <Foundation/Foundation.h>

#if __has_attribute(swift_private)
#define AC_SWIFT_PRIVATE __attribute__((swift_private))
#else
#define AC_SWIFT_PRIVATE
#endif

/// The resource bundle ID.
static NSString * const ACBundleID AC_SWIFT_PRIVATE = @"co.appbrewery.Flash-Chat-iOS13";

/// The "BrandBlue" asset catalog color resource.
static NSString * const ACColorNameBrandBlue AC_SWIFT_PRIVATE = @"BrandBlue";

/// The "BrandLightBlue" asset catalog color resource.
static NSString * const ACColorNameBrandLightBlue AC_SWIFT_PRIVATE = @"BrandLightBlue";

/// The "BrandLightPurple" asset catalog color resource.
static NSString * const ACColorNameBrandLightPurple AC_SWIFT_PRIVATE = @"BrandLightPurple";

/// The "BrandPurple" asset catalog color resource.
static NSString * const ACColorNameBrandPurple AC_SWIFT_PRIVATE = @"BrandPurple";

/// The "MeAvatar" asset catalog image resource.
static NSString * const ACImageNameMeAvatar AC_SWIFT_PRIVATE = @"MeAvatar";

/// The "YouAvatar" asset catalog image resource.
static NSString * const ACImageNameYouAvatar AC_SWIFT_PRIVATE = @"YouAvatar";

/// The "textfield" asset catalog image resource.
static NSString * const ACImageNameTextfield AC_SWIFT_PRIVATE = @"textfield";

#undef AC_SWIFT_PRIVATE