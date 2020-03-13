#include <iostream>

void insertionSort(int* A, int num)
{
    for(int i = 1; i < num; i++)
    {
        int current = A[i];
        int j = i - 1;
        while ((j >= 0)&&(A[j] > current))
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = current;
    }
}

int main()
{
    int arr[5] =  {7, 2, 3, 8, 1 };

    insertionSort(arr, 5);

    for(int i = 0; i < 5; i++){
        std::cout << arr[i] << ' ';
    }

    return 0;
}