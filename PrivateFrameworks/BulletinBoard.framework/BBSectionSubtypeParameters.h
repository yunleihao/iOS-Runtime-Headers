/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBColor, BBSectionIcon, BBSectionSubtypeParameters, NSNumber, NSSet, NSString;

@interface BBSectionSubtypeParameters : NSObject <NSSecureCoding> {
    NSString *_alternateActionLabel;
    NSString *_bannerAccessoryRemoteServiceBundleIdentifier;
    NSString *_bannerAccessoryRemoteViewControllerClassName;
    NSNumber *_boxedBannerShowsSubtitle;
    NSNumber *_boxedCanBeSilencedByMenuButtonPress;
    NSNumber *_boxedCoalescesWhenLocked;
    NSNumber *_boxedIPodOutAlertType;
    NSNumber *_boxedIgnoresQuietMode;
    NSNumber *_boxedInertWhenLocked;
    NSNumber *_boxedPreservesUnlockActionCase;
    NSNumber *_boxedPreventLock;
    NSNumber *_boxedRealertCount;
    NSNumber *_boxedSubtypePriority;
    NSNumber *_boxedSuppressesAlertsWhenAppIsActive;
    NSNumber *_boxedSuppressesMessageForPrivacy;
    NSNumber *_boxedVisuallyIndicatesWhenDateIsInFuture;
    BBSectionSubtypeParameters *_fallbackParameters;
    NSString *_fullAlternateActionLabel;
    NSString *_fullUnlockActionLabel;
    NSString *_missedBannerDescriptionFormat;
    NSString *_secondaryContentRemoteServiceBundleIdentifier;
    NSString *_secondaryContentRemoteViewControllerClassName;
    BBSectionIcon *_sectionIconOverride;
    BBColor *_tintColor;
    NSString *_topic;
    NSString *_unlockActionLabel;
}

@property(retain) NSSet * alertSuppressionAppIDs;
@property(copy) NSString * alternateActionLabel;
@property(copy) NSString * bannerAccessoryRemoteServiceBundleIdentifier;
@property(copy) NSString * bannerAccessoryRemoteViewControllerClassName;
@property BOOL bannerShowsSubtitle;
@property(retain) NSNumber * boxedBannerShowsSubtitle;
@property(retain) NSNumber * boxedCanBeSilencedByMenuButtonPress;
@property(retain) NSNumber * boxedCoalescesWhenLocked;
@property(retain) NSNumber * boxedIPodOutAlertType;
@property(retain) NSNumber * boxedIgnoresQuietMode;
@property(retain) NSNumber * boxedInertWhenLocked;
@property(retain) NSNumber * boxedPreservesUnlockActionCase;
@property(retain) NSNumber * boxedPreventLock;
@property(retain) NSNumber * boxedRealertCount;
@property(retain) NSNumber * boxedSubtypePriority;
@property(retain) NSNumber * boxedSuppressesAlertsWhenAppIsActive;
@property(retain) NSNumber * boxedSuppressesMessageForPrivacy;
@property(retain) NSNumber * boxedVisuallyIndicatesWhenDateIsInFuture;
@property BOOL canBeSilencedByMenuButtonPress;
@property BOOL coalescesWhenLocked;
@property BBSectionSubtypeParameters * fallbackParameters;
@property(copy) NSString * fullAlternateActionLabel;
@property(copy) NSString * fullUnlockActionLabel;
@property int iPodOutAlertType;
@property BOOL ignoresQuietMode;
@property BOOL inertWhenLocked;
@property(copy) NSString * missedBannerDescriptionFormat;
@property BOOL preservesUnlockActionCase;
@property BOOL preventLock;
@property unsigned int realertCount;
@property(copy) NSString * secondaryContentRemoteServiceBundleIdentifier;
@property(copy) NSString * secondaryContentRemoteViewControllerClassName;
@property(copy) BBSectionIcon * sectionIconOverride;
@property unsigned int subtypePriority;
@property BOOL suppressesAlertsWhenAppIsActive;
@property BOOL suppressesMessageForPrivacy;
@property(retain) BBColor * tintColor;
@property(copy) NSString * topic;
@property(copy) NSString * unlockActionLabel;
@property BOOL visuallyIndicatesWhenDateIsInFuture;

+ (BOOL)supportsSecureCoding;

- (id)alertSuppressionAppIDs;
- (id)alternateActionLabel;
- (id)bannerAccessoryRemoteServiceBundleIdentifier;
- (id)bannerAccessoryRemoteViewControllerClassName;
- (BOOL)bannerShowsSubtitle;
- (id)boxedBannerShowsSubtitle;
- (id)boxedCanBeSilencedByMenuButtonPress;
- (id)boxedCoalescesWhenLocked;
- (id)boxedIPodOutAlertType;
- (id)boxedIgnoresQuietMode;
- (id)boxedInertWhenLocked;
- (id)boxedPreservesUnlockActionCase;
- (id)boxedPreventLock;
- (id)boxedRealertCount;
- (id)boxedSubtypePriority;
- (id)boxedSuppressesAlertsWhenAppIsActive;
- (id)boxedSuppressesMessageForPrivacy;
- (id)boxedVisuallyIndicatesWhenDateIsInFuture;
- (BOOL)canBeSilencedByMenuButtonPress;
- (BOOL)coalescesWhenLocked;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackParameters;
- (id)fullAlternateActionLabel;
- (id)fullUnlockActionLabel;
- (int)iPodOutAlertType;
- (BOOL)ignoresQuietMode;
- (BOOL)inertWhenLocked;
- (id)initWithCoder:(id)arg1;
- (id)initWithFallbackParameters:(id)arg1;
- (id)missedBannerDescriptionFormat;
- (BOOL)preservesUnlockActionCase;
- (BOOL)preventLock;
- (unsigned int)realertCount;
- (id)secondaryContentRemoteServiceBundleIdentifier;
- (id)secondaryContentRemoteViewControllerClassName;
- (id)sectionIconOverride;
- (void)setAlertSuppressionAppIDs:(id)arg1;
- (void)setAlternateActionLabel:(id)arg1;
- (void)setBannerAccessoryRemoteServiceBundleIdentifier:(id)arg1;
- (void)setBannerAccessoryRemoteViewControllerClassName:(id)arg1;
- (void)setBannerShowsSubtitle:(BOOL)arg1;
- (void)setBoxedBannerShowsSubtitle:(id)arg1;
- (void)setBoxedCanBeSilencedByMenuButtonPress:(id)arg1;
- (void)setBoxedCoalescesWhenLocked:(id)arg1;
- (void)setBoxedIPodOutAlertType:(id)arg1;
- (void)setBoxedIgnoresQuietMode:(id)arg1;
- (void)setBoxedInertWhenLocked:(id)arg1;
- (void)setBoxedPreservesUnlockActionCase:(id)arg1;
- (void)setBoxedPreventLock:(id)arg1;
- (void)setBoxedRealertCount:(id)arg1;
- (void)setBoxedSubtypePriority:(id)arg1;
- (void)setBoxedSuppressesAlertsWhenAppIsActive:(id)arg1;
- (void)setBoxedSuppressesMessageForPrivacy:(id)arg1;
- (void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(id)arg1;
- (void)setCanBeSilencedByMenuButtonPress:(BOOL)arg1;
- (void)setCoalescesWhenLocked:(BOOL)arg1;
- (void)setFallbackParameters:(id)arg1;
- (void)setFullAlternateActionLabel:(id)arg1;
- (void)setFullUnlockActionLabel:(id)arg1;
- (void)setIPodOutAlertType:(int)arg1;
- (void)setIgnoresQuietMode:(BOOL)arg1;
- (void)setInertWhenLocked:(BOOL)arg1;
- (void)setMissedBannerDescriptionFormat:(id)arg1;
- (void)setPreservesUnlockActionCase:(BOOL)arg1;
- (void)setPreventLock:(BOOL)arg1;
- (void)setRealertCount:(unsigned int)arg1;
- (void)setSecondaryContentRemoteServiceBundleIdentifier:(id)arg1;
- (void)setSecondaryContentRemoteViewControllerClassName:(id)arg1;
- (void)setSectionIconOverride:(id)arg1;
- (void)setSubtypePriority:(unsigned int)arg1;
- (void)setSuppressesAlertsWhenAppIsActive:(BOOL)arg1;
- (void)setSuppressesMessageForPrivacy:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUnlockActionLabel:(id)arg1;
- (void)setVisuallyIndicatesWhenDateIsInFuture:(BOOL)arg1;
- (unsigned int)subtypePriority;
- (BOOL)suppressesAlertsWhenAppIsActive;
- (BOOL)suppressesMessageForPrivacy;
- (id)tintColor;
- (id)topic;
- (id)unlockActionLabel;
- (BOOL)visuallyIndicatesWhenDateIsInFuture;

@end
