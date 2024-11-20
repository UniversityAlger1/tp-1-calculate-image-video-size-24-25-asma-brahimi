// config.c
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "coloredBitmap.h"
#include "assert_with_message.h"

int testMethod(int input1, int input2, char* unit, float output){
    char message[100];
    float result = coloredBitmap(input1, input2, unit);
    sprintf(message, "Inputs (%d, %d, %s). Expected output should be %f. Actuel output = %f", input1, input2, unit, output, result);
    assert_with_message(((result >= output - 0.2) && (result <= output + 0.2)), message);
}

int main() {
    printf("Début de l'exécution du programme.\n");
    
    testMethod(100, 50, "ko",117.1875) ;//14.648438);

    testMethod(500, 300, "mo", 3.4375);//0.429153);

    testMethod(1024, 1024, "go",0.002199); //0.002930);
    return 0;
}