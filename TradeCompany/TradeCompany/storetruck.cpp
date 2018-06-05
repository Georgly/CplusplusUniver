#include "storetruck.h"

StoreTruck::StoreTruck(){}

StoreTruck::StoreTruck(int *goods)
{
    pointer = goods;
}

StoreTruck::~StoreTruck()
{
    for(int i = 0; i < 4; i++)
    {
        delete _storages[i];
    }
    delete _storages;
}

void StoreTruck::GetStorages(Storage* storages[])
{
    for(int i = 0; i < 4; i++)
    {
        _storages[i] = storages[i];
    }
}

void StoreTruck::Fill()
{
    for(int i = 0; i < 4; i++)
    {
        pointer[_storages[i]->GetType()] += 40;
    }
}
