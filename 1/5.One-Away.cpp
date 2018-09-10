#include <string>

bool oneAway(string str1, string str2) {
    int len1 = str1.length();
    int len2 = str2.length();
    if (abs(len1 - len2) > 1) {
        return false;
    }

    bool flag = false;
    for (int i = 0, j = 0; i < len1 && j < len2;) {
        if (str1[i] == str2[j]) {
            i++;
            j++;
            continue;
        }

        if (flag) {
            return false;
        }

        if (len1 == len2) {
            i++;
            j++;
        } else if (len1 > len2) {
            i++;
        } else {
            j++;
        }
        flag = true;
    }

    return true;
}

