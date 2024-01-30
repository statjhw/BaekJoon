#include <iostream>
using namespace std;

int is_prime(int);
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        if (is_prime(a)) count++;
    }
    cout << count;
}

int is_prime(int n)
{
    bool is = true;
    if (n == 1)
        is = false;

    if (n > 2)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                is = false;
                break;
            }
        }
    }
    return is;
}
















