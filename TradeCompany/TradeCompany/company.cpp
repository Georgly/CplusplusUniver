#include "company.h"
#include "iostream"

Company::Company()
{
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
        if(stores[i]->CheckCount())
        {
            std::cout<<"Send truck from Stores\n";
            stores[i]->SendTruck(storages);
        }

    }
}

void Company::RefillStores()
{
    std::cout<<"Send truck from Storage\n";
    for(int i = 0; i < Company::COUNT; i++)
    {
        storages[i]->SendTruck(stores);
    }
}

