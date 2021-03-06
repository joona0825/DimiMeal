//
//  InterfaceController.h
//  DimiMeal WatchKit Extension
//
//  Created by Alfred Woo on 4/5/16.
//  Copyright © 2016 Alfred Woo. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>
#import <WatchConnectivity/WatchConnectivity.h>

@interface InterfaceController : WKInterfaceController <WCSessionDelegate>

@property IBOutlet WKInterfaceLabel *meal_label;
@property WCSession *watch_session;

@end
