#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
using namespace std;

int main() {
    double x, y, R1, R2;

    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; i++) {

        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        cout << "R1 =  ";  cin >> R1;
        cout << "R2 = "; cin >> R2;

        if ((sqrt(x * x + y * y) < R1 && x < 0) || (sqrt(x * x + y * y) > R1 && sqrt(x * x + y * y) < R2 && x > 0)) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    cout << endl << fixed;

    for (int i = 0; i < 10; i++) {
        x = 2.0 * R1 * rand() / RAND_MAX - R1;  
        y = 2.0 * R2 * rand() / RAND_MAX - R2;


        if ((sqrt(x * x + y * y) < R1 && x < 0) || (sqrt(x * x + y * y) > R1 && sqrt(x * x + y * y) < R2 && x > 0)) {
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " " << "yes" << endl;
        }
        else {
            cout << setw(8) << setprecision(4) << x << " "
                << setw(8) << setprecision(4) << y << " " << "no" << endl;
        }
    }
    return 0;
    
}