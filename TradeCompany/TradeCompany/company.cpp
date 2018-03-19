#include "company.h"

Company::Company()
{
    goods[0] = "greens"; goods[1] = "bread"; goods[2] = "cereals";goods[3] = "appliances";
    for(int i = 0; i < Company::COUNT; i++)
    {
        storages[i] = new Storage(i);
        stores[i] = new Store(i);
    }
}

Company::~Company()
{
    for(int i = Company::COUNT - 1; i >= 0; i--)
    {
        delete storages[i];
        delete stores[i];
    }
    delete storages;
    delete stores;
    //delete GOODS;
}

Storage* Company::GetStorage(int id)
{
    return storages[id];
}

Store* Company::GetStore(int id)
{
    return stores[id];
}

void Company::CheckStores()
{
    for(int i = 0; i < COUNT; i++)
    {
        stores[i]->CheckCount();
    }
}

void Company::RefillStores()
{
}
