#include <iostream>

using namespace std;
int main() {
    int d1;
    int d2;
    cout << "Enter first diagonal: ";
    cin >> d1;
    cout << "Enter second diagonal: ";
    cin >> d2;
    double area = (d1*d2)/2.0;
    cout << area << endl;
}