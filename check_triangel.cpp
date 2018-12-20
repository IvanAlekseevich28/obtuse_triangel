#include "check_triangel.h"
#include "triangel.h"
#include "points.h"
#include <math.h>
#include <algorithm>
using std::sort;
bool check_obtuse_triangle(triangel & tr)
{
    double sides[3];
    for (int i = 0; i < 3; i++)
        sides[i] = hypot((tr.vertices[i].GetX() - tr.vertices[(i + 1) % 3].GetX()), (tr.vertices[i].GetY() - tr.vertices[(i + 1) % 3].GetY()));
      //sides[i] = hypot(tr.vertices[i]->GetX() - tr.vertices[(i+1) % 3]->GetX(), tr.vertices[i]->GetY() - tr.vertices[(i+1) % 3]->GetY());

      sort(sides, &sides[2]);
      if (typeOfTriangel(sides[2], sides[1], sides[0]) == 1) return true;
      return false;
}

int typeOfTriangel(double c, double a, double b)
{
    if (c >= a + b) return 2;
    if (pow(c,2) > pow(a,2) + pow(b,2)) return 1;
    if (pow(c,2) < pow(a,2) + pow(b,2)) return -1;
    return false;
}
