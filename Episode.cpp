#include "Episode.h"
#include <iostream>

using namespace std;

Episode::Episode()
{
    cout << "Constructor called on Episode" << endl;
    durationE = 120;
    title = "title";
    season = 1;
}

Episode::Episode(string title1, int season1, int durationE1)
{
    title = title1;
    season = season1;
    durationE = durationE1;
}

Episode::~Episode()
{
    cout << "Destructor called on Episode" << endl;
}

string Episode::getTitle()
{
    return title;
}

int Episode::getDurationE()
{
    return durationE;
}

int Episode::getSeason()
{
    return season;
}

void Episode::setTitle(string title1)
{
    title = title1;
}

void Episode::setDurationE(int durationE1)
{
    durationE = durationE1;
}

void Episode::setSeason(int season1)
{
    season = season1;
}
