#include <iostream> 
#include <iomanip> 
#include <cmath> 

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
         << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        A = 4.95*pow(x,2) ;
        if (x < -3.5)
            B = 4+pow(x,-2);
        else
            if (x >= -3.5 && x < 1)
                B = 1/sin((3.5+x)/5);
            else
                B = sin(3*x)-cos(x);
        y = A + B;
        cout << "|" << setw(7) << setprecision(2) << x
            << "   |" << setw(10) << setprecision(3) << y
            << "     |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;

    return 0;
}
