//
//  LaunchViewController.h
//  LaunchPage
//
//  Created by Dylan Sewell on 8/22/14.
//  Copyright (c) 2014 DeepLinks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LaunchViewController : UIViewController <UICollectionViewDataSource,UICollectionViewDelegate, UIScrollViewDelegate>
{
    UICollectionView *myCollectionView;
    UIImageView *backgroundImgPrev;
    UIImageView *backgroundImgCurrent;
    UIImageView *backgroundImgNext;
    CGFloat prevAlpha;
    CGFloat currentAlpha;
    CGFloat nextAlpha;
    
    UIImageView *friendsyLogo;
    NSArray *launchImgs;
    NSArray *launchBackgroundImgs;
    UIPageControl *pageControl;
    NSTimer *timer;
    NSInteger index;
    BOOL pageTouched;
    
    UIButton *btnSignUp;
    UIButton *btnSignIn;
    
    
}

@end
