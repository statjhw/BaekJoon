#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void exchange(int c);

int main() {
    int n;
    int ex;
    cin >> n;
    for (int i=0; i < n; i++)
    {
        cin >> ex;
        exchange(ex);
        cout << endl;
    }
}

void exchange(int c) {
    int arr[4] = {25, 10, 5, 1};
    for (int i=0;i<4;i++)
    {
        int d = 0;
        while (c >= arr[i])
        {
            d++;
            c -= arr[i];
        }
        cout << d << " ";
    }
}