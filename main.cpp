#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i=1; i<n+1; i++)
    {
        if (n % i == 0) {
            count++;
            if (count == k)
                cout << i;
        }
    }
    if (count < k)
        cout << 0;
}



















