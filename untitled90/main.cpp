#include <iostream>
#include "functions.h"
using namespace std;

int main() {
    int n;
    int count;
    n = number_of_point(); //кількість точок
    Point* array_points = new Point[n]; //масив, що містить n точок
    input_points(array_points, n); //ведення значень координат точок
    count = count_point(array_points, n); //к-сть точок, які входять до 1-го октанту
    cout << "The number of points of the first octant: " << count << endl;

    delete[] array_points;
    return 0;
}
