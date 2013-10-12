//
//  ViewController.h
//  addressbook
//
//  Created by Admin on 8/22/13.
//  Copyright (c) 2013 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AddressBook/AddressBook.h>
#import <AddressBookUI/AddressBookUI.h>

@interface ViewController : UIViewController<ABPeoplePickerNavigationControllerDelegate>

@property (strong, nonatomic) IBOutlet UILabel *phoneNumber;
@property (strong, nonatomic) IBOutlet UILabel *firstName;
- (IBAction)show:(id)sender;

@end
