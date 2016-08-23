//
//  WaveView.h
//  MeWave_CADisplayLink_Demo
//
//  Created by admin on 16/8/23.
//  Copyright © 2016年 AlezJi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WaveView : UIView

/**
 *  浪弯曲度
 */
@property (nonatomic, assign) CGFloat waveSpeed;
/**
 *  浪速
 */
@property (nonatomic, assign) CGFloat speed;
/**
 *  浪高
 */
@property (nonatomic, assign) CGFloat waveHeight;
/**
 *  实浪颜色
 */
@property (nonatomic, strong) UIColor *realWaveColor;
/**
 *  遮罩浪颜色
 */
@property (nonatomic, strong) UIColor *maskWaveColor;

- (void)stopWaveAnimation;

- (void)startWaveAnimation;



@end
