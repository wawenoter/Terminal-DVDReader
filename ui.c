#include <stdio.h>
#include "ui.h"

void display_message(const char *msg) {
    printf("\r%s     ", msg);
    fflush(stdout);
}
