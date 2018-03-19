#include "storage.h"
#include "company.h"
#include "iostream"

void Storage::SellMessage(int type, int count)
{
    QString res = "Storage-" + static_cast<QString>(GetType())
            + " sell " + static_cast<QString>(count)
            + " of " + Company::goods->at(type);
    std::cout << res.toStdString().data();
}

Storage::Storage(int type)
{
    SetType(type);
    SetCount(10000);
}

Storage::~Storage()
{
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

void Storage::SendTruck()
{
//TODO
}
