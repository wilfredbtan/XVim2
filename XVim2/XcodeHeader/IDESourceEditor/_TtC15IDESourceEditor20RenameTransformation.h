//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  6 2019 20:12:56).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceEditor/IDERefactoringTransformation-Protocol.h>

@class IDEWorkspaceDocument, NSString;
@protocol IDEIndexSymbol;

__attribute__((visibility("hidden")))
@interface _TtC15IDESourceEditor20RenameTransformation : NSObject <IDERefactoringTransformation>
{
    // Error parsing type: , name: oldName
    // Error parsing type: , name: selectedSymbol
    // Error parsing type: , name: workspaceDocument
    // Error parsing type: , name: renameNewName
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *renameNewName;
@property(nonatomic, readonly) NSString *renameOldName;
@property(nonatomic, retain) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument;
@property(nonatomic, retain) id <IDEIndexSymbol> selectedSymbol; // @synthesize selectedSymbol;

@end

