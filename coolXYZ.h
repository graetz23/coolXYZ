/**
 * coolXYZ - cool arduino XYZ project.
 *
 * coolXYZ is distributed under the MIT License (MIT); this file is part of.
 *
 * Copyright (c) 2020-2023 Christian (graetz23@gmail.com)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * Christian
 * graetz23@gmail.com
 * created 200106
 * version 230518
 *
 */

/**************************************80**************************************/

#ifndef __coolXYZ_h__
#define __coolXYZ_h__

/**************************************80**************************************/

// #if defined(ARDUINO) && ARDUINO >= 100
#include <Arduino.h>
// #else
// #include <WProgram.h>
// #endif

/**************************************80**************************************/

#define XYZ_DEBUG true;

/*!
 * \brief main class of the XYZ project
 */
class XYZ {

private:

public:

  /*!
   * \brief Constructor
   */
  XYZ( void );

  /*!
   * \brief Destructor
   */
  ~XYZ( void );

  /*!
   * \brief call this in arduino's setup method and adjust it ..
   */
  void setup( void );

  /*!
   * \brief call this in arduino's loop ..
   */
  void loop( void );

}; // class

#endif // __coolXYZ_h__
