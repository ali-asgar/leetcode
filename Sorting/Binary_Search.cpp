// https://www.geeksforgeeks.org/binary-search/
// C++ program to implement Binary Search 

#include <bits/stdc++.h> 

using namespace std; 

int binarySearch(int arr[], int l, int r, int x) 
{ 
    // while (l <= r) {
	if (l <= r) { 
		int m = l + (r - l) / 2; 

		if (arr[m] == x) return m; // in middle

		if (arr[m] < x) // l = m + 1;   //left subarray
		    return binarySearch(arr, m + 1, r, x); 
		    
    // else r = m - 1; //left subarray
		return binarySearch(arr, l, m - 1, x);
	} 
	return -1;  // when element is not present in array
} 


int main() 
{ 
	int arr[] = { 2, 3, 4, 10, 40 }; 
	int x = 10; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	int result = binarySearch(arr, 0, n - 1, x); 
	(result == -1) ? cout << "Element is not present in array"
				: cout << "Element is present at index " << result; 
	return 0; 
} 


/*
Output :
Element is present at index 3

Time Complexity: The time complexity of Binary Search is
T(n) = T(n/2) + c 

Auxiliary Space:
O(1) iterative and O(Logn) recursion call stack space

*/
