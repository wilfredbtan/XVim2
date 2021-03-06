//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/IDEOpenInProjectViewControllerDelegate-Protocol.h>

@class IDEOpenInProjectViewController, NSString, NSURL;

@interface IDEOpenInProjectWindowController : NSWindowController <IDEOpenInProjectViewControllerDelegate>
{
    NSString *_openInProjectDescription;
    IDEOpenInProjectViewController *_openInProjectViewController;
    CDUnknownBlockType _completionBlock;
}

@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) IDEOpenInProjectViewController *openInProjectViewController; // @synthesize openInProjectViewController=_openInProjectViewController;
@property(retain, nonatomic) NSString *openInProjectDescription; // @synthesize openInProjectDescription=_openInProjectDescription;
- (void).cxx_destruct;
- (void)cancelledViewController:(id)arg1;
- (void)projectSelectedInViewController:(id)arg1;
- (void)beginModalWindowWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)windowDidLoad;
@property(readonly) NSURL *projectURL;
- (id)initWithOpenInProjectDescription:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

