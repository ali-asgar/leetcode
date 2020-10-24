// https://www.geeksforgeeks.org/maximum-and-minimum-in-an-array/

#include<iostream>
using namespace std;

struct Pair 
{
	int min, max;
}; 

struct Pair getMinMax(int arr[], int low, int high)
{
	struct Pair minmax, mml, mmr;

	if (high == low || high == low + 1) // If there are one or two elements 
	{ 
	    minmax.min = arr[low] <= arr[high] ? arr[low] : arr[high];
	    minmax.max = arr[low] >= arr[high] ? arr[low] : arr[high];
		return minmax;
	}
	
	int mid = low + (high - low) / 2;  // If there are more than 2 elements
	mml = getMinMax(arr, low, mid);
	mmr = getMinMax(arr, mid + 1, high); 
	
	minmax.min = mml.min < mmr.min ? mml.min : mmr.min; // Compare minimums of two parts
	minmax.max = mml.max > mmr.max ? mml.max : mmr.max; // Compare maximums of two parts
	return minmax;
}

int main()
{
	int arr[] = { 1000, 11, 445, 1, 330, 3000};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	struct Pair minmax = getMinMax(arr, 0, n-1);
							
	cout << "Minimum element is " << minmax.min << endl;
	cout << "Maximum element is " << minmax.max;
	return 0;
}

/*
Minimum element is 1                                                                                                                                                               
Maximum element is 3000
*/
