#include <stdio.h>
#include <stdlib.h>
#include "dvd.h"

int is_dvd_inserted() {
    FILE *dvd = fopen("/dev/sr0", "r");
    if (dvd) {
        fclose(dvd);
        return 1;
    }
    return 0;
}

void read_dvd() {
    FILE *dvd = fopen("/dev/sr0", "r");
    if (!dvd) {
        printf("Error reading DVD.\n");
        return;
    }
    printf("DVD Contents: ");
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), dvd)) {
        printf("%s", buffer);
    }
    fclose(dvd);
}
