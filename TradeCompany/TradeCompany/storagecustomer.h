#ifndef STORAGECUSTOMER_H
#define STORAGECUSTOMER_H
#include "customer.h"

class StorageCustomer : public Customer
{
private:
public:
    StorageCustomer();

    void Buy(Company* cmp, int id, int type, int count);
};

#endif // STORAGECUSTOMER_H
