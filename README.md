#include <iostream>
using namespace std;

int findMax(int,int);
int main()
{
    int tmp;
    int n1,n2;
    cin >> n1 >> n2;
    cout << "Find maximum: ";
    tmp = findMax(n1,n2);
    cout << tmp << endl;
    return 0;
}

int findMax(int n, int m)
{
    int tmp;
    if(m>=n) tmp = m;
    else tmp = n;
    return tmp;
}
