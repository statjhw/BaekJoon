#include <iostream>
#include <string>
using namespace std;

bool is_conti(string& s);

int main() {
    int n;
    string str;
    int count = 0;

    cin >> n;
    for (int i=0; i<n;i++) {
        cin >> str;
        if (is_conti(str))
            count++;
    }
    cout << count;
}

bool is_conti(string& str) {
    bool is = true;

    for (int i=0; i<str.length(); i++) {
        int idx = str.find(str[i],i+1);
        if (idx == -1)
            continue;
        else {
            if (idx != i+1)
                is = false;
        }
    }
    return is;
}














