#ifndef STORE_H
#define STORE_H
#include "storetruck.h"

class Store
{
private:
    short _id;
    int _goods[4];
    const int LIMIT = 40;
    StoreTruck truck;

public:
    Store(int _id);
    ~Store();

    void SendTruck();
    void CheckCount();
    void Sell(int type, int count);
    int GetId();

private:
    void SetId(int id);
    void SellMessage(int type, int count);
};

#endif // STORE_H
