//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextAnnotation.h>

@class _TtC13IDEFoundation15IDETestLocation;

@interface _IDETestingAnnotation : DVTTextAnnotation
{
    _TtC13IDEFoundation15IDETestLocation *_testLocation;
}

+ (id)locationForTestLocation:(id)arg1 inDocument:(id)arg2;
@property(readonly) _TtC13IDEFoundation15IDETestLocation *testLocation; // @synthesize testLocation=_testLocation;
- (void).cxx_destruct;
- (void)_updateLocationForDocument:(id)arg1;
- (void)_showHoverRunIcon;
- (void)_updateTestStateWithTestManager:(id)arg1;
- (id)initWithTestLocation:(id)arg1;

@end
