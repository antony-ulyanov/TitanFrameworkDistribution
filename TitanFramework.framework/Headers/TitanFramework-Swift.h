// Generated by Apple Swift version 5.1 effective-4.2 (swiftlang-1100.0.270.13 clang-1100.0.33.7)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreData;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import WebKit;
@import WebRTC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="TitanFramework",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC14TitanFramework23BaseTableViewController")
@interface BaseTableViewController : UITableViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14TitanFramework10BundleUtil")
@interface BundleUtil : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14TitanFramework14ComponentStyle")
@interface ComponentStyle : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

@class UIProgressView;

SWIFT_CLASS("_TtC14TitanFramework21DepositViewController")
@interface DepositViewController : UIViewController <UIWebViewDelegate>
@property (nonatomic, weak) IBOutlet UIProgressView * _Null_unspecified progressView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class WKWebView;
@class WKNavigation;
@class WKNavigationAction;

@interface DepositViewController (SWIFT_EXTENSION(TitanFramework)) <WKNavigationDelegate>
- (void)webView:(WKWebView * _Nonnull)webView didCommitNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)navigationAction decisionHandler:(void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
- (void)webView:(WKWebView * _Nonnull)webView didFinishNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFailNavigation:(WKNavigation * _Null_unspecified)navigation withError:(NSError * _Nonnull)error;
@end

@class NSStream;

SWIFT_CLASS("_TtC14TitanFramework16FoundationStream")
@interface FoundationStream : NSObject <NSStreamDelegate>
/// Delegate for the stream methods. Processes incoming bytes
- (void)stream:(NSStream * _Nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS_NAMED("Measure")
@interface Measure : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Measure (SWIFT_EXTENSION(TitanFramework))
@property (nonatomic, copy) NSString * _Nullable characteristic;
@property (nonatomic, copy) NSString * _Nullable kind;
@property (nonatomic, copy) NSDate * _Nullable measureDate;
@property (nonatomic, copy) NSString * _Nullable syncStatus;
@property (nonatomic, copy) NSString * _Nullable value;
@end


SWIFT_CLASS_NAMED("Metric")
@interface Metric : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface Metric (SWIFT_EXTENSION(TitanFramework))
@property (nonatomic, copy) NSString * _Nullable kind;
@property (nonatomic, copy) NSDate * _Nullable lastMeasure;
@property (nonatomic, copy) NSString * _Nullable sensorId;
@property (nonatomic, copy) NSString * _Nullable sensorModel;
@property (nonatomic, copy) NSString * _Nullable sensorName;
@property (nonatomic, copy) NSString * _Nullable sensorStatus;
@end


SWIFT_CLASS("_TtC14TitanFramework16MimasInitializer")
@interface MimasInitializer : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework12MimasManager")
@interface MimasManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end






SWIFT_CLASS("_TtC14TitanFramework14SystemSettings")
@interface SystemSettings : NSObject <NSCoding>
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)decoder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework12TMKCacheable")
@interface TMKCacheable : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework14TMKAppointment")
@interface TMKAppointment : TMKCacheable
@end

@class UIColor;

/// Badge view control for iOS and tvOS.
/// Project home: https://github.com/evgenyneu/swift-badge
SWIFT_CLASS("_TtC14TitanFramework8TMKBadge")
@interface TMKBadge : UILabel
/// Background color of the badge
@property (nonatomic, strong) UIColor * _Nonnull badgeColor;
/// Width of the badge border
@property (nonatomic) CGFloat borderWidth;
/// Color of the bardge border
@property (nonatomic, strong) UIColor * _Nonnull borderColor;
/// Badge insets that describe the margin between text and the edge of the badge.
@property (nonatomic) CGSize insets;
/// Opacity of the badge shadow
@property (nonatomic) CGFloat shadowOpacityBadge;
/// Size of the badge shadow
@property (nonatomic) CGFloat shadowRadiusBadge;
/// Color of the badge shadow
@property (nonatomic, strong) UIColor * _Nonnull shadowColorBadge;
/// Offset of the badge shadow
@property (nonatomic) CGSize shadowOffsetBadge;
/// Corner radius of the badge. -1 if unspecified. When unspecified, the corner is fully rounded. Default: -1.
@property (nonatomic) CGFloat cornerRadius;
/// Initialize the badge view
- (nonnull instancetype)init;
/// Initialize the badge view
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
/// Initialize the badge view
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Add custom insets around the text
- (CGRect)textRectForBounds:(CGRect)bounds limitedToNumberOfLines:(NSInteger)numberOfLines SWIFT_WARN_UNUSED_RESULT;
/// Draws the label with insets
- (void)drawTextInRect:(CGRect)rect;
/// Draw the background of the badge
- (void)drawRect:(CGRect)rect;
/// Draw the stars in interface builder
- (void)prepareForInterfaceBuilder SWIFT_AVAILABILITY(ios,introduced=8.0);
@end


@class RTCPeerConnection;
@class RTCIceCandidate;
@class RTCMediaStream;
@class RTCDataChannel;

SWIFT_CLASS("_TtC14TitanFramework7TMKCall")
@interface TMKCall : NSObject <RTCPeerConnectionDelegate>
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didRemoveIceCandidates:(NSArray<RTCIceCandidate *> * _Nonnull)candidates;
- (void)peerConnectionShouldNegotiate:(RTCPeerConnection * _Nonnull)peerConnection;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didRemoveStream:(RTCMediaStream * _Nonnull)stream;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didChangeSignalingState:(RTCSignalingState)newState;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didChangeIceGatheringState:(RTCIceGatheringState)newState;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didChangeIceConnectionState:(RTCIceConnectionState)newState;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didAddStream:(RTCMediaStream * _Nonnull)stream;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didGenerateIceCandidate:(RTCIceCandidate * _Nonnull)candidate;
- (void)peerConnection:(RTCPeerConnection * _Nonnull)peerConnection didOpenDataChannel:(RTCDataChannel * _Nonnull)dataChannel;
- (void)didSessionRouteChangeWithNotification:(NSNotification * _Nonnull)notification;
@end


SWIFT_CLASS("_TtC14TitanFramework7TMKChat")
@interface TMKChat : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14TitanFramework14TMKChatMessage")
@interface TMKChatMessage : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework14TMKChatSession")
@interface TMKChatSession : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework9TMKDoctor")
@interface TMKDoctor : TMKCacheable
@end


SWIFT_CLASS("_TtC14TitanFramework12TMKDutyPrice")
@interface TMKDutyPrice : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework16TMKEAGLVideoView")
@interface TMKEAGLVideoView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutIfNeeded;
@end



@class RTCEAGLVideoView;

@interface TMKEAGLVideoView (SWIFT_EXTENSION(TitanFramework)) <RTCEAGLVideoViewDelegate>
- (void)videoView:(RTCEAGLVideoView * _Nonnull)videoView didChangeVideoSize:(CGSize)size;
@end


SWIFT_CLASS("_TtC14TitanFramework16TMKEventsTracker")
@interface TMKEventsTracker : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14TitanFramework12TMKFramework")
@interface TMKFramework : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14TitanFramework23TMKNotificationSettings")
@interface TMKNotificationSettings : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC14TitanFramework27TMKNotificationSettingsItem")
@interface TMKNotificationSettingsItem : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework10TMKPatient")
@interface TMKPatient : TMKCacheable
@end


SWIFT_CLASS("_TtC14TitanFramework9TMKPerson")
@interface TMKPerson : TMKCacheable
@end


SWIFT_CLASS("_TtC14TitanFramework11TMKSchedule")
@interface TMKSchedule : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework15TMKScheduleSlot")
@interface TMKScheduleSlot : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework14TMKStatsRecord")
@interface TMKStatsRecord : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework15TMKVideoSession")
@interface TMKVideoSession : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end




SWIFT_CLASS("_TtC14TitanFramework13TMKVideoTrack")
@interface TMKVideoTrack : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework16TitanInitializer")
@interface TitanInitializer : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC14TitanFramework12TitanManager")
@interface TitanManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end












@interface UIImagePickerController (SWIFT_EXTENSION(TitanFramework))
@property (nonatomic, readonly) BOOL shouldAutorotate;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
@end
















SWIFT_CLASS("_TtC14TitanFramework9WebSocket")
@interface WebSocket : NSObject <NSStreamDelegate>
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
