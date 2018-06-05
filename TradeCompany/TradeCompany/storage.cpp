#include "storage.h"
#include "company.h"
#include "iostream"

void Storage::SellMessage(int type, int count)
{
    QString res = "Storage-" + QString::number(GetType())
            + " sell " + QString::number(count)
            + " of " + Company::goods[type] + "\n";
    std::cout << res.toStdString().data();
}

Storage::Storage(int type)
{
    SetType(type);
    SetCount(10000);
    _truck = new StorageTruck(type);
}

Storage::~Storage()
{
    delete _truck;
}

void Storage::SetType(int type)
{
    _type = type;
}
int Storage::GetType()
{
    return _type;
}

void Storage::SetCount(int count)
{
    _count = count;
}
int Storage::GetCount()
{
    return _count;
}

void Storage::Sell(int type, int count)
{
    int tmp = GetCount() - count;
    SetCount(tmp ? tmp : 0);
    SellMessage(type, count);
}

void Storage::SendTruck(Store* stores[])
{
    _truck->GetStores(stores);
    _truck->Fill();
}
