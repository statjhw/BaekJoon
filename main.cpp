#include <iostream>
#include <string>
using namespace std;

int find(int g, int b) {
    if (g == b)
        return 0;
    else
        return g - b;
}

int main() {
    int good[6] ={1,1,2,2,2,8};
    int c;
    for (int i=0; i < 6; i++) {
        cin >> c;
        cout << find(good[i], c) << " ";
    }

}