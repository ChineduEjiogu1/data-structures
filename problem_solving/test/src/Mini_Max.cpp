#include <iostream>
using namespace std;

void mini_Max(int a[], int size);

int main() 
{
    int a[] = {1, 3, 5, 7, 9};
    int size = sizeof(a)/sizeof(a[0]);
    mini_Max(a,size);
}
    
void mini_Max(int a[], int size)
{
    int maximumNum = 0;
    int minimumNum = 0;
    
    long int maximumSum = 0;
    long int minimumSum = 0;

    long long int totalSum = 0;
    
    for(int currentIndex = 0; currentIndex < size; currentIndex++)
    {
        if(!(a[currentIndex] >= 1 && a[currentIndex] <= 1000000000))
        continue;
        
        if(maximumNum < a[currentIndex])
        maximumNum = a[currentIndex];
        
        minimumNum = a[0];
        for(int i = 1; i < size; i++)
        {
            if(a[i] < minimumNum)
            minimumNum = a[i];
        }

        totalSum += a[currentIndex];
        
        if(minimumNum)
        maximumSum = (totalSum - minimumNum);
        //works
        if(maximumNum)
        minimumSum = (totalSum - maximumNum);
    }
    
    cout << "The maximum number = " << maximumSum << " " << "The minimum number = " << minimumSum << endl;
    //cout << maximumNum << endl;
    //cout << minimumNum << endl;
    
}