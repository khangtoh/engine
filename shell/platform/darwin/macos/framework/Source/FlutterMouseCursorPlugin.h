// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#import <Cocoa/Cocoa.h>

#import "flutter/shell/platform/darwin/common/framework/Headers/FlutterBinaryMessenger.h"
#import "flutter/shell/platform/darwin/macos/framework/Headers/FlutterViewController.h"

/**
 * A plugin to handle mouse cursor.
 *
 * Responsible for bridging the native macOS mouse cursor system with the
 * Flutter framework mouse cursor classes, via system channels.
 *
 * This is not an FlutterPlugin since it needs access to FlutterViewController
 * internals, so needs to be managed differently.
 */
@interface FlutterMouseCursorPlugin : NSObject

/**
 * Initializes a mouse cursor plugin that coordinates key event handling with
 * |viewController|.
 */
- (nonnull instancetype)initWithViewController:(FlutterViewController*)viewController;

@end