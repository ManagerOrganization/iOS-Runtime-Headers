/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUWishlistDataSourceDelegate>, NSArray, RadioGetWishListRequest;

@interface RUWishlistDataSource : NSObject {
    <RUWishlistDataSourceDelegate> *_delegate;
    RadioGetWishListRequest *_wishlistRequest;
    NSArray *_wishlistedTracks;
}

@property <RUWishlistDataSourceDelegate> * delegate;
@property(getter=isRefreshing,readonly) bool refreshing;
@property(readonly) NSArray * wishlistedTracks;

- (void).cxx_destruct;
- (void)_notifyDidInvalidate;
- (void)dealloc;
- (id)delegate;
- (void)deleteAllWishlistedTracks;
- (void)deleteWishlistedTrack:(id)arg1;
- (bool)isRefreshing;
- (void)refreshWishlist;
- (void)setDelegate:(id)arg1;
- (id)wishlistedTracks;

@end