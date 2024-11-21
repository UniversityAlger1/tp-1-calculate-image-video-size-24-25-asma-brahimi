#include <string.h>
#include <stdio.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN

      // Taille d'une image en couleur (en octets)
    int sizeColorImage = w * h * 3;
    
    // Taille d'une image en noir et blanc (en octets)
    int sizeBWImage = w * h * 1;

    // Nombre total d'images
    int framesMovie = fps * durationMovie; // Frames in the color section
    int framesCredits = fps * durationCredits; // Frames in the grayscale section

    // Taille totale de la section en couleur (en octets)
    long long totalColorSize = (long long) sizeColorImage * framesMovie;

    // Taille totale de la section noir et blanc (en octets)
    long long totalBWSize = (long long) sizeBWImage * framesCredits;

    // Taille totale de la vidéo (en octets)
    long long totalSize = totalColorSize + totalBWSize;

    // Conversion en unité demandée
    if (strcmp(unit, "bt") == 0) {
        return (float) totalSize; // Taille en octets
    } else if (strcmp(unit, "ko") == 0) {
        return (float) totalSize / 1024.0; // Taille en kilo-octets
    } else if (strcmp(unit, "mo") == 0) {
        return (float) totalSize / (1024.0 * 1024.0); // Taille en mégaoctets
    } else if (strcmp(unit, "go") == 0) {
        return (float) totalSize / (1024.0 * 1024.0 * 1024.0); // Taille en gigaoctets
    } else {
        // Unité invalide
        printf("Erreur : Unité inconnue '%s'.\n", unit);
        return -1; // Code d'erreur
    }
}
   // YOUR CODE HERE - END
   
