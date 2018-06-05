#ifndef STORAGE_H
#define STORAGE_H
#include "storagetruck.h"
#include "store.h"
class StorageTruck;
class Store;

class Storage
{
public:
private:
    short _type;
    int _count;
    StorageTruck* _truck;

public:
    Storage(int type);
    ~Storage();

    void Sell(int type, int count);
    void SendTruck(Store* stores[]);

    int GetType();
    int GetCount();
    void SetCount(int count);

private:
    void SetType(int type);
    void SellMessage(int type, int count);
};

#endif // STORAGE_H
