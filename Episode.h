#ifndef EPISODE_H_INCLUDED
#define EPISODE_H_INCLUDED
#include <iostream>

using namespace std;

class Episode
{
    private:
        string title;
        int season;
        int durationE;
        //in
    public:
        Episode();
        Episode(string,int,int);
        ~Episode();

        string getTitle();
        int getSeason();
        int getDurationE();

        void setTitle(string);
        void setSeason(int);
        void setDurationE(int);
        //in
};

#endif // EPISODE_H_INCLUDED
