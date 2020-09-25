#include <iostream>
#include "Multimedia.h"

using namespace std;

Multimedia::Multimedia()
{
    //cout << "Constructor called on Multimedia" << endl;
    category = "none";
    stars = 5;
    name = "name";
}

Multimedia::Multimedia(string category1, string name1, int stars1)
{
    category = category1;
    name = name1;
    stars = stars1;
}

Multimedia::~Multimedia()
{
    //cout << "Destructor called on Multimedia" << endl;
}

string Multimedia::getCategory()
{
    return category;
}

string Multimedia::getName()
{
    return name;
}

int Multimedia::getStars()
{
    return stars;
}

void Multimedia::setCategory(string category1)
{
    category = category1;
}

void Multimedia::setName(string name1)
{
    name = name1;
}

void Multimedia::setStars(int stars1)
{
    stars = stars1;
}

void Multimedia::printData()
{
    cout << "Name: " << name << endl
         << "Category: " << category << endl
         << "Stars: " << stars << endl;
}
