#ifndef DOMAIN_H
#define DOMAIN_H

typedef enum { LAND, HOUSE, APARTMENT } EstateType;

typedef struct {
    int id;
    double surface;
    double price;
    EstateType type;
    char* address;
} Offer;

Offer* malloc_offer(int id, double surface, double price, EstateType type,
                    char* address);

void free_offer(Offer* offer);

void print_offer(Offer* offer);

EstateType it_estate_type(int value);

char* estate_type_to_str(EstateType type);

void test_domain();

#endif
