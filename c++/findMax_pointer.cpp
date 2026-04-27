//findMax with pointer
#include <iostream>
using namespace std;

int findMax(int *,int);
int main()
{
    int n = 5;
    int nums[n] = {2,18,1,27,16};
    cout << "The Maximum value is " << findMax(nums,n) << endl;
    return 0;
}

int findMax(int *a, int m) 
{
    int max = *a;
    for(int i=0;i<m;i++){
        if (max < *(a+i)){
            max = *(a+i);
        }
    }    
    
    return max;

}  
