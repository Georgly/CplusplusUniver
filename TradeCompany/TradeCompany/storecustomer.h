#ifndef STORECUSTOMER_H
#define STORECUSTOMER_H
#include "customer.h"


class StoreCustomer : public Customer
{
private:
public:
    StoreCustomer();

    void Buy(Company* cmp, int id, int type, int count);
};

#endif // STORECUSTOMER_H
