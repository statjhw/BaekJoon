#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[9][9];

    for (int i = 0; i < 9; i++) {
        for (int j =0; j < 9; j++) {
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0];
    int max_ir = 0;
    int max_ic = 0;

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (max <= arr[i][j]) {
                max = arr[i][j];
                max_ir = i + 1;
                max_ic = j + 1;
            }
        }
    }
    cout << max << endl;
    cout << max_ir << " " << max_ic;
}












