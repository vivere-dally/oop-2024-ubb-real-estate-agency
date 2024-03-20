#include "domain.h"

#include <assert.h>
#include <stdlib.h>

#include "utils.h"

Offer* malloc_offer(int id, double surface, double price, char* type,
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
    // AAA

    // Arrange
    int id = 1;
    double surface = 123.123;
    double price = 100000.5;
    char* type = "teren";
    char* address = "Cluj";

    // Act
    Offer* actual = malloc_offer(id, surface, price, type, address);

    // Assert
    assert(actual->id == 1);
    assert(doublecmp(actual->surface, surface));
    assert(doublecmp(actual->price, price));
    // assert(offer->type == "teren");
    // assert(offer->address == "Cluj");
}

void test_domain() { test_malloc_offer(); }
