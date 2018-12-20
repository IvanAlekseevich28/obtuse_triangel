#include "triangel.h"
#include "points.h"
#include <iostream>
using namespace std;

unsigned int triangel::IDcounterT = 0;
triangel::triangel(points* vertices)
{
    for (int i = 0; i < 3; i++)
    {
        this->vertices[i] = vertices[i];
    }
    idT = IDcounterT++;
}


void triangel::GetInfo()
{
   cout << endl;
   cout << "ID: " << this->id << endl;
   cout << "Points info" << endl;
   for (int i = 0; i < 3; i++)
       vertices[i].GetInfo();
   cout << "====================================" << endl << endl;
}
