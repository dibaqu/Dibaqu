//
//  DibaquFramework.h
//  Dibaqu
//
//  Created by Heyman on 2019/1/12.
//  Copyright © 2019 www.dibaqu.com. All rights reserved.
//  Version: 1.0

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface DibaquFramework : NSObject


/**
 *  初始化第八区SDK
 *
 *  @return DibaquFramework的单例对象
 */
+ (DibaquFramework *)sharedInstance;

/**
 *  启动第八区SDK
 *
 *  @param appKey 应用程序的Key，从第八区网站上获取。
 */
- (void)startFrameworkWithAppKey:(NSString *)appKey;

/**
 *  Check is there new version that developer uploaded.
 *  If a new version has been uploaded, user will be prompted to download new version after this
 *  method was called.
 */
- (void)checkUpdate;

/**
 *  Check is there new version with customized delegate method.
 *
 *  @param delegate Delegate of checkupdate.
 *  @param updateMethodWithDictionary When checkUpdateWithDelegete was called, this delegate method
 *  will be called, the dicitonary which coantains version information will be passed to this method also.
 *  If there isn't new version ,the dictionary will be null.
 */
- (void)checkUpdateWithDelegete:(id)delegate selector:(SEL)updateMethodWithDictionary;

@end

NS_ASSUME_NONNULL_END
