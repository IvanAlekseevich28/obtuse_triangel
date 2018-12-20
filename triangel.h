#ifndef TRIANGEL_H
#define TRIANGEL_H
#include "points.h"

class triangel : public points
{
public:
    friend bool check_obtuse_triangle(triangel & tr);
    triangel(points* vertices);
    void GetInfo();
private:
    static unsigned int IDcounterT;
    points vertices[3];
    unsigned int idT;


};

#endif // TRIANGEL_H
