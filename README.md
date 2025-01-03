# Bus Management System

The **Bus Management System** is a C-based project designed to manage and automate bus reservations, seat bookings, and staff operations. It supports passenger interactions and staff functionalities in a modular and efficient manner.

---

## Features

### Passenger Features

- Book seats on available buses.
- Cancel seat reservations.
- View available buses and seat arrangements.

### Staff Features

- Authenticate staff members with usernames and passwords.
- Install new buses with complete details.
- Update bus information such as drivers, routes, and schedules.

---

## File Structure

The project is organized into the following modules:

### Source Files

- `auth.c` and `auth.h`: Handles staff authentication.
- `bus.c` and `bus.h`: Manages bus information, including installation and availability.
- `reservation.c` and `reservation.h`: Manages seat booking and cancellation.
- `main.c`: Entry point for the program, integrating all modules.

### Compilation Output

- `bus_system`: The compiled executable.

---

## How to Compile and Run

### Prerequisites

- GCC compiler installed on your system.

### Compilation

Run the following command in the terminal to compile the program:

```bash
gcc -o bus_system main.c auth.c bus.c reservation.c -lpthread
```

### Execution

Execute the program with:

```bash
./bus_system
```

---

## Usage Instructions

1. **Passenger Mode**

   - Select the option for passengers from the main menu.
   - Book or cancel seats based on bus availability.

2. **Staff Mode**
   - Log in using authorized credentials.
   - Install or update bus information.

### Main Menu Options

- **1**: Staff Login
- **2**: Show Available Buses
- **3**: Install New Bus
- **4**: Book a Seat
- **5**: Cancel a Seat
- **6**: Exit

---

## Example Workflow

1. **Install Buses** (Staff Only):
   - Provide details such as bus number, driver name, and route.
2. **Book a Seat**:
   - Enter the bus index and seat number.
3. **Cancel a Seat**:
   - Provide bus and seat details to cancel a reservation.

---

## Future Enhancements

- Add database integration to persist bus and reservation data.
- Implement a graphical user interface (GUI).
- Enhance error handling and logging capabilities.

---

## License

This project is licensed under the [MIT License](LICENSE).

---

## Author

**Didar Ali**
