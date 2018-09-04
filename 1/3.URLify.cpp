#include <string>

void urlify(string str, int len) {
    if (len == 0) {
        return;
    }

    int newLen = len;
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            newLen += 2;
        }
    }

    for (int i = len - 1, int j = newLen - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[j--] = '0'；
            str[j--] = '2';
            str[j--] = '%';
        } else {
            str[j--] = str[i];
        }
    }

    str.resize(newLen);
}

