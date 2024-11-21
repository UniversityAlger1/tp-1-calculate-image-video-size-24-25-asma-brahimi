#include <string.h>
#include <stdio.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
   // YOUR CODE HERE - BEGIN
      // Taille de l'image en bits
    long long imageSizeInBits = w * h * 3; // 24 bits par pixel pour une image couleur (8 bits par composant RGB)

    // Si l'unité demandée est "bt" (bits)
    if (strcmp(unit, "bt") == 0) {
        return imageSizeInBits;  // Retourne la taille en bits

    // Si l'unité demandée est "ko" (kilobits)
    } else if (strcmp(unit, "ko") == 0) {
        return imageSizeInBits / 1024.0;  // Conversion en kilobits (1 kilobit = 1024 bits)

    // Si l'unité demandée est "mo" (megabits)
    } else if (strcmp(unit, "mo") == 0) {
        return (imageSizeInBits / (1024.0 * 1024.0));  // Conversion en megabits (1 megabit = 1024 kilobits)

   // Si l'unité demandée est "go" (gigabits)
    } else if (strcmp(unit, "go") == 0) {
        return (imageSizeInBits / (1024.0 * 1024.0 * 1024.0));  // Conversion en gigabits (1 gigabit = 1024 megabits)
    
    // Si l'unité est incorrecte, retourner -1 pour indiquer une erreur
    } else {
        printf("Erreur : Unité inconnue.\n");

   // YOUR CODE HERE - END
        return -1;
    }
}