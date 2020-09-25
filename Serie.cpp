#include <iostream>
#include "Serie.h"

using namespace std;

Serie::Serie()
{
    //cout << "Constructor called on Serie" << endl;
}

Serie::Serie(string cat1, string nam1, int sta1):Multimedia(cat1,nam1,sta1)
{
    //Constructior;
}

Serie::~Serie()
{
    //cout << "Destructor called on Serie" << endl;
}

void Serie::printData()
{
    Multimedia::printData();
}
