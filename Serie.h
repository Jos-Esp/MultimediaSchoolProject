#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED
#include "Multimedia.h"

class Serie: public Multimedia
{
    private:
        //in
    public:
        Serie();
        Serie(string, string, int);
        ~Serie();

        void printData();
        //in
};

#endif // SERIE_H_INCLUDED
