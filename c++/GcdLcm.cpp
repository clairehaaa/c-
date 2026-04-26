//return GCD(greatest common divisor) and LCM(least common multipler)

#include <iostream>
using namespace std;

int gcd(int,int);
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int g = gcd(n1,n2); 
    int l = (n1*n2)/g; //LCM
    cout << "GCD of "<< n1 << " and " << n2 << " is " << g <<" and LCM is " << l;
}

int gcd(int n, int m) // use Euclidean Algorithm to get GCD
{
    while(m!=0){
        int r = n % m;
        n = m;
        m = r;
    }
    
    return n;
}
