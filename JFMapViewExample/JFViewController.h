//
//  JFViewController.h
//  JFMapViewExample
//
//  Created by ZS(JF) on 13/08/2013.
//  Copyright (c) 2015 ZS (JF). All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>
#import "JFMapAnnotation.h"

@interface JFViewController : UIViewController <MKMapViewDelegate>

@property (weak, nonatomic) IBOutlet MKMapView *mapView;

- (IBAction)addCitiesToMap:(id)sender;
- (void)addGestureRecogniserToMapView;
- (void)addPinToMap:(UIGestureRecognizer *)gestureRecognizer;
- (NSMutableArray *)parseJSONCities;

@end
