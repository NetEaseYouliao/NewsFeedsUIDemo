//
//  NFChannel.h
//  NewsFeedsSDK
//
//  Created by shoulei ma on 2017/6/22.
//  Copyright © 2017年 NetEase. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * @class
 * NFChannel类
 *
 * @abstract
 * 频道的model类
 */
@interface NFChannelInfo : NSObject

//频道ID
@property (nonatomic, copy)   NSString *channelId;

//频道名称
@property (nonatomic, copy)   NSString *channelName;

//频道显示的顺序
@property (nonatomic, assign) NSInteger channelOrder;

@end


/**
 * @class
 * NFChannelList类
 *
 * @abstract
 * 频道列表
 */
@interface NFChannels : NSObject

@property (nonatomic, strong)   NSArray <NFChannelInfo *>*channels;

@end
