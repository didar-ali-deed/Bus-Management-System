#ifndef BUS_H
#define BUS_H

#define MAX_BUSES 10
struct Bus {
    char busn[5], driver[10], arrival[5], depart[5], from[10], to[10];
    char seat[8][4][10];
};

extern struct Bus buses[MAX_BUSES];
extern int busCount;

void install_bus();
void show_buses();

#endif // BUS_H
