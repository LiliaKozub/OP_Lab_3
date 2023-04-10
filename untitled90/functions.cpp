#include "functions.h"
#include <iostream>

using namespace std;

#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int number_of_point(){
    int n;
    string input;
    bool is_valid_input = false;
    do {
        cout << "Enter number of points:";
        cin >> input;
        is_valid_input = true;
        for (char c : input) {
            if (!isdigit(c)) {
                is_valid_input = false;
                break;
            }
        }
        if (is_valid_input) {
            n = stoi(input);
            if (n <= 0) {
                cout << "Invalid input. Please enter a positive integer." << endl;
                is_valid_input = false;
            }
        } else {
            cout << "Invalid input. Please enter an integer." << endl;
        }
    } while (!is_valid_input);
    return n;
}

void input_points(class Point a[], int N){
    int x, y, z;
    cout << "\nEnter coordinate in format \"x y z\"\n";
    for(int i = 0; i < N; i++){
        cout << "Enter point " << i + 1 << ":";
        cin >> x >> y >> z;
        if(cin.fail()){
            cout << "Incorrect format of input data. Try again.\n";
            i--;
            cin.clear();
            fflush(stdin);
            continue;
        }
        a[i] = Point(x, y, z);
    }
    cout << endl;
}

int count_point(class Point a[], int N){
    int counter = 0;
    cout << "Solution:\n";
    for(int i=0; i < N; i++){
        if(a[i].isInFirstOctant()){
            counter++;
            cout << "point " << i + 1 << ": (" << a[i].GetX() << "; " << a[i].GetY() << "; " << a[i].GetZ() << ")\n";
        }
    }
    return counter;
}