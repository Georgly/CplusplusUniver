#include "storagecustomer.h"

StorageCustomer::StorageCustomer()
{
}

void StorageCustomer::Buy(Company* cmp, int id, int type, int count)
{
    cmp->GetStorage(id)->Sell(type, count);
}
