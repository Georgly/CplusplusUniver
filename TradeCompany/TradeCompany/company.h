#ifndef COMPANY_H
#define COMPANY_H
#include "storage.h"
#include "store.h"
#include "QString"

class Company
{
public:
    static const int COUNT = 4;
    static const int FILLCOUNT = 50;
    static QString goods[COUNT];
protected:
private:
    Storage* storages[COUNT];
    Store* stores[COUNT];

public:
    Company();
    ~Company();

    void CheckStores();
    void RefillStores();
    Storage* GetStorage(int id);
    Store* GetStore(int id);

private:
};

#endif // COMPANY_H
