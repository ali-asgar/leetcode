/* C++ simple implementation QuickSort */
#include<iostream>

using namespace std;

void swap(int* a, int* b) { 
	int t = *a; 
	*a = *b; 
	*b = t; 
} 

int part(int arr[], int l, int h) { 
	int p = arr[h]; 
	int b = l;

	for (int i = l; i < h; i++) { 
		if (arr[i] <= p) 
			swap(&arr[b++], &arr[i]); 
	} 
	swap(&arr[b], &arr[h]); 
	return b; 
} 

void quickSort(int arr[], int l, int h) { 
	if (l < h) { 
		int pi = part(arr, l, h); 
		quickSort(arr, l, pi - 1); 
		quickSort(arr, pi + 1, h); 
	} 
} 

int main() { 
	int a[] = {10, 7, 8, 9, 1, 5}; 
	int n = sizeof(a)/sizeof(a[0]); 
	quickSort(a, 0, n-1); 
	cout << "Sorted array: \n\n"; 
	for (int i=0; i < n; i++) 
		cout << a[i] << " "; 
	return 0; 
} 
