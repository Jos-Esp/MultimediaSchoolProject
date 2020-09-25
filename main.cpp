#include <iostream>
#include <fstream>
#include <sstream>
#include "Multimedia.h"
#include "Movie.h"
#include "Serie.h"

using namespace std;

//global variables
ifstream fileA;
string linea;
int col = 0;
string matrix[30][3];
Multimedia *Multiv[12];


void loadObject()
{
    string name, title, category;
    int stars, duration;

    name = matrix[0][0];
    category = matrix[1][0];
    stringstream a(matrix[3][0]);
    a >> stars;
    stringstream b(matrix[2][0]);
    b >> duration;
    Multiv[0] = new Movie(category, name, stars, duration);

    name = matrix[5][0];
    category = matrix[6][0];
    stringstream c(matrix[8][0]);
    c >> stars;
    stringstream d(matrix[7][0]);
    d >> duration;
    Multiv[1] = new Movie(category, name, stars, duration);

    name = matrix[10][0];
    category = matrix[11][0];
    stringstream e(matrix[13][0]);
    e >> stars;
    stringstream f(matrix[12][0]);
    f >> duration;
    Multiv[2] = new Movie(category, name, stars, duration);

    name = matrix[15][0];
    category = matrix[16][0];
    stringstream g(matrix[18][0]);
    g >> stars;
    stringstream h(matrix[17][0]);
    h >> duration;
    Multiv[3] = new Movie(category, name, stars, duration);

    name = matrix[20][0];
    category = matrix[21][0];
    stringstream i(matrix[23][0]);
    i >> stars;
    stringstream j(matrix[22][0]);
    j >> duration;
    Multiv[4] = new Movie(category, name, stars, duration);

    name = matrix[25][0];
    category = matrix[26][0];
    stringstream k(matrix[28][0]);
    k >> stars;
    stringstream l(matrix[27][0]);
    l >> duration;
    Multiv[5] = new Movie(category, name, stars, duration);

    name = matrix[0][1];
    category = matrix[1][1];
    stringstream m(matrix[3][1]);
    m >> stars;
    Multiv[6] = new Serie(category, name, stars);

    name = matrix[5][1];
    category = matrix[6][1];
    stringstream n(matrix[8][1]);
    n >> stars;
    Multiv[7] = new Serie(category, name, stars);

    name = matrix[10][1];
    category = matrix[11][1];
    stringstream o(matrix[13][1]);
    o >> stars;
    Multiv[8] = new Serie(category, name, stars);

    name = matrix[15][1];
    category = matrix[16][1];
    stringstream p(matrix[18][1]);
    p >> stars;
    Multiv[9] = new Serie(category, name, stars);

    name = matrix[20][1];
    category = matrix[21][1];
    stringstream q(matrix[23][1]);
    q >> stars;
    Multiv[10] = new Serie(category, name, stars);

    name = matrix[25][1];
    category = matrix[26][1];
    stringstream r(matrix[28][1]);
    r >> stars;
    Multiv[11] = new Serie(category, name, stars);
}

void loadFile()
{
    fileA.open("Multi.txt");
    if (fileA.fail())
    {
        cout << "Error_2(loadFile): El file no se pudo abrir" << endl;
    }
    while (true)
    {
        if (fileA.eof()) break;
        for (int i = 0; i<= 30; i++)
        {
            getline(fileA, linea);
            matrix[i][col] = linea;
        }
        col ++;
        if (col >= 4) break;
    }
    //call function to create objects
    loadObject();

    fileA.close();
}

void seekMultimedia(int ans)
{
    string cat_ans;
    for (int i = 0; i <= 12; i++)
    {
        Multimedia *current = Multiv[i];
        if (ans == 1) cat_ans = "Action";
        else if (ans == 2) cat_ans = "Adventure";
        else if(ans == 3) cat_ans = "Comedy";
        else if(ans == 4) cat_ans = "Drama";
        else if(ans == 5) cat_ans = "Horror";
        else if(ans == 6) cat_ans = "Sci-Fi";
        else cout << "Error_2(seekMultimedia): Please write a number" << endl;

        if (Multiv[i]->getCategory() == cat_ans)
        {
            current->printData();
        }
    }
}

void seekCategory(int begins, int ending, int ans)
{
    for (int i = begins; i <= ending; i++)
    {
        Multimedia *current = Multiv[i];
        if (Multiv[i]->getStars() == ans)
        {
            current->printData();
        }
    }
}

int main()
{
    cout << "  -  -  -  Josephine Esposito - A00827145  -  -  -  \n" << endl;
    cout << "Bienvenid@ al servicio de streaming" << endl;

    int answer_int = 0;

    while(answer_int != 5)
    {
        cout << "Elegir una opcion: " << endl
            << "\t 1. Cargar archivo" << endl
            << "\t 2. Elegir video por categoria" << endl
            << "\t 3. Elegir serie por calificacion" << endl
            << "\t 4. Elegir pelicula por calificacion" <<endl
            << "\t 5. Salir" << endl;
        cin >> answer_int;

        if (answer_int == 1)
        {
            //call function to load file into matrix
            loadFile();
        }
        else if(answer_int == 2)
        {
            //get category from user
            cout << "Elegir categoria: " << endl
                << "\t 1. Action" << endl
                << "\t 2. Adventure" << endl
                << "\t 3. Comedy" << endl
                << "\t 4. Drama" << endl
                << "\t 5. Horror" << endl
                << "\t 6. Sci-Fi" << endl;
            cin >> answer_int;
            //call search function
            seekMultimedia(answer_int);
        }
        else if(answer_int == 3)
        {
            //get stars from user
            cout << "Elegir calificacion: " << endl
                << "\t 1" << endl
                << "\t 2" << endl
                << "\t 3" << endl
                << "\t 4" << endl
                << "\t 5" << endl;
            cin >> answer_int;
            int indexs = 6;
            int indexf = 12;
            //call search function for series
            seekCategory(indexs, indexf, answer_int);
        }
        else if(answer_int == 4)
        {
            //get stars from user
            cout << "Elegir calificacion: " << endl
                << "\t 1" << endl
                << "\t 2" << endl
                << "\t 3" << endl
                << "\t 4" << endl
                << "\t 5" << endl;
            cin >> answer_int;
            int indexs = 0;
            int indexf = 5;
            //call search function for series
            seekCategory(indexs, indexf, answer_int);
        }
        else if(answer_int == 5)
        {
            cout << "Thanks for choosing us!" << endl;
        }
        else
        {
            cout << "Error_1(Menu): Incorrect answer, please choose an option from 1 to 5." << endl;
        }
    }

    return 0;
}
