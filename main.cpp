#include <iostream>

using namespace std;

int max(int, int);
int max(int, int, int);

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (((n1 < n2 + n3) && (n2 < n1 + n3) && (n3 < n1 + n2))) //삼각형이 됨
    {
        cout << n1 + n2 + n3;
    }
    else
    {
        int m = max(n1, n2, n3);
        cout << (n1 + n2 + n3 - m) + (n1 + n2 + n3 -m - 1);
    }

}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int max(int a, int b, int c)
{
    return max(max(a,b), c);
}









