#import <UIKit/UIKit.h>
#import <GLKit/GLKit.h>

@protocol SignatureViewDelegate <NSObject>
@optional
- (void)tap;
- (void)pan;
@end

@interface PPSSignatureView : GLKView

@property (assign, nonatomic) UIColor *strokeColor;
@property (assign, nonatomic) BOOL hasSignature;
@property (strong, nonatomic) UIImage *signatureImage;
@property (nonatomic, weak) id <SignatureViewDelegate> delegate;

- (void)erase;

@end
