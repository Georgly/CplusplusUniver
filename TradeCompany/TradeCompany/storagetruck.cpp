#include "storagetruck.h"

StorageTruck::StorageTruck()
{
}

StorageTruck::StorageTruck(int type)
{
    count = 200;
    this->type = type;
}

StorageTruck::~StorageTruck()
{
    for(int i = 0; i < 4; i++)
    {
        delete _stores[i];
    }
    delete _stores;
}

void StorageTruck::GetStores(Store *stores[])
{
    for(int i = 0; i < 4; i++)
    {
        _stores[i] = stores[i];
    }
}

void StorageTruck::Fill()
{
    for(int i = 0; i < 4; i++)
    {
        _stores[i]->ReFill(type, count / 4);
    }
}
