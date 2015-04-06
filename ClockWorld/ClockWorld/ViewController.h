//
//  ViewController.h
//  ClockWorld
//
//  Created by Nguyen Huu Hoang on 3/30/15.
//  Copyright (c) 2015 Phoenix NH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <iAd/iAd.h>
@interface ViewController : UIViewController <ADBannerViewDelegate>
{
    ADBannerView *_adBanner;
    BOOL _bannerIsVisible;
}
@end

