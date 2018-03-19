#ifndef STORETRUCK_H
#define STORETRUCK_H
#include "truck.h"

class StoreTruck :  public Truck
{
private:

public:
    StoreTruck();
    ~StoreTruck();
    void Fill();
};

#endif // STORETRUCK_H
