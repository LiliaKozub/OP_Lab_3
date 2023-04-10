#include "Point.h"

using namespace std;

Point::Point(){
    x = 0;
    y = 0;
    z = 0;
}


Point::Point(int valueX, int valueY, int valueZ) {
    x = valueX;
    y = valueY;
    z = valueZ;
}

Point::~Point(){}

void Point::SetPoint(int valueX, int valueY, int valueZ) {
    x = valueX;
    y = valueY;
    z = valueZ;
}

int Point::GetX() {return x;}
int Point::GetY() {return y;}
int Point::GetZ() {return z;}

//перевіряємо, чи точка належить першому октанту
bool Point::isInFirstOctant() {
    if(((x>0) && (y>0) && (z>0))){
        return true;
    }
    else{
        return false;
    }
}
