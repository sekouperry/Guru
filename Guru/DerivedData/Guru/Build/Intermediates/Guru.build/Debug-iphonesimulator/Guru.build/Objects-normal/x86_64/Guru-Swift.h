// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
@import Parse;
@import TwilioVideo;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class PFObject;
@class UIStoryboardSegue;
@class UIView;
@class UILabel;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC4Guru20AcceptViewController")
@interface AcceptViewController : UIViewController
@property (nonatomic, strong) PFObject * _Null_unspecified question;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified backgroundView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified questionLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified topicLabel;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (IBAction)accept:(id _Nonnull)sender;
- (IBAction)decline:(id _Nonnull)sender;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIWindow;
@class UIApplication;
@class OSNotification;

SWIFT_CLASS("_TtC4Guru11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)reactToNotificationWithNotification:(OSNotification * _Nonnull)notification;
- (UIViewController * _Nonnull)topMostController;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Guru14DemoPopup2Cell")
@interface DemoPopup2Cell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLabel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class PopupController;
@class UITableView;

SWIFT_CLASS("_TtC4Guru24DemoPopupViewController2")
@interface DemoPopupViewController2 : UIViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tableView;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull topics;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
+ (DemoPopupViewController2 * _Nonnull)instance;
- (void)didReceiveMemoryWarning;
- (CGSize)sizeForPopup:(PopupController * _Nonnull)popupController size:(CGSize)size showingKeyboard:(BOOL)showingKeyboard;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Guru26GuruRequestsViewController")
@interface GuruRequestsViewController : UIViewController <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, copy) NSArray<PFObject *> * _Nonnull questions;
@property (nonatomic, strong) PFObject * _Nullable selectedQuestion;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tableView;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (IBAction)dismissView:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIButton;
@class UITextField;

SWIFT_CLASS("_TtC4Guru8HomePage")
@interface HomePage : UIViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified questionField;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified acceptButton;
@property (nonatomic) BOOL avail;
@property (nonatomic, strong) PFObject * _Nullable question;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified backgroundView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified pointsLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified answeredLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified askedLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified topicButton;
@property (nonatomic, strong) PopupController * _Nonnull popup;
@property (nonatomic, copy) NSString * _Nonnull finalTopic;
- (IBAction)tapped:(id _Nonnull)sender;
- (IBAction)pressedAsk:(UIButton * _Nonnull)sender;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (void)viewDidLoad;
- (IBAction)logout:(id _Nonnull)sender;
- (void)catchNotificationWithNotification:(NSNotification * _Nonnull)notification;
- (void)viewWillAppear:(BOOL)animated;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (IBAction)showTopics:(id _Nonnull)sender;
- (void)submitQuestionWithSender:(UIButton * _Nonnull)sender;
- (void)didReceiveMemoryWarning;
- (IBAction)accept:(id _Nonnull)sender;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImageView;
@class UISwipeGestureRecognizer;
@class UIImage;
@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC4Guru16LDViewController")
@interface LDViewController : UIViewController
@property (nonatomic, strong) IBOutlet UIImageView * _Null_unspecified imageView;
@property (nonatomic, strong) IBOutlet UISwipeGestureRecognizer * _Null_unspecified swipeUpRec;
@property (nonatomic, strong) IBOutlet UISwipeGestureRecognizer * _Null_unspecified swipeDownRec;
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified resetButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified toggleButton;
@property (nonatomic, strong) PFObject * _Null_unspecified question;
@property (nonatomic) CGPoint lastPoint;
@property (nonatomic) BOOL swiped;
@property (nonatomic) CGFloat red;
@property (nonatomic) CGFloat green;
@property (nonatomic) CGFloat blue;
@property (nonatomic, strong) UIImageView * _Null_unspecified tool;
@property (nonatomic, strong) UIImage * _Null_unspecified selectedImage;
@property (nonatomic) NSInteger toggleStatus;
// 'pointQuery' below
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)subscribeLiveQuery;
- (void)sendPointDataFromX:(double)fromX fromY:(double)fromY toX:(double)toX toY:(double)toY;
- (void)disconnectFromServer;
- (IBAction)togglePressed:(id _Nonnull)sender;
- (IBAction)swipedUp:(id _Nonnull)sender;
- (IBAction)swipedDown:(id _Nonnull)sender;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)drawLinesFromPoint:(CGPoint)fromPoint toPoint:(CGPoint)toPoint;
- (void)touchesMoved:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (IBAction)reset:(id _Nonnull)sender;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Guru19LoginViewController")
@interface LoginViewController : UIViewController
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified usernameLabel;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified passwordLabel;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (IBAction)cancel:(id _Nonnull)sender;
- (IBAction)login:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Guru5Point")
@interface Point : PFObject <PFSubclassing>
@property (nonatomic) NSInteger fromX;
@property (nonatomic) NSInteger toX;
@property (nonatomic) NSInteger fromY;
@property (nonatomic) NSInteger toY;
@property (nonatomic, strong) PFObject * _Nullable question;
+ (NSString * _Nonnull)parseClassName;
- (nonnull instancetype)initWithClassName:(NSString * _Nonnull)newClassName OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Guru20RequestTableViewCell")
@interface RequestTableViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified questionLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified topicLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified usernameLabel;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Guru20SignUpViewController")
@interface SignUpViewController : UIViewController
- (IBAction)tappedScreen:(id _Nonnull)sender;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified username;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified password;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified topics;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (IBAction)submit:(id _Nonnull)sender;
- (void)didReceiveMemoryWarning;
- (void)signUp;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Guru7VideoVC")
@interface VideoVC : UIViewController
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified remoteView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified previewView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified disconnectButton;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified messageLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified micButton;
@property (nonatomic, strong) PFObject * _Null_unspecified question;
@property (nonatomic, strong) LDViewController * _Nullable liveDrawVC;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (void)didReceiveMemoryWarning;
- (void)showRoomUIInRoom:(BOOL)inRoom;
- (IBAction)camChange:(id _Nonnull)sender;
- (IBAction)disconnectWithSender:(id _Nonnull)sender;
- (IBAction)toggleMicWithSender:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Guru14ViewController")
@interface ViewController : UIViewController
- (void)viewDidLoad;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class TVIVideoClient;
@class TVIRoom;
@class TVILocalMedia;
@class TVICameraCapturer;
@class TVILocalVideoTrack;
@class TVILocalAudioTrack;
@class TVIParticipant;

SWIFT_CLASS("_TtC4Guru13WaitingScreen")
@interface WaitingScreen : UIViewController
@property (nonatomic, copy) NSString * _Nonnull accessToken;
@property (nonatomic, copy) NSString * _Nonnull tokenUrl;
@property (nonatomic, strong) TVIVideoClient * _Nullable client;
@property (nonatomic, strong) TVIRoom * _Nullable room;
@property (nonatomic, strong) TVILocalMedia * _Nullable localMedia;
@property (nonatomic, strong) TVICameraCapturer * _Nullable camera;
@property (nonatomic, strong) TVILocalVideoTrack * _Nullable localVideoTrack;
@property (nonatomic, strong) TVILocalAudioTrack * _Nullable localAudioTrack;
@property (nonatomic, strong) TVIParticipant * _Nullable participant;
@property (nonatomic, strong) PFObject * _Null_unspecified question;
@property (nonatomic) BOOL tutor;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified circles;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified guru;
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified dismissButton;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified questionLabel;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified loadingLabel;
@property (nonatomic, strong) VideoVC * _Null_unspecified videoScreen;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)connect;
- (void)disconnectWithSender:(id _Nonnull)sender;
- (void)toggleMicWithSender:(id _Nonnull)sender;
- (void)startPreview;
- (void)toggleCamera;
- (void)flipCamera;
- (void)prepareLocalMedia;
- (void)cleanupRemoteParticipant;
- (void)logMessageWithMessageText:(NSString * _Nonnull)messageText;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (void)didReceiveMemoryWarning;
- (IBAction)dismissView:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface WaitingScreen (SWIFT_EXTENSION(Guru)) <TVIRoomDelegate>
- (void)didConnectToRoom:(TVIRoom * _Nonnull)room;
- (void)room:(TVIRoom * _Nonnull)room didDisconnectWithError:(NSError * _Nullable)error;
- (void)room:(TVIRoom * _Nonnull)room didFailToConnectWithError:(NSError * _Nonnull)error;
- (void)room:(TVIRoom * _Nonnull)room participantDidConnect:(TVIParticipant * _Nonnull)participant;
- (void)room:(TVIRoom * _Nonnull)room participantDidDisconnect:(TVIParticipant * _Nonnull)participant;
@end

@class TVIVideoTrack;
@class TVIAudioTrack;
@class TVITrack;

@interface WaitingScreen (SWIFT_EXTENSION(Guru)) <TVIParticipantDelegate>
- (void)participant:(TVIParticipant * _Nonnull)participant addedVideoTrack:(TVIVideoTrack * _Nonnull)videoTrack;
- (void)participant:(TVIParticipant * _Nonnull)participant removedVideoTrack:(TVIVideoTrack * _Nonnull)videoTrack;
- (void)participant:(TVIParticipant * _Nonnull)participant addedAudioTrack:(TVIAudioTrack * _Nonnull)audioTrack;
- (void)participant:(TVIParticipant * _Nonnull)participant removedAudioTrack:(TVIAudioTrack * _Nonnull)audioTrack;
- (void)participant:(TVIParticipant * _Nonnull)participant enabledTrack:(TVITrack * _Nonnull)track;
- (void)participant:(TVIParticipant * _Nonnull)participant disabledTrack:(TVITrack * _Nonnull)track;
@end

@interface LDViewController (SWIFT_EXTENSION(Guru))
@property (nonatomic, strong) PFQuery<Point *> * _Null_unspecified pointQuery;
@end

#pragma clang diagnostic pop
