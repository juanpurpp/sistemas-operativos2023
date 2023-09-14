#include <stdio.h>

int main () {
    const char *nombres[5];
    nombres[0] = "Ignacio";
    nombres[1] = "jose manuel";
    nombres[2] = "Eladio";
    nombres[3] = "raul arredondo";
    nombres[4] = "joel torres";

    for(int i = 0; i<5; i++){
        printf("%s\n",nombres[i]);
    }

    return 0;
}