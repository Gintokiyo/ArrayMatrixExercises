#include "Exercises.h"

#include <iostream>
#include <cmath>

void VecOne() {
    int nr, k, s, n;
    int arrN[50] = {};

    std::cout << "Insert a number: "; std::cin >> nr;
    n = nr;

    k = 0;
    while (n != 0) {
        s = n % 10;
        n /= 10;
        arrN[k] = s;
        k++;
    }

    std::cout << "\nFor your number " << nr << " the array is:\n arrN = { ";
    for (int i = k - 1; i >= 0; --i) {
        std::cout << arrN[i];
        if (i == 0) {
            std::cout << " }";
            continue;
        }
        std::cout << ", ";
    }
    std::cout << '\n';
}

void VecTwo() {
    int arrN[50] = {};
    int arrM[50] = {};
    int arrNM[50] = {};
    int n, m, k, s;

    std::cout << "Pick how many elements the array has n = "; std::cin >> n;
    std::cout << "array m = "; std::cin >> m;

    k = n;
    if (0 < n < 50 && 0 < m < 50) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN[" << i << "] = "; std::cin >> arrN[i];
            arrNM[i] = arrN[i];
        }
        for (int i = 0; i < m; ++i) {
            std::cout << "arrM[" << i << "] = "; std::cin >> arrM[i];
        }
    }
    else std::cout << "Pick other numbers.\n";

    for (int i = 0; i < m; ++i) {
        s = 0;
        for (int j = 0; j < n; ++j) {
            if (arrN[j] == arrM[i]) s++;
        }
        if (s == 0) {
            arrNM[k] = arrM[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++) {
        std::cout << arrNM[i] << " ";
    }
    std::cout << '\n';
}

void VecThree() {
    int n, m, k;
    int arrInters[50] = {};
    int arrN[50] = {};
    int arrM[50] = {};

    std::cout << "Insert numbers for the array: array n = "; std::cin >> n;
    std::cout << "array m = "; std::cin >> m;

    if (0 < n < 50 && 0 < m < 50) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN[" << i << "] = "; std::cin >> arrN[i];
        }
        for (int i = 0; i < m; ++i) {
            std::cout << "arrM[" << i << "] = "; std::cin >> arrM[i];
        }
    }
    else std::cout << "Pick other numbers.";

    k = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arrN[i] == arrM[j]) {
                arrInters[k] = arrN[i];
                k++;
            }
        }
    }

    std::cout << "\nThe array with the intersection is arrInters = { ";
    for (int i = 0; i < k; ++i) {
        std::cout << arrInters[i];
        if (i == k - 1) {
            std::cout << " }";
            continue;
        }
        std::cout << ", ";
    }
    std::cout << '\n';
}

void VecFour() {
    int arrN[50] = {};
    int arrM[50] = {};
    int arrNM[50] = {};
    int n, m, k, s;

    std::cout << "Insert numbers for the array: array n = "; std::cin >> n;
    std::cout << "array m = "; std::cin >> m;

    if (0 < n < 50 && 0 < m < 50) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN[" << i << "] = "; std::cin >> arrN[i];
        }
        for (int i = 0; i < m; ++i) {
            std::cout << "arrM[" << i << "] = "; std::cin >> arrM[i];
        }
    }
    else std::cout << "Pick other numbers.\n";

    k = 0;
    for (int i = 0; i < n; ++i) {
        s = 0;
        for (int j = 0; j < m; ++j) {
            if (arrN[i] == arrM[j]) s++;
        }
        if (s == 0) {
            arrNM[k] = arrN[i];
            k++;
        }
    }

    std::cout << "\nDifference of n with m is: \n";
    for (int i = 0; i < k; i++) {
        std::cout << arrNM[i] << " ";
    }
    std::cout << '\n';
}

void VecFive() {
    int arrN[50] = {};
    int n;

    std::cout << "Pick how big the array is n = "; std::cin >> n;

    if (0 < n < 50) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN[" << i << "] = "; std::cin >> arrN[i];
        }
    }
    else std::cout << "Pick other numbers.\n";

    std::cout << "\nResult: \n";
    for (int i = 0; i < n; ++i) {
        if (arrN[i] % 2 == 0) std::cout << arrN[i] << " ";
    }
    std::cout << '\n';
    for (int i = 0; i < n; ++i) {
        if (arrN[i] % 2 != 0) std::cout << arrN[i] << " ";
    }
    std::cout << '\n';
}

void VecSix() {
    int arrN[50] = {};
    int n, d;

    std::cout << "Pick how big the array is n = "; std::cin >> n;

    if (0 < n < 50) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN[" << i << "] = "; std::cin >> arrN[i];
        }
    }
    else std::cout << "Pick other numbers.\n";
    std::cout << "Pick the number to be divided with: "; std::cin >> d;

    std::cout << "\nResult: \n";
    for (int i = 0; i < n; ++i) {
        if (arrN[i] % d == 0) std::cout << arrN[i] << " ";
    }
    std::cout << '\n';
}

void VecSeven() {
    double arrN[50] = {};
    int n, k, c;
    double avrPoz, avrNeg;

    std::cout << "Pick a size for the array n = "; std::cin >> n;

    avrPoz = 0;
    avrNeg = 0;
    k = 0;
    c = 0;
    if (0 < n < 50) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN[" << i << "] = "; std::cin >> arrN[i];
            if (arrN[i] < 0) {
                avrNeg += arrN[i];
                k++;
            }
            else {
                avrPoz += arrN[i];
                c++;
            }
        }
    }
    else std::cout << "Pick other numbers.\n";

    if (c != 0) std::cout << "\nPositive temperature average is: " << double(avrPoz / c);
    else std::cout << "\nNo positive temperature was inserted.";

    if (k != 0) std::cout << "\nNegative temperature average is: " << double(avrNeg / k);
    else std::cout << "\nNo negative temperature was inserted.";
    std::cout << '\n';

}

void VecEight() {
    int arrN[50] = {};
    int arrA[50] = {};
    int n, a, k;

    std::cout << "Pick how big the array will be n = "; std::cin >> n;

    if (0 < n < 50) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN[" << i << "] = "; std::cin >> arrN[i];
        }
    }
    else std::cout << "Pick other numbers.\n";
    std::cout << "Pick a number for A: "; std::cin >> a;

    k = 0;
    for (int i = 0; i < n; ++i) {
        if (arrN[i] > a) {
            arrA[k] = arrN[i];
            k++;
        }
    }

    std::cout << "\nThe numbers bigger than A are: " << k << '\n';

    for (int i = 0; i < k; ++i) {
        std::cout << arrA[i] << " ";
    }
    std::cout << '\n';
}

void VecNine() {
    int arrN[100] = {};
    int arrA[100] = {};
    int n, k, a, sum;

    std::cout << "Pick how many numbers the array contains n = "; std::cin >> n;

    if (0 < n < 100) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN[" << i << "] = "; std::cin >> arrN[i];
        }
    }
    else std::cout << "Pick other numbers.\n";
    std::cout << "Pick a number for a: "; std::cin >> a;

    sum = 0;
    k = 0;
    for (int i = 0; i < n; ++i) {
        if (arrN[i] % a == 0) {
            sum += arrN[i];
            arrA[k] = arrN[i];
            k++;
        }
    }

    std::cout << "The sum for the numbers divisible with a is: " << sum << '\n';
    for (int i = 0; i < k; ++i) {
        std::cout << arrA[i] << " ";
    }
    std::cout << '\n';
}

void VecTen() {
    int arrN[100] = {};
    int arrX[100] = {};
    int n, k, j;

    std::cout << "How big the array is n = "; std::cin >> n;

    if (0 < n < 100) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN[" << i << "] = "; std::cin >> arrN[i];
        }
    }
    else std::cout << "Pick other numbers.\n";

    k = 0;
    std::cout << "\na. x = { ";
    for (int i = 0; i < n; ++i) {
        if (i + 1 == n) {
            arrX[n - 1] = arrN[0];
            std::cout << arrX[k] << " ";
            continue;
        }
        arrX[k] = arrN[i + 1];
        std::cout << arrX[k] << " ";
        k++;
    }
    std::cout << "}\n";

    k = 0;
    std::cout << "\nb. x = { ";
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            arrX[k] = arrN[n - 1];
            k++;
        }
        arrX[k] = arrN[i];
        std::cout << arrX[k - 1] << " ";
        k++;
    }
    std::cout << "}\n";

    k = 0;
    j = 1;
    std::cout << "\nc. x = { ";
    if (n % 2 == 0) {
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                arrX[i] = arrN[j];
                j += 2;
            }
            else {
                arrX[i] = arrN[k];
                k += 2;
            }
            std::cout << arrX[i] << " ";
        }
    }
    else {
        for (int i = 0; i < n - 1; ++i) {
            if (i % 2 == 0) {
                arrX[i] = arrN[j];
                j += 2;
            }
            else {
                arrX[i] = arrN[k];
                k += 2;
            }
            std::cout << arrX[i] << " ";
            if (i == n - 2) {
                arrX[i + 1] = arrN[n - 1];
                std::cout << arrX[i + 1] << " ";
            }
        }
    }
    std::cout << "}\n";
}

void VecEleven() {
    int arrN1[100] = {};
    int arrN2[100] = {};
    int arrE1[100] = {};
    int arrE2[100] = {};
    int n;
    double e1, e2;

    std::cout << "Pick how big the array is n = "; std::cin >> n;

    if (0 < n < 100) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN1[" << i << "] = "; std::cin >> arrN1[i];
        }
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN2[" << i << "] = "; std::cin >> arrN2[i];
        }
    }
    else std::cout << "Pick other numbers.\n";

    for (int i = 0; i < n; ++i) {
        arrE1[i] = arrN1[i] + arrN2[i];
        arrE2[i] = arrN1[i] * arrN2[i];
    }

    e1 = 1;
    std::cout << "\nResult:\na. e = ";
    for (int i = 0; i < n; ++i) {
        e1 *= arrE1[i];
        std::cout << arrE1[i];
        if (i == n - 1) continue;
        std::cout << " * ";
    }
    std::cout << " = " << e1;

    e2 = 0;
    std::cout << "\nb. e = ";
    for (int i = 0; i < n; ++i) {
        e2 += arrE2[i];
        std::cout << arrE2[i];
        if (i == n - 1) continue;
        std::cout << " + ";
    }
    std::cout << " = " << e2 << '\n';
}

void VecTwelve() {
    double arrN[100] = {};
    double arrG[100] = {};
    int n, k;

    std::cout << "How big the array is n = "; std::cin >> n;

    if (0 < n < 100) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN1[" << i << "] = "; std::cin >> arrN[i];
        }
    }
    else std::cout << "Pick other numbers.\n";

    k = 0;
    for (int i = 1; i <= n; ++i) {
        arrG[k] = arrN[i - 1];
        arrG[k + 1] = sqrt(arrN[i - 1] * arrN[i]);
        k += 2;
    }

    std::cout << "\nOriginal array:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << arrN[i] << " ";
    }

    std::cout << "\nModified array:\n";
    for (int i = 0; i < k - 1; ++i) {
        std::cout << arrG[i] << " ";
    }
    std::cout << '\n';
}

void VecThirteen() {
    int arrN[100] = {};
    int arrI[100] = {};
    int n, k, j, aux;

    std::cout << "How big the array is n = "; std::cin >> n;

    if (0 < n < 100) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN1[" << i << "] = "; std::cin >> arrN[i];
        }
    }
    else std::cout << "Pick other numbers.\n";

    j = n - 1;
    std::cout << "\nInversed array using another array:\n";
    for (int i = 0; i < n; ++i) {
        arrI[i] = arrN[j];
        std::cout << arrI[i] << " ";
        j--;
    }


    k = 0;
    j = n - 1;
    while (k < j) {
        aux = arrN[k];
        arrN[k] = arrN[j];
        arrN[j] = aux;
        k++;
        j--;
    }

    std::cout << "\nInversed array without using an additional array:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << arrN[i] << " ";
    }
    std::cout << '\n';
}

void VecFourTeen() {
    double arrN[100] = {};
    double arrM[100] = {};
    int n, k;

    std::cout << "How big the array is n = "; std::cin >> n;

    if (0 < n < 100) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN1[" << i << "] = "; std::cin >> arrN[i];
        }
    }
    else std::cout << "Pick other numbers.\n";

    k = 0;
    for (int i = 0; i < n; ++i) {
        if (arrN[i] >= 0) {
            arrM[k] = arrN[i];
            k++;
        }
    }

    std::cout << "\nArray with positive numbers is: \n";
    for (int i = 0; i < k; ++i) {
        std::cout << arrM[i] << " ";
    }
    std::cout << '\n';
}

void VecFifteen() {
    int vec[100] = {};
    int patP[100] = {};
    int n, j;

    std::cout << "How big the array is: "; std::cin >> n;

    j = 0;
    if (0 < n < 100) {
        for (int i = 0; i < n; ++i) {
            std::cout << "vec[" << i << "] = "; std::cin >> vec[i];

            if ((int)sqrt(vec[i]) == sqrt(vec[i])) {
                patP[j] = vec[i];
                j++;
            }
        }
    }
    else std::cout << "Pick another number.";

    std::cout << "\nThe numbers which are perfect squares are: ";
    for (int i = 0; i < j; ++i) {
        std::cout << patP[i] << " ";
    }
    std::cout << '\n';
}

void VecSixteen() {
    int arrN[100] = {};
    int n, k;

    std::cout << "How big the array is n = "; std::cin >> n;

    if (0 < n < 100) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN1[" << i << "] = "; std::cin >> arrN[i];
        }
    }
    else std::cout << "Pick other numbers.\n";

    k = 0;
    for (int i = 1; i < n; ++i) {
        if (arrN[i - 1] <= arrN[i]) k++;
    }

    if (k == n - 1) {
        std::cout << "\nEvery number is in an increasing order from left to right.";
    }
    else std::cout << "The numbers aren't in an increasing order.";
    std::cout << '\n';
}

void VecSeventeen() {
    int arrN[100] = {};
    int n, temp, b, a, r;

    std::cout << "How big the array is n = "; std::cin >> n;

    if (0 < n < 100) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN1[" << i << "] = "; std::cin >> arrN[i];
        }
    }
    else std::cout << "Pick other numbers.\n";

    r = arrN[0];
    for (int i = 1; i < n; ++i) {
        b = arrN[i];
        a = r;
        while (b > 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        r = a;
    }
    std::cout << "The common divisor of the array is: " << r << '\n';
}

void VecEighteen() {
    double arrN[100] = {};
    double arrG[100] = {};
    int n, k;

    std::cout << "How big the array is n = "; std::cin >> n;

    if (0 < n < 100) {
        for (int i = 0; i < n; ++i) {
            std::cout << "arrN1[" << i << "] = "; std::cin >> arrN[i];
        }
    }
    else std::cout << "Pick other numbers.\n";

    k = 0;
    for (int i = 1; i <= n; ++i) {
        arrG[k] = arrN[i - 1];
        arrG[k + 1] = (arrN[i - 1] + arrN[i]) / 2;
        k += 2;
    }

    std::cout << "\nOriginal array:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << arrN[i] << " ";
    }

    std::cout << "\nModified array:\n";
    for (int i = 0; i < k - 1; ++i) {
        std::cout << arrG[i] << " ";
    }
    std::cout << '\n';
}