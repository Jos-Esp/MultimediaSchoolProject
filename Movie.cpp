#include <iostream>
#include "Movie.h"

using namespace std;

Movie::Movie()
{
    //cout << "Constructor called on Movie" << endl;
    duration = 100;
}

Movie::Movie(string cat1, string nam1, int sta1, int duration1):Multimedia(cat1, nam1, sta1)
{
    duration = duration1;
}

Movie::~Movie()
{
    //cout << "Destructor called on Movie" << endl;
}

int Movie::getDuration()
{
    return duration;
}

void Movie::setDuration(int duration1)
{
    duration = duration1;
}

void Movie::printData()
{
    Multimedia::printData();
    cout << "Duration: " << duration << endl;
}
