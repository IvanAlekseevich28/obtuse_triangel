#include <iostream>
#include <ctime>
#include "points.h"
#include "search_obtuse_triangels.h"
using namespace std;

int main()
{
//    cout << "Enter number of points: ";
//    unsigned int number;
//    cin >> number;
//    cout << endl;

//    points* array = new points[number];



//    for (unsigned int i = 0; i < number; i++)
//    {
//        array[i].GetInfo();
//    }

//    searcher_ofobtuse_triangels(array, number);

//    delete [] array;

    points array[5] = {{380, 230}, {150, 230}, {50, 30}, {350, 330}, {40, 140}};
    searcher_ofobtuse_triangels(array, 5);

    return 0;
}
