#ifndef DOMAIN_H
#define DOMAIN_H

typedef struct {
    int id;
    double surface;
    double price;
    char* type;
    char* address;
} Offer;

Offer* malloc_offer(int id, double surface, double price, char* type, char* address);

void free_offer(Offer* offer);

void test_domain();

#endif
