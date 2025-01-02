#include "reservation.h"
#include "bus.h"
#include <stdio.h>
#include <string.h>
#include <pthread.h>

pthread_mutex_t mutex;

void book_seat(int busIndex, int seatNumber, const char *name) {
    pthread_mutex_lock(&mutex);
    int row = (seatNumber - 1) / 4, col = (seatNumber - 1) % 4;
    if (strcmp(buses[busIndex].seat[row][col], "Empty") != 0) {
        printf("Seat %d already reserved!\n", seatNumber);
    } else {
        strcpy(buses[busIndex].seat[row][col], name);
        printf("Seat %d reserved for %s.\n", seatNumber, name);
    }
    pthread_mutex_unlock(&mutex);
}

void cancel_seat(int busIndex, int seatNumber) {
    pthread_mutex_lock(&mutex);
    int row = (seatNumber - 1) / 4, col = (seatNumber - 1) % 4;
    if (strcmp(buses[busIndex].seat[row][col], "Empty") == 0) {
        printf("Seat %d is already empty!\n", seatNumber);
    } else {
        strcpy(buses[busIndex].seat[row][col], "Empty");
        printf("Seat %d reservation canceled.\n", seatNumber);
    }
    pthread_mutex_unlock(&mutex);
}
