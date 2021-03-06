// Generated by Apple Swift version 4.1.2 (swiftlang-902.0.54 clang-902.0.39.2)
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
#include <objc/NSObject.h>
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
#  define SWIFT_ENUM_ATTR __attribute__((enum_extensibility(open)))
# else
#  define SWIFT_ENUM_ATTR
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import AVFoundation;
@import ObjectiveC;
@import Foundation;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Applozic",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@protocol ALSoundRecorderProtocol;
@class NSCoder;

SWIFT_CLASS("_TtC8Applozic21ALSoundRecorderButton")
@interface ALSoundRecorderButton : UIButton
@property (nonatomic, strong) id <ALSoundRecorderProtocol> _Null_unspecified delegate SWIFT_DEPRECATED_OBJC("Swift property 'ALSoundRecorderButton.delegate' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame recorderDelegate:(id <ALSoundRecorderProtocol> _Nonnull)recorderDelegate OBJC_DESIGNATED_INITIALIZER SWIFT_DEPRECATED_OBJC("Swift initializer 'ALSoundRecorderButton.init(frame:recorderDelegate:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)show;
- (void)hide;
- (void)setSoundRecDelegateWithRecorderDelegate:(id <ALSoundRecorderProtocol> _Nonnull)recorderDelegate;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class AVAudioRecorder;

@interface ALSoundRecorderButton (SWIFT_EXTENSION(Applozic)) <AVAudioRecorderDelegate>
- (void)audioRecorderDidFinishRecording:(AVAudioRecorder * _Nonnull)recorder successfully:(BOOL)flag;
@end

@class NSString;

SWIFT_PROTOCOL("_TtP8Applozic23ALSoundRecorderProtocol_")
@protocol ALSoundRecorderProtocol
- (void)finishRecordingAudioWithFileUrl:(NSString * _Nonnull)fileUrl;
- (void)startRecordingAudio;
- (void)cancelRecordingAudio;
- (void)permissionNotGrant;
@end

@class UILabel;

SWIFT_CLASS("_TtC8Applozic21ALTemplateMessageCell")
@interface ALTemplateMessageCell : UICollectionViewCell
@property (nonatomic, readonly, strong) UILabel * _Nonnull textLabel SWIFT_DEPRECATED_OBJC("Swift property 'ALTemplateMessageCell.textLabel' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, readonly) CGFloat leftPadding SWIFT_DEPRECATED_OBJC("Swift property 'ALTemplateMessageCell.leftPadding' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, readonly) CGFloat rightPadding SWIFT_DEPRECATED_OBJC("Swift property 'ALTemplateMessageCell.rightPadding' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)updateWithText:(NSString * _Nonnull)text SWIFT_DEPRECATED_OBJC("Swift method 'ALTemplateMessageCell.update(text:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end


SWIFT_CLASS("_TtC8Applozic22ALTemplateMessageModel")
@interface ALTemplateMessageModel : NSObject
/// Should be a unique identifier.
@property (nonatomic, copy) NSString * _Nonnull identifier;
/// Text to display.
@property (nonatomic, copy) NSString * _Nonnull text;
/// If not set and <code>sendMessageOnSelection</code> is true
/// then the value of <code>text</code> will be used to send the message.
@property (nonatomic, copy) NSString * _Nullable messageToSend;
/// If true then the template will be shown
/// irrespective of the message type of last message.
@property (nonatomic) BOOL showInAllCases;
@property (nonatomic) BOOL onlyShowWhenLastMessageIsText;
@property (nonatomic) BOOL onlyShowWhenLastMessageIsImage;
@property (nonatomic) BOOL onlyShowWhenLastMessageIsVideo;
/// If set to false then the message will not be sent.
@property (nonatomic) BOOL sendMessageOnSelection;
- (nonnull instancetype)initWithIdentifier:(NSString * _Nonnull)identifier text:(NSString * _Nonnull)text OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end


@interface ALTemplateMessageModel (SWIFT_EXTENSION(Applozic))
/// Json will be parsed and mapped to the model.
- (nullable instancetype)initWithJson:(NSDictionary<NSString *, id> * _Nonnull)json SWIFT_DEPRECATED_OBJC("Swift initializer 'ALTemplateMessageModel.init(json:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@end

@class ALTemplateMessagesViewModel;
@class UICollectionView;

SWIFT_CLASS("_TtC8Applozic22ALTemplateMessagesView")
@interface ALTemplateMessagesView : UIView
@property (nonatomic, strong) ALTemplateMessagesViewModel * _Null_unspecified viewModel;
@property (nonatomic, readonly, strong) UICollectionView * _Nonnull collectionView;
/// Closure to be executed when a template message is selected
@property (nonatomic, copy) void (^ _Nullable messageSelected)(NSString * _Nonnull);
- (nonnull instancetype)initWithFrame:(CGRect)frame viewModel:(ALTemplateMessagesViewModel * _Nonnull)viewModel OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class UICollectionViewLayout;

@interface ALTemplateMessagesView (SWIFT_EXTENSION(Applozic)) <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end

@class UIFont;
@class ALMessage;

SWIFT_CLASS("_TtC8Applozic27ALTemplateMessagesViewModel")
@interface ALTemplateMessagesViewModel : NSObject
@property (nonatomic, copy) NSArray<ALTemplateMessageModel *> * _Nonnull messageTemplates;
@property (nonatomic) CGFloat leftRightPadding SWIFT_DEPRECATED_OBJC("Swift property 'ALTemplateMessagesViewModel.leftRightPadding' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic) CGFloat height SWIFT_DEPRECATED_OBJC("Swift property 'ALTemplateMessagesViewModel.height' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
@property (nonatomic, strong) UIFont * _Nullable textFont SWIFT_DEPRECATED_OBJC("Swift property 'ALTemplateMessagesViewModel.textFont' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (nonnull instancetype)initWithMessageTemplates:(NSArray<ALTemplateMessageModel *> * _Nonnull)messageTemplates OBJC_DESIGNATED_INITIALIZER;
- (NSInteger)getNumberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getTextForItemAtRow:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (CGSize)getSizeForItemAtRow:(NSInteger)row SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)getTemplateForItemAtRow:(NSInteger)row SWIFT_WARN_UNUSED_RESULT SWIFT_DEPRECATED_OBJC("Swift method 'ALTemplateMessagesViewModel.getTemplateForItemAt(row:)' uses '@objc' inference deprecated in Swift 4; add '@objc' to provide an Objective-C entrypoint");
- (void)updateLastWithMessage:(ALMessage * _Nonnull)message;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_DEPRECATED_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
