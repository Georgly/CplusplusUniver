#include "storecustomer.h"

StoreCustomer::StoreCustomer()
{
}

void StoreCustomer::Buy(Company* cmp, int id, int type, int count)
{
    cmp->GetStore(id)->Sell(type, count);
}
