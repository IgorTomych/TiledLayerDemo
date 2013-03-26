//
//  ChannelProgram.h
//  TV24
//

#import <UIKit/UIKit.h>

@interface ChannelProgram : NSObject 
{
    
}

@property (nonatomic) int starttime;
@property (nonatomic) int endtime;
@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *introdesc;

@end
