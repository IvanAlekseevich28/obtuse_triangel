#ifndef POINTS_H
#define POINTS_H
#include <string>

using std::string;

class points
{
public:
    points();
    points(int x, int y);
//   static void SetArrayOfPoints(string path, points* pnt);
    int GetX() {return this->x;}
    int GetY() {return this->y;}
    unsigned int GetID() {return this->id;}
    void GetInfo();
//    static int diapasonMAX_x;
//    static int diapasonMAX_y;
//    static int diapasonMIN_x;
//    static int diapasonMIN_y;

protected:
    
    int x;
    int y;
    unsigned int id;
private:
    static unsigned int IDcounter;
};

#endif // POINTS_H
