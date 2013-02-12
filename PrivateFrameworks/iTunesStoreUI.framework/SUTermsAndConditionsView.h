/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SULinkControl, UIAlertView, UIButton;

@interface SUTermsAndConditionsView : UIView {
    UIAlertView *_accountButtonAlert;
    UIButton *_button;
    BOOL _hideAccountButton;
    NSInteger _style;
    SULinkControl *_termsAndConditionsControl;
}

@property NSInteger style; /* unknown property attribute: V_style */
@property BOOL hideAccountButton; /* unknown property attribute: V_hideAccountButton */

- (void)_accountsChangedNotification:(id)arg1;
- (id)_button;
- (void)_buttonAction:(id)arg1;
- (void)_clearButtonSelection:(id)arg1;
- (id)_createGradientButton;
- (id)_createRoundedCornersButton;
- (void)_destroyButton;
- (NSInteger)_linkStyleForStyle:(NSInteger)arg1;
- (void)_termsAndConditionsAction:(id)arg1;
- (id)_termsAndConditionsControl;
- (void)_updateButton;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(NSInteger)arg2;
- (void)dealloc;
- (BOOL)hideAccountButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setHideAccountButton:(BOOL)arg1;
- (void)setStyle:(NSInteger)arg1;
- (void)sizeToFit;
- (NSInteger)style;

@end