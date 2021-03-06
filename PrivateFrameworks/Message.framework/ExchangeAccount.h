/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface ExchangeAccount : IMAPAccount {
}

+ (id)accountTypeString;

- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (void)_filterMailboxList:(id)arg1 forMailboxWithPath:(id)arg2 iisServer:(id)arg3;
- (BOOL)_syncOnly_defaultValueForShouldStoreJunkOnServer;
- (Class)connectionClass;
- (void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3;
- (BOOL)shouldExpungeMessagesOnDelete;
- (BOOL)shouldFetchACEDBInfoForError:(id)arg1;
- (BOOL)storeDraftsOnServer;
- (BOOL)storeSentMessagesOnServer;

@end
