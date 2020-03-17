#include <iostream>
using namespace std;

void findVal_findIndex(int a[], int size, int targetVal);

int main() 
{
    int a[] = {1,2,5,6};

    int size = sizeof(a)/sizeof(a[0]);

    cout << "Please enter Target Value: " << endl;
    cin >> targetVal;

    void findVal_findIndex(a, size, targetVal);
}

void findVal_findIndex(int a[], int size, int targetVal)
{
    int targetIndex = 0;
    for(int currentIndex = 0; currentIndex < size; currentIndex++)
    {
        if(a[currentIndex] == targetVal)
        targetIndex = currentIndex;

        if(a[currentIndex] < targetVal)
        targetIndex--;

        if(targetIndex < a[currentIndex])
        targetIndex++;
    }
    cout << "The target index is: " << targetIndex;
}
