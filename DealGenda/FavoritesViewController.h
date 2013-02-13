//
//  FavoritesViewController.h
//  DealGenda
//
//  Created by Douglas Abrams on 2/11/13.
//  Copyright (c) 2013 Douglas Abrams. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FavoritesViewController : UIViewController
@property(nonatomic, readonly, copy) NSArray *subviews;
@property (strong, nonatomic) IBOutlet UIView *itemSubView;
@property (strong, nonatomic) IBOutlet UIView *retailerSubView;
@property (strong, nonatomic) IBOutlet UILabel *testLabel;
@property (strong, nonatomic) IBOutlet UISegmentedControl *segmentControl;
@property (strong, nonatomic) IBOutlet UIView *favoritesView;

-(IBAction)segmentedChartButtonChanged:(id)sender;


@end