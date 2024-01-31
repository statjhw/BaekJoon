#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int arr[3][2] = {{x1,y1},
                      {x2,y2},
                      {x3,y3}};


    int find_x = arr[0][0];
    int find_y = arr[0][1];

    if (find_x == arr[1][0])
    {
        find_x = arr[2][0];
    }
    else if (find_x == arr[2][0])
    {
        find_x = arr[1][0];
    }
    if (find_y == arr[1][1])
    {
        find_y = arr[2][1];
    }
    else if (find_y == arr[2][1]) {
        find_y = arr[1][1];
    }

    cout << find_x << " " << find_y;
}












