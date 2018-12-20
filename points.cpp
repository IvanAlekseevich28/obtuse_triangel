#include "points.h"
#include <iostream>
#include <string>

using namespace  std;

unsigned int points::IDcounter = 0;

points::points()
{
    this->x = rand() % 10000;
    this->y = rand() % 10000;
    this->id = IDcounter++;
}


points::points(int x, int y)
{
    this->x = x;
    this->y = y;
    this->id = IDcounter++;
}



void points::GetInfo()
{
    cout << endl;
    cout << "ID: " << this->id << endl;
    cout << "(" << this->x << " , " << this->y << ")" << endl;
}
