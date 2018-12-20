#include "search_obtuse_triangels.h"
#include "check_triangel.h"
#include "points.h"
#include "triangel.h"
#include <iostream>
#include <vector>

using namespace std;

void searcher_ofobtuse_triangels(points* array, const unsigned int SIZE)
{
    points* combs = new points[3];
    vector<triangel> obtuse_triangels;
    for (unsigned int i = 0; i < SIZE; i++)
    {
        combs[0] = array[i];
        combs[1] = array[(i + 1) % SIZE];
        for (unsigned int j = 0; j < SIZE - 3; j++)
        {
            if((j + 1) % SIZE == i) continue;
            combs[2] = array[(j+2) % SIZE];
            triangel testee(combs);

          if(check_obtuse_triangle(testee))
          {
            obtuse_triangels.push_back(testee);
          }

        }
    }
                for (unsigned int i = 0; i < obtuse_triangels.size(); i++)
                    obtuse_triangels[i].GetInfo();

                cout << "Was found " << obtuse_triangels.size() << " triangels!" << endl;
    delete [] combs;

}
