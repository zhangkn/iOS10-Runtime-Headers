/* Generated by RuntimeBrowser.
 */

@protocol MPCPlaybackIntentDataSource <NSObject>

@required

- (void)configureContainer:(void *)arg1 forPlaybackIntent:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MPCPlayerItemContainer *, MPCPlaybackIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)populateContainer:(void *)arg1 forPlaybackIntent:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MPCPlayerItemContainer *, MPCPlaybackIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)populateRepresentationsForItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: MPCPlayerItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (id)_legacyAlternativeRepresentationForPlaybackIntent:(MPCPlaybackIntent *)arg1 player:(MPCPlayer *)arg2;

@end
