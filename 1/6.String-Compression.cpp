#include <string>

string stringCompression(string str) {
    int len = str.length();
    if (len < 3) {
        return str;
    }

    string newStr;
    newStr += str[0]
    int count = 1;
    for (int i = 1; i < len; i++) {
        if (str[i] == str[i-1]) {
            count++;
        } else {
            newStr += to_string(count);
            newStr += str[i];
            count = 1;
        }
    }
    newStr += to_string(count);

    int newLen = newStr.length();

    return newLen > len ? newStr : str;
}

