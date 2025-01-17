//
//  HSVSolController.h
//  astronomy-objc
//
//  Created by Hector Steven on 7/22/19.
//  Copyright © 2019 Hector Steven. All rights reserved.
//

#import <Foundation/Foundation.h>


@class HSVSolPhotDescription;

NS_SWIFT_NAME(SolController)

@interface HSVSolController : NSObject

- (void)fetchSolsWithCompletion:(void (^)(NSError *error ))completion;

- (NSArray *)Sols;

- (void)fetchImageListWithSol:(int)sol Completion:(void (^)(NSError *error ))completion;

- (NSArray *)SolPhotosDescription;

- (void)fetchImageWithURL:(NSURL *)url Completion:(void (^)(NSData *, NSError *error ))completion;



@end


