#include <vector>

//anticlockwise
void rotateMatrix(vector<vector<int>>& image, int n) {
    if (n < 2) {
        return;
    }

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            swap(image[i][j], image[j][i]);
        }
    }
    for (int r = 0; r < n / 2; r++) {
        for (int c = 0; c < n; c++) {
            swap(image[r][c], image[n-1-r][c]);
        }
    }
}

void rotateMatrix(vector<vector<int>>& image, int n) {
    if (n < 2) {
        return;
    }

    for (int r = 0; r < n / 2; r++) {
        for (int c = r; c < n - 1 - r; c++) {
            char tmp = image[r][c];

            image[r][c] = image[c][n-1-r];
            image[c][n-1-r] = image[n-1-r][n-1-c];
            image[n-1-r][n-1-c] = image[n-1-c][r];
            image[n-1-c][r] = tmp;
        }
    }
}

