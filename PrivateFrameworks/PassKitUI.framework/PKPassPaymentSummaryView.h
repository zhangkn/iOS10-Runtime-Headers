/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentSummaryView : UIView <PKPassPaymentSummaryCellDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _deepLinkingEnabled;
    <PKPassPaymentSummaryViewDelegate> * _delegate;
    PKPaymentMessage * _message;
    NSString * _messageAppLaunchToken;
    NSNumberFormatter * _numberFormatter;
    PKPaymentPass * _pass;
    UITableView * _tableView;
    PKPaymentTransaction * _transaction;
    NSString * _transactionAppLaunchToken;
    double  _transactionCellHeight;
    PKStackedTextItemGroup * _transactionDisplayItem;
    PKStackedTextItemGroupView * _transactionHeaderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassPaymentSummaryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentMessage *message;
@property (nonatomic, readonly) NSString *messageAppLaunchToken;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentTransaction *transaction;
@property (nonatomic, readonly) NSString *transactionAppLaunchToken;

- (void).cxx_destruct;
- (id)_amountTextFromTransaction:(id)arg1;
- (void)_configureCell:(id)arg1 forMessage:(id)arg2;
- (void)_configureCell:(id)arg1 forTransaction:(id)arg2;
- (id)_imageFromTransaction:(id)arg1;
- (bool)_isSectionIndexOfMessage:(long long)arg1;
- (bool)_isSectionIndexOfTransaction:(long long)arg1;
- (id)_locationTextFromTransaction:(id)arg1;
- (id)_merchantTextFromTransaction:(id)arg1;
- (void)_performAction:(long long)arg1 forSection:(long long)arg2 animated:(bool)arg3;
- (id)_relativeDateTextFromTransaction:(id)arg1;
- (long long)_sectionIndexOfMessage;
- (long long)_sectionIndexOfTransaction;
- (bool)_showTransaction;
- (id)_statusTextFromTransaction:(id)arg1;
- (void)_updateTransactionRowAnimated:(bool)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithPaymentPass:(id)arg1;
- (void)layoutSubviews;
- (id)message;
- (id)messageAppLaunchToken;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pass;
- (void)paymentSummaryCellDetailsButtonPressed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessage:(id)arg1 appLaunchToken:(id)arg2 animated:(bool)arg3;
- (void)setTransaction:(id)arg1 appLaunchToken:(id)arg2 animated:(bool)arg3;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)transaction;
- (id)transactionAppLaunchToken;

@end