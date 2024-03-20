#include "domain.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "utils.h"

Offer* malloc_offer(int id, double surface, double price, EstateType type,
                    char* address) {
    Offer* offer = malloc(sizeof(Offer));

    offer->id = id;
    offer->surface = surface;
    offer->price = price;
    offer->type = type;
    offer->address = address;

    return offer;
}

void free_offer(Offer* offer) { free(offer); }

void print_offer(Offer* offer) {
    printf("Offer[%d] of type %s located at %s with surface %lf costs %lf.\n",
           offer->id, estate_type_to_str(offer->type), offer->address,
           offer->surface, offer->price);
};

EstateType it_estate_type(int value) {
    switch (value) {
        case 2:
            return HOUSE;
        case 3:
            return APARTMENT;
        case 1:
        default:
            return LAND;
    }
}

char* estate_type_to_str(EstateType type) {
    switch (type) {
        case LAND:
            return "land";
        case HOUSE:
            return "house";
        case APARTMENT:
            return "apartment";
    }
}

void test_malloc_offer() {
    // Arrange
    int id = 1;
    double surface = 123.123;
    double price = 100000.5;
    EstateType type = LAND;
    char* address = "Cluj";

    // Act
    Offer* actual = malloc_offer(id, surface, price, type, address);

    // Assert
    assert(actual->id == 1);
    assert(double_eq(actual->surface, surface));
    assert(double_eq(actual->price, price));
    assert(actual->type == type);
    assert(strcmp(actual->address, address) == 0);

    free_offer(actual);
}

void test_domain() { test_malloc_offer(); }
