#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string n;
    int b;

    cin >> n >> b;

    int s = 0;
    int tmp = 0;
    for (int i =0; i<n.length(); i++) {
        if (n[i] >= '0' && n[i] <= '9')
            tmp = n[i] -'0';
        else {
            tmp = n[i] - 'A' + 10;
        }
        s += tmp * pow(b, n.length()-i-1);
    }
    cout << s;
}






