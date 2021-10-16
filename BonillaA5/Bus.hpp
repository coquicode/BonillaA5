//
//  Bus.hpp
//  BonillaA5
//
//  Created by Roem on 10/16/21.
//  Copyright © 2021 Roem. All rights reserved.
//
#include "MaintHist.hpp"
#ifndef Bus_hpp
#define Bus_hpp

#include <iostream>
using namespace std;

class Bus
{
private:
    int busID;
    char type;
    int capacity;
    int mileage;
    char status;
    
public:
    Bus();
    ~Bus();
    
    MaintHist bhistory[25];
    
    //setters
    void setStatus(char); //will be used for something else
    
    //getteers
    int getbusID() const;
    char getType() const;
    int getCapacity() const;
    int getMileage() const;
    char getStatus() const;
    int search(int, char[], Bus *[]) const;
    int displayBus(int, Bus *[]) const;
    void disOne(Bus *[]) const;
    

};

#endif /* Bus_hpp */
