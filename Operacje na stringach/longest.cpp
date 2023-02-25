#include <iostream>

using namespace std;

string longest(string x) {
    if(x.size() == 0) {
        return "";
    }

    string l = "";
    int len = 0;
    for (int i = 0; i < x.size(); i++) {
        if(x[i] != ' ') {
            len++;
        }
        else {
            if(len >= l.size()){
               l = x.substr(i - len, len);
            }
            len = 0;
        }
    }
    if(len >= l.size()) l = x.substr(x.size() - len, len);
    return l;
}

int main() {
    string a;
    cout << "Podaj napis: ";
    getline(cin, a);
    cout << longest(a) << "*";
    return 0;
}
