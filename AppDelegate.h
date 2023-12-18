//
//  AppDelegate.h
//  zadanie4-ios
//
//  Created by student on 06/11/2023.
//  Copyright © 2023 com.pb.wi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

