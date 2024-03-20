#include "domain.h"

#include <assert.h>
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
}

void test_domain() { test_malloc_offer(); }
