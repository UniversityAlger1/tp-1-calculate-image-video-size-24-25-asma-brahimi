#include "config/grayScaleImage.h"
// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
   // YOUR CODE HERE - BEGIN
      // Calculate the size in bytes
         int size = w * h * 1; // Each pixel is 1 byte for grayscale
   // YOUR CODE HERE - END
   return (float)size ;
}