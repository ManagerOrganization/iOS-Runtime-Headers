/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class AFDictationConnection, AFDictationOptions, AFPreferences, CADisplayLink, NSArray, NSMutableArray, NSString, NSTimer, UIAlertView, UIDictationStreamingOperations, UIKeyboardInputMode, UIWindow, _UIDictationPrivacySheetController;

@interface UIDictationController : NSObject <_UITouchPhaseChangeDelegate> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    NSArray *_availableLanguages;
    id _callCenter;
    void *_callCenterFrameworkFileHandle;
    AFDictationConnection *_connection;
    UIAlertView *_dictationAvailableSoonAlert;
    UIWindow *_dictationPresenterWindow;
    _UIDictationPrivacySheetController *_dictationPrivacySheetController;
    void *_facetimeCallFrameworkFileHandle;
    id _facetimeCallManager;
    UIKeyboardInputMode *_inputModeThatInvokedDictation;
    } _insertionRange;
    NSString *_language;
    double _lastAnimationUpdateTimeStamp;
    NSString *_lastHypothesis;
    AFDictationOptions *_options;
    NSMutableArray *_pendingEdits;
    AFPreferences *_preferences;
    NSString *_previousHypothesis;
    NSTimer *_recordingLimitTimer;
    CADisplayLink *_streamingAnimationDisplayLink;
    UIDictationStreamingOperations *_streamingOperations;
    NSString *_targetHypothesis;
    bool_connectionWasAlreadyAliveForStatisticsLogging;
    bool_discardNextHypothesis;
    bool_hasPreheated;
    bool_performingStreamingEditingOperation;
    bool_recievingResults;
    bool_streamingAnimationActive;
    bool_updatingDocument;
    bool_wasDisabledDueToTelephonyActivity;
    boolcancelledByWaitingForLocalResults;
    booldictationStartedFromGesture;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) UIWindow * dictationPresenterWindow;
@property(retain) _UIDictationPrivacySheetController * dictationPrivacySheetController;
@property bool dictationStartedFromGesture;
@property bool discardNextHypothesis;
@property bool hasPreheated;
@property(readonly) unsigned long long hash;
@property(retain) UIKeyboardInputMode * inputModeThatInvokedDictation;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } insertionRange;
@property(copy) NSString * lastHypothesis;
@property(retain) NSMutableArray * pendingEdits;
@property bool performingStreamingEditingOperation;
@property(copy) NSString * previousHypothesis;
@property(readonly) Class superclass;
@property(copy) NSString * targetHypothesis;

+ (id)activeConnection;
+ (id)activeInstance;
+ (void)applicationDidBecomeActive;
+ (void)applicationDidChangeStatusBarFrame;
+ (void)applicationDidEnterBackgroundNotification;
+ (void)applicationWillResignActive;
+ (id)attributedStringForDictationResult:(id)arg1 andCorrectionIdentifier:(id)arg2;
+ (id)bestInterpretationForDictationResult:(id)arg1;
+ (bool)dictationIsFunctional;
+ (void)didBeginEditingInTextView:(id)arg1;
+ (void)didOneFingerTapInTextView:(id)arg1;
+ (void)disableGestureHandler;
+ (void)enableGestureHandlerIfNecessary;
+ (bool)fetchCurrentInputModeSupportsDictation;
+ (id)interpretation:(id)arg1 forPhraseIndex:(unsigned long long)arg2 isShiftLocked:(bool)arg3 autocapitalizationType:(long long)arg4;
+ (bool)isRunning;
+ (bool)isTextViewOnStarkScreen:(id)arg1;
+ (void)keyboardDidSetInputMode;
+ (void)keyboardDidUpdateOnScreenStatus;
+ (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
+ (void)logCorrectionStatisticsForDelegate:(id)arg1;
+ (void)logDictationString:(id)arg1;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)arg1;
+ (bool)openAssistantFrameworkIfNecessary;
+ (void)poppedLastStreamingOperation;
+ (id)serializedDictationPhrases:(id)arg1 fromKeyboard:(bool)arg2 transform:(struct __CFString { }*)arg3;
+ (id)serializedDictationPhrases:(id)arg1;
+ (id)serializedDictationPhrasesFromTokenMatrix:(id)arg1 fromKeyboard:(bool)arg2 transform:(struct __CFString { }*)arg3;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 fromKeyboard:(bool)arg3 options:(id)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 ranges:(id*)arg3 options:(id)arg4;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2 ranges:(id*)arg3;
+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(struct __CFString { }*)arg2;
+ (double)serverManualEndpointingThreshold;
+ (bool)setupForOpeningConnections;
+ (bool)setupForPhraseSerialization;
+ (id)sharedInstance;
+ (bool)shouldDeleteBackwardInInputDelegate:(id)arg1;
+ (bool)shouldEnableGestureHandler;
+ (bool)shouldHideCursorForTextView:(id)arg1;
+ (bool)shouldHideSelectionUIForTextView:(id)arg1;
+ (bool)shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
+ (id)singleLineResultForResult:(id)arg1;
+ (void)siriPreferencesChanged;
+ (bool)starkScreenExists;
+ (id)streamingHypothesisForPhrases:(id)arg1;
+ (id)stringForState:(int)arg1;
+ (id)stringForViewMode:(int)arg1;
+ (bool)takesPhysicalButtonsBegan:(id)arg1 forTextView:(id)arg2;
+ (bool)takesPhysicalButtonsEnded:(id)arg1 forTextView:(id)arg2;
+ (void)updateLandingView;
+ (bool)usingServerManualEndpointingThreshold;
+ (bool)usingTypeAndTalk;
+ (int)viewMode;

- (void)_beginEnableDictationPrompt;
- (id)_connection;
- (void)_displayLinkFired:(id)arg1;
- (void)_endEnableDictationPromptAnimated:(bool)arg1;
- (void)_finalizeDictationText;
- (id)_hypothesisRangeFromSelectionRange:(id)arg1 inputDelegate:(id)arg2;
- (void)_presentOptInAlert;
- (void)_presentPrivacySheet;
- (id)_rangeByExtendingRange:(id)arg1 by:(long long)arg2 inputDelegate:(id)arg3;
- (void)_restartDictation;
- (bool)_shouldDeleteBackwardInInputDelegate:(id)arg1;
- (bool)_shouldInsertText:(id)arg1 inInputDelegate:(id)arg2;
- (void)_startStreamingAnimations;
- (void)_stopStreamingAnimation;
- (void)_touchPhaseChangedForTouch:(id)arg1;
- (void)_updateFromSelectedTextRange:(id)arg1 withNewHypothesis:(id)arg2;
- (id)assistantCompatibleLanguageCodeForInputMode:(id)arg1;
- (float)audioLevel;
- (void)cancelDictation;
- (void)cancelRecordingLimitTimer;
- (void)completeStartConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)completeStartConnectionForReason:(long long)arg1;
- (id)connection;
- (id)connectionForStatisticsLogging;
- (void)dealloc;
- (void)delayedTelephonyCheckingSetup;
- (void)dictationConnection:(id)arg1 didHypothesizePhrases:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;
- (bool)dictationEnabled;
- (id)dictationPhraseArrayFromDictationResult:(id)arg1;
- (id)dictationPresenterWindow;
- (id)dictationPrivacySheetController;
- (bool)dictationStartedFromGesture;
- (void)disableAutorotation;
- (bool)disabledDueToTelephonyActivity;
- (bool)discardNextHypothesis;
- (void)dismissDictationView:(id)arg1;
- (void)enableProximity;
- (void)endSessionIfNecessaryForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)errorAnimationDidFinish;
- (id)fieldIdentifierInputDelegate:(id)arg1;
- (void)finishDictationRecognitionWithPhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;
- (bool)hasPreheated;
- (id)init;
- (id)inputModeThatInvokedDictation;
- (void)insertSerializedDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertionRange;
- (bool)isRecievingResults;
- (id)language;
- (id)languageCodeForAssistantLanguageCode:(id)arg1;
- (id)lastHypothesis;
- (bool)needsLeadingSpaceForPhrases:(id)arg1;
- (bool)needsTrailingSpaceForPhrases:(id)arg1;
- (id)pendingEdits;
- (void)performIgnoringDocumentChanges:(id)arg1;
- (bool)performingStreamingEditingOperation;
- (id)postfixTextForInputDelegate:(id)arg1;
- (id)prefixTextForInputDelegate:(id)arg1;
- (void)preheatIfNecessary;
- (id)previousHypothesis;
- (void)proximityStateChanged:(id)arg1;
- (void)reenableAutorotation;
- (void)releaseConnection;
- (void)releaseConnectionAfterDictationRequest;
- (void)releaseConnectionAfterStatisticsLogging;
- (void)restartDictationForTypeAndTalk;
- (struct __CFString { }*)resultTransformForLanguageModel:(id)arg1;
- (id)resultWithTrailingSpace:(id)arg1;
- (id)selectedTextForInputDelegate:(id)arg1;
- (void)setDictationInputmode;
- (void)setDictationPresenterWindow:(id)arg1;
- (void)setDictationPrivacySheetController:(id)arg1;
- (void)setDictationStartedFromGesture:(bool)arg1;
- (void)setDiscardNextHypothesis:(bool)arg1;
- (void)setHasPreheated:(bool)arg1;
- (void)setInputModeThatInvokedDictation:(id)arg1;
- (void)setInsertionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLanguage:(id)arg1;
- (void)setLastHypothesis:(id)arg1;
- (void)setPendingEdits:(id)arg1;
- (void)setPerformingStreamingEditingOperation:(bool)arg1;
- (void)setPreviousHypothesis:(id)arg1;
- (void)setState:(int)arg1;
- (void)setTargetHypothesis:(id)arg1;
- (void)setupConnectionOptions;
- (void)setupForDictationStartForReason:(long long)arg1;
- (void)setupForStreamingDictationStart;
- (void)setupToInsertResultForNewHypothesis:(id)arg1;
- (void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startConnectionForReason:(long long)arg1;
- (void)startDictation;
- (void)startDictationForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2;
- (void)startDictationForReason:(long long)arg1;
- (void)startRecordingLimitTimer;
- (int)state;
- (void)stopDictation;
- (id)streamingOperations;
- (id)supportedDictationLanguages:(id)arg1;
- (bool)supportsInputMode:(id)arg1 error:(id*)arg2;
- (void)switchToDictationInputMode;
- (void)switchToDictationInputModeWithTouch:(id)arg1;
- (id)targetHypothesis;
- (bool)wasDisabledDueToTelephonyActivity;

@end