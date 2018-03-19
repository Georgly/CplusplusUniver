#ifndef STORAGE_H
#define STORAGE_H
#include "storagetruck.h"

class Storage
{
public:
private:
    short _type;
    int _count;
    StorageTruck _truck;

public:
    Storage(int type);
    ~Storage();

    void Sell(int type, int count);
    void SendTruck();

    int GetType();
    int GetCount();
    void SetCount(int count);

private:
    void SetType(int type);
    void SellMessage(int type, int count);
};

#endif // STORAGE_H
