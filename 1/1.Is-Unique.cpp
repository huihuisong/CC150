#include <vector>
#include <string>
#include <algorithm>

bool isUnique(string str) {
    int len = str.length();
    if (len < 2) {
        return true;
    }
    if (len > 128) {
        return false;
    }

    sort(str.begin(), str.end());

    for (int i = 1; i < len; i++) {
        if (str[i] == str[i-1]) {
            return false;
        }
    }

    return true;
}

bool isUnique(const string& str) {
    int len = str.length();
    if (len < 2) {
        return true;
    }
    if (len > 128) {
        return false;
    }

    vector<bool> v(128, false);

    for (int i = 0; i < len; i++) {
        if (v[str[i]]) {
            return false;
        }
        v[str[i]] = true;
    }

    return true;
}

