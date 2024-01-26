#include <iostream>
#include <string>
using namespace std;

int main() {
    int map[100][100] = {0,};
    int n;
    cin >> n;

    int a, b;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        for (int i=0;i<10;i++) {
            for (int j=0; j<10; j++) {
                map[a+j][b] = 1;
            }
            b++;
        }
    }
    int s = 0;
    for (int i=0;i<100;i++) {
        for(int j=0; j<100;j++) {
            s += map[i][j];
        }
    }
    cout << s;

}









