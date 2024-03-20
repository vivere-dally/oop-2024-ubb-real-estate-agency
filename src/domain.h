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

void test_domain();

#endif
