//
//  GSGradientEditorPlatform.h
//  GSGradientEditor
//
//  Created by Mike Piatek-Jimenez on 1/13/14.
//
//  The MIT License (MIT)
//
//  Copyright (c) 2014 Mike Piatek-Jimenez and Gaucho Software, LLC.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//  the Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#ifndef GSGRADIENTEDITORPLATFORM_H
#define GSGRADIENTEDITORPLATFORM_H

// Detect if we are running on iOS or OS X
#include "TargetConditionals.h"
#if TARGET_OS_IPHONE
#define GSGE_IOS
#define GSGradient_SystemColorClass UIColor
#elif TARGET_IPHONE_SIMULATOR
#define GSGE_IOS
#define GSGradient_SystemColorClass UIColor
#elif TARGET_OS_TV
#define GSGE_IOS
#define GSGradient_SystemColorClass UIColor
#elif TARGET_OS_MAC
#define GSGradient_SystemColorClass NSColor
#endif

#endif
