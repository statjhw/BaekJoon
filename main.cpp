#include <iostream>
#include <string>
using namespace std;



int main() {
    string str[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    string word;
    int count = 0;

    cin >> word;

    for (int i=0; i<word.length(); i++) {
        bool is_c = false;
        for (int j=0; j < 8; j++) {
            if (word[i] == str[j][0]) {
                if (word.substr(i, str[j].length()) == str[j]) {
                    count++;
                    i += (str[j].length()-1);
                    is_c = true;
                    break;
                }
            }
        }
        if (is_c ==false)
            count++;
    }
    cout << count;
}















