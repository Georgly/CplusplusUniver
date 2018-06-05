#ifndef STORETRUCK_H
#define STORETRUCK_H
#include "truck.h"
#include "storage.h"

class Storage;

class StoreTruck :  public Truck
{
private:
    Storage* _storages[4];
    int* pointer;
public:
    StoreTruck();
    StoreTruck(int *goods);
    virtual ~StoreTruck();
    void GetStorages(Storage* storages[]);
    void Fill();
};

#endif // STORETRUCK_H
