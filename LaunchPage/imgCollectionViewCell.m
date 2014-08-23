//
//  imgCollectionViewCell.m
//  LaunchPage
//
//  Created by Dylan Sewell on 8/22/14.
//  Copyright (c) 2014 DeepLinks. All rights reserved.
//

#import "imgCollectionViewCell.h"

@implementation imgCollectionViewCell

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
        
        
        _picImageView = [[UIImageView alloc]initWithFrame:self.bounds];
        self.autoresizesSubviews = YES;
        
        [self.contentView addSubview:self.picImageView];
    
    }
    return self;
}

-(void)setImage:(NSString*)string
{
    self.picImageView.image = [UIImage imageNamed:string];
}


@end
