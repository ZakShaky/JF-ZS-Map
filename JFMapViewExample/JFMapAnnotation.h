//
//  JFMapAnnotation.h
//  JFMapViewExample
//
//  Created by ZS(JF) on 13/08/2013.
//  Copyright (c) 2015 ZS (JF). All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

@interface JFMapAnnotation : NSObject <MKAnnotation>{
    
    NSString *title;
    NSString *subtitle;
    CLLocationCoordinate2D coordinate;
}

@property (nonatomic, copy) NSString * title;
@property (nonatomic, copy) NSString * subtitle;
@property (nonatomic, assign)CLLocationCoordinate2D coordinate;

@end
