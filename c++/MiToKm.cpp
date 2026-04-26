//convert miles to kilometers
#include <iostream>
using namespace std;

double conv(double);
int main()
{
    double m,km;
    cin >> m;
    km = conv(m);
    cout << m << " miles is "<< km << " kilometers.";
}

double conv(double mi)
{
    double km;
    km = mi * 1.6;
    return km;
}
