#include <stdio.h>

#include "domain.h"
#include "utils.h"

Offer* OFFERS[3];
int i = 0;

static const char MENU[] =
    "1. Add new offer.\n"
    "2. Update existing offer.\n"
    "3. Delete an offer.\n"
    "9. List all offers.\n"
    "0. Exit.\n";

void test_all() {
    test_domain();
    test_utils();
}

void handle_add() {
    int estate_type;
    read_input("Enter the type ([1 - land], 2 - house, 3 - apartment)", "%d",
               &estate_type);

    double surface;
    read_input("Enter the surface in square meters", "%lf", &surface);

    char address[255];
    read_input("Enter address (max 255)", "%s", address);

    double price;
    read_input("Enter the price", "%lf", &price);

    Offer* offer =
        malloc_offer(i, surface, price, it_estate_type(estate_type), address);
    OFFERS[i] = offer;

    i += 1;
}

void handle_list_all_offers() {
    printf("We have %d offers:\n", i);
    for (int j = 0; j < i; j += 1) {
        print_offer(OFFERS[j]);
    }
}

void run() {
    int running = 1;
    while (running) {
        printf(MENU);

        int option;
        read_input("", "%d", &option);

        switch (option) {
            case 1:
                // Add
                handle_add();
                break;
            case 2:
                // Update
                break;
            case 3:
                // Delete
                break;
            case 9:
                // List offers
                handle_list_all_offers();
                break;
            case 0:
            default:
                printf("You enterd %d. Quitting the application, bye!\n",
                       option);
                running = 0;
        }
    }
}

int main(void) {
    test_all();
    run();
    return 0;
}
