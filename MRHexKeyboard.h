//
//  MRHexKeyboard.h
//
//  Created by Mikk Rätsep on 02/10/13.
//  Copyright (c) 2013 Mikk Rätsep. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MRHexKeyboard : UIView <UITextFieldDelegate>

@property(nonatomic, assign) BOOL display0xButton;

@property(nonatomic, assign) BOOL add0x;

@property(nonatomic, assign) UIColor *buttonBackgroundColor;

@property(nonatomic, assign) UIColor *buttonBackgroundHighlightedColor;

@property(nonatomic, assign) UIColor *buttonTextColor;

@property(nonatomic, assign) UIColor *separatorColor;

@property(nonatomic, retain) UIImage *deleteImage;

@end

