#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x, xp, xk, dx;  // Параметри інтервалу та кроку
    double y;  // Результат обчислення виразу
    double A;  // Проміжний результат - функціонально стала частина виразу
    double B;  // Проміжний результат - функціонально змінна частина виразу

    cout << "xp = "; cin >> xp;  // Початок інтервалу
    cout << "xk = "; cin >> xk;  // Кінець інтервалу
    cout << "dx = "; cin >> dx;  // Крок інтервалу

    cout << fixed << setprecision(2); // Форматування виводу
    cout << "--------------------------------" << endl;
    cout << "|" << setw(10) << "x" << " |" << setw(15) << "y" << " |" << endl;
    cout << "--------------------------------" << endl;

    for (x = xp; x <= xk; x += dx) {
        A = pow(x, 3) + 2;

        if (x < 4) {
            B = 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
        }
        else if (4 <= x && x < 7) {
            B = log10(2 * x + exp(5 * x + 5));
        }
        else {
            B = atan(fabs((x + 3) / 2)) + 7 * x;
        }

        y = A + B;

        cout << "|" << setw(10) << x
            << " |" << setw(15) << y
            << " |" << endl;
    }

    cout << "--------------------------------" << endl;

    return 0;
}
