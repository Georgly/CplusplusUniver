#include "store.h"
#include "company.h"
#include "iostream"



void Store::SellMessage(int type, int count)
{
    QString res = "Store-" + QString::number(GetId())
            + " sell " + QString::number(count)
            + " of " + Company::goods[type] + "\n";
    std::cout << res.toStdString().data();
}

void Store::GoodsReFillMessage()
{
    QString res = "Store-" + QString::number(GetId())
            + " contain: " + QString::number(_goods[0]) + " of " + Company::goods[0] + ";\n"
            + QString::number(_goods[1]) + " of " + Company::goods[1] + ";\n"
            + QString::number(_goods[2]) + " of " + Company::goods[2] + ";\n"
            + QString::number(_goods[3]) + " of " + Company::goods[3] + ";\n"
            + "\n";
    std::cout << res.toStdString().data();
}

Store::Store(int id)
{
    SetId(id);
    truck = new StoreTruck(_goods);
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

void Store::ReFill(int type, int count)
{
    _goods[type] += count;
}

bool Store::CheckCount()
{
    return (_goods[0] < LIMIT || _goods[1] < LIMIT) && (_goods[2] < LIMIT || _goods[3] < LIMIT);
}

void Store::SendTruck(Storage* storages[])
{
    truck->GetStorages(storages);
    truck->Fill();
}

void Store::Sell(int type, int count)
{
    int tmp = _goods[type] - count;
    _goods[type] = tmp >= 0 ? tmp : 0;
    SellMessage(type, count);
}
