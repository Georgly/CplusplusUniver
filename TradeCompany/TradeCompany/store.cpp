#include "store.h"
#include "company.h"
#include "iostream"

void Store::SellMessage(int type, int count)
{
    QString res = "Store-" + static_cast<QString>(GetId())
            + " sell " + static_cast<QString>(count)
            + " of " + Company::goods[type];
    std::cout << res.toStdString().data();
}

Store::Store(int id)
{
    SetId(id);
}

Store::~Store()
{
    delete _goods;
}

void Store::SetId(int id)
{
    _id = id;
}
int Store::GetId()
{
    return _id;
}

void Store::CheckCount()
{
    if( (_goods[0] < LIMIT || _goods[1] < LIMIT) && (_goods[2] < LIMIT || _goods[3] < LIMIT))
    {
        SendTruck();
    }
}

void Store::SendTruck()
{

}

void Store::Sell(int type, int count)
{
    int tmp = _goods[type] - count;
    _goods[type] = tmp ? tmp : 0;
    SellMessage(type, count);
}
