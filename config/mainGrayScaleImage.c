// // config.c
// #include <stdio.h>
// #include <assert.h>
// #include <stdlib.h>

// #include "grayScaleImage.h"
// #include "assert_with_message.h"

// int testMethod(int input1, int input2, float output){
//     char message[100];
//     float result = grayScaleImage(input1, input2);
//     sprintf(message, "Inputs (%d, %d). Expected output should be %f. Actuel output = %f", input1, input2, output, result);
//     assert_with_message(result == output, message);
// }

// int main() {
//     // Test 1
//     testMethod(2, 2, 4);

//     // Test 1
//     testMethod(20, 6, 120);
//     return 0;
// }

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "grayScaleImage.h"
#include "assert_with_message.h"

// Fonction pour tester l'implémentation de grayScaleImage
int testMethod(int input1, int input2, float expectedOutput) {
    char message[100];
    
    // Calcul du résultat
    float result = grayScaleImage(input1, input2);

    // Affichage des résultats du test
    printf("Testing with inputs (%d, %d). Expected output: %f, Actual output: %f\n", input1, input2, expectedOutput, result);

    // Message à afficher avant l'assertion
    sprintf(message, "Inputs (%d, %d). Expected output should be %f. Actual output = %f", input1, input2, expectedOutput, result);
    
    // Vérification avec l'assertion
    assert_with_message(result == expectedOutput, message);

    // Affichage d'un message de succès si l'assertion passe
    printf("Test passed for inputs (%d, %d)\n", input1, input2);
}

int main() {
    // Affichage du début des tests
    printf("Starting tests...\n");

    // Test 1 : (largeur = 2, hauteur = 2, sortie attendue = 4 octets)
    testMethod(2, 2, 4);

    // Test 2 : (largeur = 20, hauteur = 6, sortie attendue = 120 octets)
    testMethod(20, 6, 120);

    // Message de fin des tests si tout s'est bien passé
    printf("Tests finished successfully.\n");

    return 0;
}
