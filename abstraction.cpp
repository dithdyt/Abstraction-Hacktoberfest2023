// C++ program for the above example

#include "bits/stdc++.h"
using namespace std;

// Function to find X such that it is
// less than the target value and function
// is f(x) = x^2
void findX(int targetValue)
{

	// Initialise start and end
	int start = 0, end = targetValue;
	int mid, result;

	// Loop till start <= end
	while (start <= end) {

		// Find the mid
		mid = start + (end - start) / 2;

		// Check for the left half
		if (mid * mid <= targetValue) {

			// Store the result
			result = mid;

			// Reinitialize the start point
			start = mid + 1;
		}

		// Check for the right half
		else {
			end = mid - 1;
		}
	}

	// Print the maximum value of x
	// such that x^2 is less than the
	// targetValue
	cout << result << endl;
}

// Driver Code
int main()
{
	// Given targetValue;
	int targetValue = 81;

	// Function Call
	findX(targetValue);
}
