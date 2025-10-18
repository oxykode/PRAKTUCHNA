
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;






int first()
{
    double a, b;  
    int N; 
    double d;
    cout << "Enter number of cycles {N}: ";
    cin >> N;
    cout << "Enter start of range (a): ";
    cin >> a;
    cout << "Enter end of range (b): ";
    cin >> b;

    double x, y;
    double I = 0; // ��� ���������
    double sum = 0;

    cout << "i\t" << "x\t    " << "y" << endl;
    d = (b - a) / (N - 1.0);
    for (int i = 1; i <= N; i++)
    {

        x = a + (i-1) * d;
        double module = fabs(sqrt(x) - (3*x) + 0.1);
        double division = exp(x) / (x-1);

        y = module - division;

        cout << i << "\t" << x << "\t" << y << endl;

        if (i == 0 || i == N - 1)     // I = h( (y0/2)+y1+y2+...+(yn/2)  )
        {
            sum += y / 2.0;
        }
        else
        {
            sum += y;
        }


    }
    I = d * sum;
    // cout << endl;
    cout << endl << "Step d: " << d << endl;
    cout << "Sum: " << setprecision(4) << sum << endl;
    cout << "Integral: " << setprecision(4) << I;



    return 0;
}


int second(){
    double x, Y, S, term, epsilon, error;
    int k;
    cout << "Input 0 < |Number| < 1: ";
    cin >> x;
    cout << "Input epsilon ";
    cin >> epsilon;
    Y = exp(2*x);

    S = 0;
    term = 1;
    k = 0;
    do{
        S += term;
        k += 1;
        term = term * (2 * x) / k;
    }
    while (fabs(k) >= epsilon);

    error = fabs(S-Y);
    cout << "Y(x) = " << setprecision(6) << Y << endl;
    cout << "S(x) = " << setprecision(6) << S << endl;
    cout << "|S(x) - Y(x)| = " << setprecision(6) << error << endl;
    return 0;
}

int main(){
    int task;
    cout << "Select Task( 1 or 2 ): ";
    cin >> task;

    if (task == 1){
        first();
    }
    else {
        second();
    }



}