//
//  Animation01AppDelegate.h
//  Animation01
//
//  Created by Noguchi Osamu on 10/09/20.
//  Copyright 2010 envision. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Animation01ViewController;

@interface Animation01AppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Animation01ViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Animation01ViewController *viewController;

@end

