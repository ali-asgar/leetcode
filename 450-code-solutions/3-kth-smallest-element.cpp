// https://practice.geeksforgeeks.org/problems/kth-smallest-element/0

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int arr[] = {40, 39, 32, 23, 16, 45, 4, 3, 1, 67, 88, 55};
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	sort(arr, arr+n);
	cout << "Kth Smallest number is - " << arr[k-1]; 
	
	return 0;
}

/*
Kth Smallest number is - 4                                                                                                                                                         
*/
