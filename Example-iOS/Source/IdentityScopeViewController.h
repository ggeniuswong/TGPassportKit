#import <UIKit/UIKit.h>

@class ComplexScope;

@interface IdentityScopeViewController : UITableViewController

@property (weak, nonatomic) IBOutlet UISwitch *selfieSwitchView;

@property (nonatomic, copy) void (^finishedWithScope)(ComplexScope *);
- (void)updateWithScope:(ComplexScope *)scope;

@end
