#include "Exercises.h"

#include <iostream>
#include <Windows.h>


void MatOne() {
    int mat[30][30] = {};
    int r, c, sum{};

    std::cout << "Numbers for: rows = "; std::cin >> r;
    std::cout << "columns = "; std::cin >> c;

    if (0 < r < 30 && 0 < c < 30) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }

    std::cout << '\n';
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << '\n';
    }

    std::cout << '\n';
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1) {
                sum += mat[i][j];
                std::cout << mat[i][j];
                if (i == r - 1 && j == c - 1) continue;
                std::cout << " + ";
            }
        }
    }

    std::cout << " = " << sum << '\n';
}

void MatTwo() {
    int mat[30][30] = {};
    int r, c, minR;

    std::cout << "Pick numbers for: rows = "; std::cin >> r;
    std::cout << "columns = "; std::cin >> c;

    if (0 < r < 30 && 0 < c < 30) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }

    for (int i = 0; i < r; ++i) {
        minR = mat[i][0];
        for (int j = 0; j < c; ++j) {
            if (minR > mat[i][j]) minR = mat[i][j];
        }
        std::cout << "\nThe minimum element on row " << i + 1 << " is: " << minR;
    }

    std::cout << '\n';

    for (int i = 0; i < c; ++i) {
        minR = mat[0][i];
        for (int j = 0; j < r; ++j) {
            if (minR < mat[j][i]) minR = mat[j][i];
        }
        std::cout << "\nThe maximum element on column " << i + 1 << " is: " << minR;
    }
    std::cout << '\n';
}

void MatThree() {
    int mat[30][30] = {};
    int r, e{};

    std::cout << "Pick a number between 1 and 5, including those 2: "; std::cin >> r;
    r *= r;
    e = 2;

    if (0 < r < 30) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < r; ++j) {
                mat[i][j] = e;
                e += 2;
            }
        }
    }
    else std::cout << "Pick another number.\n";

    std::cout << "\nThe squared matrix beginning from 2 is:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < r; ++j) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void MatFour() {
    double mat[30][30] = {};
    double aux{};
    int r, c, k;

    std::cout << "Pick numbers for: rows = "; std::cin >> r;
    std::cout << "columns = "; std::cin >> c;
    k = r - 1;

    if (0 < r < 30 && 0 < c < 30) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }

    std::cout << "\nFirs and last row changed:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (i == 0) {
                aux = mat[0][j];
                mat[0][j] = mat[k][j];
                mat[k][j] = aux;
            }
            std::cout << mat[i][j] << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void MatFive() {
    double mat[30][30] = {};
    double aux{};
    int r, c, k;

    std::cout << "Pick numbers for: rows = "; std::cin >> r;
    std::cout << "columns = "; std::cin >> c;
    k = c - 1;

    if (0 < r < 30 && 0 < c < 30) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }

    std::cout << '\n';
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << mat[i][j] << " ";

        }
        aux = mat[i][0];
        mat[i][0] = mat[i][k];
        mat[i][k] = aux;
        std::cout << '\n';
    }


    std::cout << "\nFirst and last column changed: \n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << mat[i][j] << " ";

        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void MatSix() {
    double mat[30][30] = {};
    double vec[30] = {};
    double minMax{};
    int r, c;

    std::cout << "Pick numbers for: rows = "; std::cin >> r;
    std::cout << "column = "; std::cin >> c;

    if (0 < r <= 30 && 0 < c <= 30) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }

    for (int i = 0; i < r; ++i) {
        minMax = mat[i][0];
        for (int j = 0; j < c; ++j) {
            if (minMax < mat[i][j]) minMax = mat[i][j];
        }
        vec[i] = minMax;
        std::cout << "[" << vec[i] << "] ";
    }
    minMax = vec[0];

    for (int i = 0; i < r; ++i) {
        if (minMax > vec[i]) minMax = vec[i];
    }

    std::cout << "\nMinimum of the maximum values is: " << minMax << '\n';
}

void MatSeven() {
    double mat[30][30] = {};
    double vec[30] = {};
    double minMax{};
    int r, c;

    std::cout << "Pick numbers for: rows = "; std::cin >> r;
    std::cout << "columns = "; std::cin >> c;

    if (0 < r <= 30 && 0 < c <= 30) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }

    for (int i = 0; i < c; ++i) {
        minMax = mat[0][i];
        for (int j = 0; j < r; ++j) {
            if (minMax > mat[j][i]) minMax = mat[j][i];
        }
        vec[i] = minMax;
        std::cout << "[" << vec[i] << "] ";
    }
    minMax = vec[0];

    for (int i = 0; i < c; ++i) {
        if (minMax < vec[i]) minMax = vec[i];
    }

    std::cout << "\nMaximum from the minimum values is: " << minMax << '\n';
}

void MatEight() {
    int mat[50][50] = {};
    int r, c, k;

    std::cout << "Pick numbers for: rows = "; std::cin >> r;
    std::cout << "columns = "; std::cin >> c;

    if (r > 0 && r <= 50 && c > 0 && c <= 50) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }
    std::cout << "Pick a value with which we will increase each element: "; std::cin >> k;

    std::cout << "If we add " << k << " to every element we get:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << mat[i][j] + k << " ";
        }
        std::cout << '\n';
    }

    std::cout << "If we multiply " << k << " with every element we get:\n";
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << mat[i][j] * k << " ";
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}

void MatNine() {
    int mat[30][30] = {};
    int r, max;

    std::cout << "Pick a number for rows and columns in a bidimensional matrix: "; std::cin >> r;

    if (r > 0 && r < 30) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < r; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }

    max = mat[0][0];

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < r; ++j) {
            if (mat[i][j] > max) max = mat[i][j];
        }
    }

    std::cout << "\nMaximum value is " << max << " and is found in the following places: ";

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < r; ++j) {
            if (mat[i][j] == max) std::cout << "[" << i << "][" << j << "] ";
        }
    }

    std::cout << '\n';
}

void MatTen() {
    int mat[30][30] = {};
    int r, c, k{}, sum{};

    std::cout << "Pick numbers for: rows = "; std::cin >> r;
    std::cout << "colums = "; std::cin >> c;

    if (r > 0 && r < 30 && c > 0 && c < 30) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << '\n';
    }

    std::cout << "Pick which columns to show the result for: "; std::cin >> k;
    if (0 <= k - 1 < c) {
        for (int i = 0; i < r; ++i) {
            sum += mat[i][k - 1];
        }
        std::cout << "\nSum of the column " << k << " equals to: " << sum;
    }
    else std::cout << "Doesn't exist.";
    std::cout << '\n';
}

void MatEleven() {
    int mat[30][30] = {};
    int r, c, min;

    std::cout << "Pick numbers for: rows = "; std::cin >> r;
    std::cout << "columns = "; std::cin >> c;

    if (r > 0 && r < 30 && c > 0 && c < 30) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }

    min = mat[0][0];

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (mat[i][j] < min) min = mat[i][j];
        }
    }

    std::cout << "\nMinimum value is " << min << " and we find it in: ";

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (mat[i][j] == min) std::cout << "[" << i << "][" << j << "] ";
        }
    }
    std::cout << '\n';
}

void MatTwelve() {
    double mat[30][30] = {};
    double min;
    int r, c, count{};

    std::cout << "Pick numbers for: rows = "; std::cin >> r;
    std::cout << "columns = "; std::cin >> c;

    if (r > 0 && r < 30 && c > 0 && c < 30) {
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }

    min = mat[0][0];

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << mat[i][j] << " ";
            if (mat[i][j] <= min) {
                if (mat[i][j] < min) {
                    count = 0;
                    min = mat[i][j];
                    count++;
                }
                else count++;
            }
        }
        std::cout << '\n';
    }

    std::cout << "\nMinimum value is " << min << " and it was posted " << count << " times.\n";
}

void MatThirteen() {
    int mat[50][50];
    int k{}, n, m, color, c;

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    std::cout << "Pick numbers for: rows = "; std::cin >> n;
    std::cout << "columns = "; std::cin >> m;

    if (n > 0 && n < 50 && m > 0 && m < 50) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                std::cout << "mat[" << i << "][" << j << "] = "; std::cin >> mat[i][j];
            }
        }
    }
    else {
        std::cout << "Pick other numbers.";
    }

    for (int i = 0; i < n; ++i) {
        k = m;
        c = 0;
        for (int j = 0; j < m; ++j) {
            k--;
            if (mat[i][j] == mat[i][k]) {
                c++;

                //Check for white and black colors, 0 and 7.
                color = (mat[i][j] % 13 == 0 || mat[i][j] % 13 == 7) ? mat[i][j] % 13 + 1 : mat[i][j] % 13;

                //Print in colors then revert back to normal
                SetConsoleTextAttribute(hConsole, color);
                std::cout << mat[i][j] << " ";
                SetConsoleTextAttribute(hConsole, 7);
            }
            else {
                std::cout << mat[i][j] << " ";
            }
        }
        if (c == m) std::cout << "    Line " << i + 1 << " is symmetric.";
        std::cout << '\n';
    }
    std::cout << '\n';
}