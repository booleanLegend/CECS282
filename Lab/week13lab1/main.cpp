// Names: Destin Byrd, Matthew Zaldnaa, Efrain Miranda
// Week 13 Lab 1 - Vector
// Demo Time: 8:05 PM
// Date: 4-13-2021
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> //for accumulator operations
using namespace std;

int main() {
	// an array of doubles
	double arr[] = { 1.1, 2.2, 3.3, 2.2, 4.4 };

	// Determine the array size
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	cout << "array size: " << arrSize << endl;

	// initialize vector v1 to array arr
	vector<double> v1(arr, arr + arrSize);
	
	// Display the contents of vector v1
	cout << "\nvector v1 contents: \n";
	for (int i = 0; i < arrSize; i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	// Sorting the Vector in Ascending order
	sort(v1.begin(), v1.end());

	// Display the content of vector v1 after sorting
	cout << "\nSorted vector v1 contents: \n";
	for (int i = 0; i < arrSize; i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	// Reversing the Vector v1
	reverse(v1.begin(), v1.end());

	// Display the content of vector v1
	cout << "\nAfter reversing: " << endl;
	for (int i = 0; i < arrSize; i++) {
		cout << v1[i] << " ";
	}
  	cout << "\n\n";
  
	// Display the maximum element of vector v1
	cout << "Maximum element: " << *max_element(v1.begin(), v1.end()) << endl;

	// Display the minimum element of vector v1
	cout << "Minimum element: " << *min_element(v1.begin(), v1.end()) << endl;

	// Display the accumulation of all elements in vector v1
  	int sum = accumulate(v1.begin(), v1.end(), sum);
	cout << "\nAccumulation of all elements is: " << sum << "\n";
  
	// Starting the summation from 0
  	accumulate(v1.begin(), v1.end(), v1[0]);
  
	// Counts the occurrences of 2.2 from 1st to last element
  	int counts = count(v1.begin(), v1.end(), 2.2);
  
	// Display the counts
	cout << "Occurrences of 2.2 in v1: " << counts << "\n\n";
  
	// Delete second element of vector
	v1.erase(v1.begin() + 1);
  
	cout << "Vector 1 is now: ";
	// Display the v1 after erasing the element
	for (int i = 0; i < arrSize; i++) {
		cout << v1[i] << " ";
	}
	cout << "\nPress any key to continue.";
	getchar();
	return 0;
}