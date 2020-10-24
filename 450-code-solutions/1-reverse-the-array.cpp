// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include <iostream>

using namespace std;

void reversearray(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end--;
    }
}

void printarray(int arr[], int n) {
    for(int i =0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main()
{
    int arr[] = {10, 2, 4, 40, 39, 23, 32, 5, 9, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array is : \n";
    printarray(arr, n);
    reversearray(arr, 0, n-1);
    cout << "Reverse Array is : \n";
    printarray(arr, n);
    return 0;
}

/*
Array is :                                                                                                                                                                         
10 2 4 40 39 23 32 5 9 7                                                                                                                                                           
Reverse Array is :                                                                                                                                                                 
7 9 5 32 23 39 40 4 2 10   
*/
