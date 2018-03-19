#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "company.h"

class Customer
{
public:
    Customer();
    virtual void Buy(Company* cmp, int id, int type, int count) = 0;
};

#endif // CUSTOMER_H
