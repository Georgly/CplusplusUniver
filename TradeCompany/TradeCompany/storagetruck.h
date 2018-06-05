#ifndef STORAGETRUCK_H
#define STORAGETRUCK_H
#include "truck.h"
#include "store.h"

class Store;

class StorageTruck : Truck
{
private:
    Store* _stores[4];
    int count = 0;
    int type;
public:
    StorageTruck();
    StorageTruck(int type);
    virtual ~StorageTruck();
    void GetStores(Store* stores[]);
    void Fill();
};

#endif // STORAGETRUCK_H
