#include <iostream>
#include <string>

using namespace std;

int Count(const string& str) {
    int k = 0;
    for (char c : str) {
        if (c == '+' || c == '-' || c == '=') {
            k++;
        }
    }
    return k;
}

string Change(const string& str) {
    string newStr;
    for (char c : str) {
        if (c == '+' || c == '-' || c == '=') {
            newStr += "**";
        }
        else {
            newStr += c;
        }
    }
    return newStr;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str) << " symbols: + - =" << endl;

    string modifiedStr = Change(str);
    cout << "Modified string (result): " << modifiedStr << endl;

    return 0;
}
