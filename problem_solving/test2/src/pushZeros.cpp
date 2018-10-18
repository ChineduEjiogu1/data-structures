#include <iostream>
using namespace std;

void pushZeros(int a[], int size);

int main()
{
    int a[] = {0,1,0,3,12};
    int size = sizeof(a)/sizeof(a[0]);
    
    pushZeros(a, size);
}

void pushZeros(int a[], int size)
{   
    int nonZero= 0;
    for(int i = 0; i < size; i++)
    {
        if(a[i] != 0)
        a[nonZero++] = a[i];
    }
    
    while(nonZero < size)
    a[nonZero++] = 0;
    
    for(int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
