#include <vector>

void zeroMatrix(vector<vector<int>>& matrix, int m, int n) {
    if (m == 0 || n == 0) {
        return;
    }

    bool flag = false;
    for (int c = 0; c < n; c++) {
        if (matrix[0][c] == 0) {
            flag = true;
            break;
        }
    }

    for (int r = 1; r < m; r++) {
        bool zero = false;

        for (int c = 0; c < n; c++) {
            if (matrix[r][c] == 0) {
                zero = true;
                matrix[0][c] = 0;
            }
        }

        if (zero) {
            for (int c = 0; c < n; c++) {
                matrix[r][c] = 0;
            }
        }
    }

    for (int c = 0; c < n; c++) {
        if (matrix[0][c] != 0) {
            continue;
        }
        for (int r = 0; r < m; r++) {
            matrix[r][c] = 0;
        }
    }

    if (flag) {
        for (int c = 0; c < n; c++) {
            matrix[0][c] = 0;
        }
    }
}

