#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;
    cout << (50-n%50)%50 << endl;
}