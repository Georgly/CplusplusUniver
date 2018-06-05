#ifndef STORE_H
#define STORE_H
#include "storetruck.h"
class StoreTruck;
class Storage;

class Store
{
private:
    short _id;
    int _goods[4] = {100, 100, 100, 100};
    const int LIMIT = 40;
    StoreTruck *truck;

public:
    Store(int _id);
    ~Store();

    void SendTruck(Storage* storages[]);
    bool CheckCount();
    void Sell(int type, int count);
    int GetId();
    void ReFill(int type, int count);

private:
    void SetId(int id);
    void SellMessage(int type, int count);
    void GoodsReFillMessage();
};

#endif // STORE_H
