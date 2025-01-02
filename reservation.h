#ifndef RESERVATION_H
#define RESERVATION_H

void book_seat(int busIndex, int seatNumber, const char *name);
void cancel_seat(int busIndex, int seatNumber);

#endif // RESERVATION_H
