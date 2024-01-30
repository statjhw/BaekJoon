#include <iostream>
using namespace std;


int gcd(int f, int s);

int main()
{
    int a, b;
    cin >> a >> b;

    while (a != 0 || b != 0)
    {
        if (gcd(a, b) == a)
            cout << "factor" << endl;
        else if (gcd(a, b) == b)
            cout << "multiple" << endl;
        else
            cout << "neither" << endl;
        cin >> a >> b;
    }

}


int gcd(int f, int s)
{
    if (s == 0)
        return f;
    else
        return gcd(s, f%s);
}



















