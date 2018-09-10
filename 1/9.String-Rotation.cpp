#include <string>

bool stringRotation(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    string str = str1 + str1;

    return isSubstring(str, str2);
}

