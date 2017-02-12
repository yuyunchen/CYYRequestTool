//
//  CYYRequestTool.h
//  CYYRequestTool
//
//  Created by cyy9119 on 2/12/17.
//  Copyright © 2017 everflag. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^successBlock)(id responseObj);
typedef void (^failBlock)(NSError *error);

@interface CYYRequestTool : NSObject

+ (void)getWithUrl:(NSString *)urlStr succeed:(successBlock)successBlk failed:(failBlock)failBlk;
+ (void)getWithUrl:(NSString *)urlStr params:(NSDictionary *)params succeed:(successBlock)successBlk failed:(failBlock)failBlk;

+ (void)postWithUrl:(NSString *)urlStr succeed:(successBlock)successBlk failed:(failBlock)failBlk;
+ (void)postWithUrl:(NSString *)urlStr params:(NSDictionary *)params succeed:(successBlock)successBlk failed:(failBlock)failBlk;

+ (void)headWithUrl:(NSString *)urlStr succeed:(successBlock)successBlk failed:(failBlock)failBlk;

+ (void)partialDataWithUrl:(NSString *)urlStr range:(NSString *)range succeed:(successBlock)successBlk failed:(failBlock)failBlk;

@end
