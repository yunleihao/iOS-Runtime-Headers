/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSMutableArray;

@interface SymbolValidator : XMLHTTPRequest  {
    id _delegate;
    NSMutableArray *_validatedSymbols;
    BOOL _useGTServer;
}

@property id delegate;


- (void)didParseData;
- (void)failWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (int)parseData:(id)arg1;
- (id)delegate;
- (void)setUsesGTServer:(BOOL)arg1;
- (void)validateSymbol:(id)arg1 withMaxResults:(int)arg2;
- (void)cancel;
- (id)initWithDelegate:(id)arg1;

@end