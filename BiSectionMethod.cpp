// Implementation of Bisection Method showing all iterations

#include <bits/stdc++.h>
#include <iomanip> // for precision
#include <math.h> // for abs value

using namespace std;

double evaluateFunc(double x){
    return x*x - 4*x - 10;
}

int main() {
    double a=-2, b=-1, c, root, E=0.01, approxError = 0.0, relativeError = 0.0;
    int itr=0, upChange, lowChange;


    if(evaluateFunc(a) * evaluateFunc(b) < 0){
        cout << "Itr.: " << "\t";
        cout << "Root: " << "\t";
        cout << "Ap.E: " << "\t";
        cout << "Re.E: " << "\t";
        cout << "Ch.L: " << "\t";
        cout << "LL  : " << "\t";
        cout << "UL  : " << "\n";
        while(abs(a-b) > E){
            itr++;
            upChange = lowChange = 0;
            approxError = abs(b-a);
            relativeError = abs((b-a)/a);
            c = (a+b)/2; // Bi - Section Method

            if(evaluateFunc(c) == 0){
                break;
            }
            else if(evaluateFunc(a) * evaluateFunc(c) < 0)
            {
                b = c;
                upChange = 1;
            }
            else
            {
                a = c;
                lowChange = 1;
            }

            cout <<  itr << "\t";
            cout <<  c << "\t";
            cout << setprecision(2)<< approxError << "\t";
            cout << setprecision(2)<< relativeError << "\t";
            if(upChange == 1)
                cout << "U:" <<  b << "\t" ;
            if(lowChange == 1)
                cout << "L:" << c << "\t" ;

            cout << a << "\t";
            cout << b << endl;
        }
    }

    cout << "Root is: " << c << endl;
    cout << "Total Iteration: " << itr << endl;

    return 21;
}
