/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@class <NSObject>, NSData, NSString;

@interface IDSSocketPairMessage : NSObject {
    unsigned char _command;
    <NSObject> *_context;
    NSString *_topic;
    NSData *_underlyingData;
}

@property(readonly) unsigned char command;
@property(retain) <NSObject> * context;
@property(retain) NSString * topic;
@property(retain,readonly) NSData * underlyingData;
@property(readonly) unsigned int underlyingDataLength;

+ (unsigned int)dataLengthFromHeaderData:(id)arg1;
+ (unsigned int)headerDataSize;
+ (id)messageWithCommand:(unsigned char)arg1 data:(id)arg2;
+ (id)messageWithData:(id)arg1;
+ (id)messageWithHeaderData:(id)arg1 data:(id)arg2;

- (id)_existingUnderlyingData;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)context;
- (void)dealloc;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setTopic:(id)arg1;
- (id)topic;
- (id)underlyingData;
- (unsigned int)underlyingDataLength;

@end
