#include <vector>
#include <string>

bool palindromePermutation(sting str) {
    int len = str.strength();
    if (len < 2) {
        return true;
    }

    vector<int> count(26, 0);
    for (int i = 0; i < len; i++) {
        int index = getIndex(str[i]);
        if (index == -1) {
            continue;
        }

        count[index]++;
    }

    int odd = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            odd++;
        }
    }

    return odd < 2 ? true : false;
}

int getIndex(char c) {
    int index = -1;

    if (c >= 'a' && c <= 'z') {
        index = c - 'a';
    } else if (c >= 'A' && c <= 'Z') {
        index = c - 'A';
    }

    return index;
}

