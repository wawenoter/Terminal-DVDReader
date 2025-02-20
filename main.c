#include <stdio.h>
#include <unistd.h>
#include "dvd.h"
#include "ui.h"

int main() {
    while (1) {
        if (is_dvd_inserted()) {
            display_message("Reading DVD...");
            read_dvd();
        } else {
            display_message("No Media");
        }
        sleep(2);
    }
    return 0;
}
