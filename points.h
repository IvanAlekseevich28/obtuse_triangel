#ifndef POINTS_H
#define POINTS_H


class points
{
public:
    points();
    points(int x, int y);
    int GetX() {return this->x;}
    int GetY() {return this->y;}
    unsigned int GetID() {return this->id;}
    void GetInfo();
//    static int diapasonMAX_x;
//    static int diapasonMAX_y;
//    static int diapasonMIN_x;
//    static int diapasonMIN_y;
protected:
    static unsigned int IDcounter;
    int x;
    int y;
    unsigned int id;
};

#endif // POINTS_H
