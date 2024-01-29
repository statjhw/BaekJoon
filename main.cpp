#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string to10_n(int n, int b);
string reverse(string str);

int main() {
    int n, b;
    cin >> n >> b;
    cout << to10_n(n, b);

}

string to10_n(int n, int b)
{
    string str;
    while (n != 0)
    {
        int tmp = n % b;
        if (tmp > 9)
        {
            str += tmp - 10 + 'A';
        }
        else
        {
            str += '0' + tmp;
        }
        n /= b;
    }

    return reverse(str);
}


string reverse(string str) {
    if (str.length() <= 1)
        return str;
    else {
        return reverse(str.substr(1, str.length())) + str.substr(0, 1);
    }

}