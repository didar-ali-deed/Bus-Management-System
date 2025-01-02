#include "auth.h"
#include "bus.h"
#include "reservation.h"
#include <pthread.h>

int main() {
    pthread_mutex_init(&mutex, NULL);

    int choice;
    while (1) {
        printf("1. Staff Login\n2. Show Buses\n3. Install Bus\n4. Book Seat\n5. Cancel Seat\n6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1 && check_authorization()) {
            int staffChoice;
            printf("1. Install Bus\n2. Exit Staff Menu\nEnter choice: ");
            scanf("%d", &staffChoice);
            if (staffChoice == 1) install_bus();
        } else if (choice == 2) {
            show_buses();
        } else if (choice == 3) {
            install_bus();
        } else if (choice == 4) {
            int busIndex, seatNumber;
            char name[20];
            printf("Enter bus index, seat number, and name: ");
            scanf("%d %d %s", &busIndex, &seatNumber, name);
            book_seat(busIndex, seatNumber, name);
        } else if (choice == 5) {
            int busIndex, seatNumber;
            printf("Enter bus index and seat number: ");
            scanf("%d %d", &busIndex, &seatNumber);
            cancel_seat(busIndex, seatNumber);
        } else if (choice == 6) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }

    pthread_mutex_destroy(&mutex);
    return 0;
}
