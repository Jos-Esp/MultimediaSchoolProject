#ifndef MULTIMEDIA_H_INCLUDED
#define MULTIMEDIA_H_INCLUDED
#include <iostream>

using namespace std;

class Multimedia
{
    private:
        string category;
        string name;
        int stars;
        //in
    public:
        Multimedia();
        Multimedia(string,string,int);
        ~Multimedia();

        string getCategory();
        string getName();
        int getStars();

        void setCategory(string);
        void setName(string);
        void setStars(int);

        virtual void printData();
        //in
};

#endif // MULTIMEDIA_H_INCLUDED
