#include <string>
#include <vector>
#include <algorithm>

bool checkPermutation(string str1, string str2) {
    int len1 = str1.length();
    int len2 = str2.length();
    if (len1 != len2) {
        return false;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    for (int i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }

    return true;
}

bool checkPermutation(const string& str1, const string& str2) {
    int len1 = str1.length();
    int len2 = str2.length();
    if (len1 != len2) {
        return false;
    }

    vector<int> count(128, 0);
    for (int i = 0; i < len1; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }
    for (int i = 0; i < 128; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

