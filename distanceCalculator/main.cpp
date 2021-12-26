// Abel Anand
#include <iostream>
#include <cmath>
using namespace std;
    
float distanceCalcuator(int x1, int y1, int x2, int y2) {
    float f1 = pow(y2-y1, 2);
    float f2 = pow(x2-x1, 2);
    
    float distance = sqrt(f1+f2);
    
    return distance;
}

struct points {
    float x;
    float y;
};

int main() {
    points points1;
    points points2;
    cout << "Enter the first x value\n";
    cin >> points1.x;
    cout << "Enter the first y value\n";
    cin >> points1.y;
    cout << "Enter the second x value\n";
    cin >> points2.x;
    cout << "Enter the second y value\n";
    cin >> points2.y;
    cout << "Distance = " << distanceCalcuator(points1.x, points1.y, points2.x, points2.y);
}
