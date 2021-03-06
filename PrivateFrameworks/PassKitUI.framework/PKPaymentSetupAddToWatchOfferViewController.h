/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupAddToWatchOfferViewController : UIViewController {
    int  _context;
    id /* block */  _dismissalHandler;
    PKPaymentSetupAddToWatchOfferView * _offerView;
    PKPaymentPass * _pass;
}

@property (nonatomic) int context;
@property (nonatomic, copy) id /* block */ dismissalHandler;
@property (nonatomic, readonly, retain) PKPaymentSetupAddToWatchOfferView *offerView;
@property (nonatomic, readonly, retain) PKPaymentPass *pass;

+ (void)shouldShowAddToWatchOfferForPass:(id)arg1 inContext:(int)arg2 withCompletion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_addLaterTapped:(id)arg1;
- (void)_configureNavigationItem;
- (void)_doneTapped:(id)arg1;
- (void)_handleBridgeProvisioningError:(id)arg1;
- (void)_handleDismissal:(BOOL)arg1;
- (void)_hideSpinner;
- (void)_openAppTapped:(id)arg1;
- (void)_setIdleTimerDisabled:(BOOL)arg1;
- (void)_showSpinner;
- (int)context;
- (void)dealloc;
- (id /* block */)dismissalHandler;
- (unsigned int)edgesForExtendedLayout;
- (id)initWithPaymentPass:(id)arg1 context:(int)arg2 dismissalHandler:(id /* block */)arg3;
- (void)loadView;
- (id)offerView;
- (id)pass;
- (void)setContext:(int)arg1;
- (void)setDismissalHandler:(id /* block */)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
