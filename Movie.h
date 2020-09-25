#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
#include "Multimedia.h"
#include <iostream>

using namespace std;

class Movie:public Multimedia
{
    private:
        int duration;
        //in
    public:
        Movie();
        Movie(string, string, int, int);
        ~Movie();

        string getId();
        int getDuration();

        void setId(string);
        void setDuration(int);

        void printData();
        //in
};

#endif // MOVIE_H_INCLUDED
