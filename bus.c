#include "bus.h"
#include <stdio.h>
#include <string.h>

struct Bus buses[MAX_BUSES];
int busCount = 0;

void install_bus() {
    if (busCount >= MAX_BUSES) {
        printf("Max buses reached!\n");
        return;
    }
    struct Bus *b = &buses[busCount++];
    printf("Enter bus no: "); scanf("%s", b->busn);
    printf("Driver: "); scanf("%s", b->driver);
    printf("Arrival: "); scanf("%s", b->arrival);
    printf("Departure: "); scanf("%s", b->depart);
    printf("From: "); scanf("%s", b->from);
    printf("To: "); scanf("%s", b->to);
    for (int i = 0; i < 8; i++) for (int j = 0; j < 4; j++) strcpy(b->seat[i][j], "Empty");
    printf("Bus installed successfully!\n");
}

void show_buses() {
    if (busCount == 0) {
        printf("No buses available!\n");
        return;
    }
    for (int i = 0; i < busCount; i++) {
        struct Bus *b = &buses[i];
        printf("Bus %s: Driver %s, From %s to %s, Arrival %s, Departure %s\n",
               b->busn, b->driver, b->from, b->to, b->arrival, b->depart);
    }
}
