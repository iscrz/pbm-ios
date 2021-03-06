#import "Location.h"
#import "Machine.h"
#import "MachineFilterView.h"
#import "CommentController.h"
#import "WebViewController.h"
#import "PBMViewController.h"

@interface MachineProfileViewController : PBMViewController <UIActionSheetDelegate,UIAlertViewDelegate> {
	UILabel *machineLabel;
	UILabel *locationLabel;
	UILabel *conditionLabel;
	UITextView *conditionField;
	
	UIButton *returnButton;
	UIButton *deleteButton;
	UIButton *ipdbButton;
	UIButton *otherLocationsButton;
	UIButton *updateConditionButton;
	
	MachineFilterView *machineFilter;
	WebViewController *webview;
	CommentController *commentController;
	
	LocationMachineXref *locationMachineXref;
}

@property (nonatomic,strong) WebViewController *webview;
@property (nonatomic,strong) LocationMachineXref *locationMachineXref;

@property (nonatomic,strong) CommentController *commentController;
@property (nonatomic,strong) MachineFilterView *machineFilter;

@property (nonatomic,strong) IBOutlet UIButton *updateConditionButton;
@property (nonatomic,strong) IBOutlet UIButton *otherLocationsButton;
@property (nonatomic,strong) IBOutlet UILabel *machineLabel;
@property (nonatomic,strong) IBOutlet UILabel *locationLabel;
@property (nonatomic,strong) IBOutlet UILabel *conditionLabel;
@property (nonatomic,strong) IBOutlet UITextView *conditionField;
@property (nonatomic,strong) IBOutlet UIButton *returnButton;
@property (nonatomic,strong) IBOutlet UIButton *ipdbButton;
@property (nonatomic,strong) IBOutlet UIButton *deleteButton;
@property (nonatomic,strong) IBOutlet UIButton *editButton;

- (IBAction)onUpdateConditionTap:(id)sender;
- (IBAction)onDeleteTap:(id)sender;
- (IBAction)onReturnTap:(id)sender;
- (IBAction)onIPDBTap:(id)sender;
- (IBAction)onOtherLocationsTap:(id)sender;
- (IBAction)onEditButtonPressed:(id)sender;
- (void)hideControlButtons:(BOOL)doHide;
- (void)removeMachineWithURL:(NSString *)urlstr;

@end