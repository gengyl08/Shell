//
//  ShellViewController.h
//  Shell
//
//  Created by Yilong Geng on 9/23/13.
//  Copyright (c) 2013 Yilong Geng. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ShellViewController : UIViewController
<UITextFieldDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property BOOL newMedia;
@property (weak, nonatomic) IBOutlet UIImageView *receiptPic;
- (IBAction)takePicture:(id)sender;
- (IBAction)submit:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *amount;
@property (weak, nonatomic) IBOutlet UITextField *gallons;
@property (weak, nonatomic) IBOutlet UITextField *fuelGrade;

@end
