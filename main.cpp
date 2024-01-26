#include <iostream>
#include <string>
using namespace std;

int main() {
    int rown, coln;
    cin >> rown >> coln;

    int** m1 = new int*[rown];
    for (int i = 0; i < rown; i++) {
        m1[i] = new int[coln];
    }
    int** m2 = new int*[rown];
    for (int i = 0; i < rown; i++) {
        m2[i] = new int[coln];
    }

    for (int i = 0; i < rown; i++) {
        for(int j = 0; j < coln; j++) {
            cin >> m1[i][j];
        }
    }
    for (int i = 0; i < rown; i++) {
        for(int j = 0; j < coln; j++) {
            cin >> m2[i][j];
        }
    }
    for (int i = 0; i < rown; i++) {
        for(int j = 0; j < coln; j++) {
            cout << m1[i][j] + m2[i][j] << " ";
        }
        cout << endl;
    }

    //2배열 힙 메모리 delete과정
    for (int i=0; i<rown; i++) {
        delete m1[i];
        delete m2[i];
    }
    delete m1;
    delete m2;
}












