#include <QCoreApplication>
#include "company.h"
#include "QTime"
#include "storagecustomer.h"
#include "storecustomer.h"
#include "iostream"

/*
 * fruit/veg - 0
 * bread - 1
 * cereals - 2
 * appliances - 3
*/
QString Company::goods[4];
const int YEAR = 365;
const int WEEK = 7;
const int MONTH = 30;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Company* cmp = new Company();
    Company::goods[0] = "greens";
    Company::goods[1] = "bread";
    Company::goods[2] = "cereals";
    Company::goods[3] = "appliances";
    qsrand(static_cast<quint64>(QTime::currentTime().msecsSinceStartOfDay()));

    int currentGoods;
    int currentShop;
    int currentCustomer;
    int count = 0;
    Customer* customer[2] = {new StoreCustomer(), new StorageCustomer()};

    int i = 1;
    while(i < YEAR)
    {
        currentGoods = qrand() % 4;
        currentShop = qrand() % 4;
        currentCustomer = qrand() % 2;
        count = (40 + qrand() % 10) * (currentCustomer * 5 + 1);

        customer[currentCustomer]->Buy(cmp, currentShop, currentGoods, count);
        if(!(i % WEEK) && (i % MONTH))
        {
            std::cout<< "\n";
            std::cout << "/*****************************WEEK PASSED***************************/\n";
            std::cout<< "\n";
            cmp->CheckStores();
        }
        if(!(i % MONTH))
        {
            std::cout<< "\n";
            std::cout << "/*****************************MONTH PASSED***************************/\n";
            std::cout<< "\n";
            cmp->RefillStores();
        }

        i++;
    }

    return a.exec();
}
