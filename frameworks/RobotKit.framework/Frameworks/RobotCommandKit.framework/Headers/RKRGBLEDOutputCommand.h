//
//  RKLEDOutputCommand.h
//  RobotCommandKit
//
//  Created by Brian Smith on 6/15/11.
//  Imported to RobotCommandKit by Hunter Lang on 12/12/13.
//  Copyright 2011 Orbotix Inc. All rights reserved.
//

/*! @file */

#import <Foundation/Foundation.h>
#import "RKDeviceCommand.h"

/*!
 * @brief Class that encapsulates a set RGB LED output command.
 *
 * This class is used to change the red, green, blue brightness of the RGB LED on a Sphero.
 *
 * @sa RKRGBLEDOutputResponse
 */
@interface RKRGBLEDOutputCommand : RKDeviceCommand

/*! The red brightness that is sent with the command. */
@property ( nonatomic, readonly ) float red;
/*! The green brightness that is sent with the command. */
@property ( nonatomic, readonly ) float green;
/*! The blue brightness that is sent with the command. */
@property ( nonatomic, readonly ) float blue;
/*! */
@property ( nonatomic, readonly ) BOOL userDefault;

/*! The current RGB LED red value that was successfully sent to the device. */
+ (float) currentRed;
/*! The current RGB LED green value that was successfully sent to the device. */
+ (float) currentGreen;
/*! The current RGB LED blue value that was successfully sent to the device. */
+ (float) currentBlue;
/*! The status of the current color is going to be set as the user default */
+ (BOOL) isCurrentColorUserDefault;

/*!
 * Initializer for the object.
 * @param red The red brightness value between 0.0 to 1.0 with 0.0 being off and 1.0 being 
 * full brightness.
 * @param green The green brightness value between 0.0 to 1.0 with 0.0 being off and 1.0 being
 * full brightness.
 * @param blue The blue brightness value between 0.0 to 1.0 with 0.0 being off and 1.0 being
 * full brightness.
 * @return The initialized object.
 */
- (instancetype) initWithRed:(float) red green:(float) green blue:(float) blue;
+ (instancetype) commandWithRed:(float) red green:(float) green blue:(float) blue;
+ (instancetype) commandWithSpheroBlue;

/*!
 * Initializer for the object.
 * @param red The red brightness value between 0.0 to 1.0 with 0.0 being off and 1.0 being 
 * full brightness.
 * @param green The green brightness value between 0.0 to 1.0 with 0.0 being off and 1.0 being
 * full brightness.
 * @param blue The blue brightness value between 0.0 to 1.0 with 0.0 being off and 1.0 being
 * full brightness.
 * @param defaultState Used to have the color set as the users default color. This is the color displayed 
 * when Sphero first connects and is set when client code closes the connection.
 * @return The initialized object.
 */
- (instancetype) initWithRed:(float) red green:(float) green blue:(float) blue userDefault:(BOOL) defaultState;

@end
