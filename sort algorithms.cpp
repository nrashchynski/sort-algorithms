#include <iostream>
#include <algorithm>
#include<vector>
#include <algorithm>
#include <cmath>

void bubble_sort(int a[], int length) {
	int s = length - 1;
	for (int i = 0; i < length; ++i) {
		for (int j = 0; j < s; ++j) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		s--;
	}
	for (int i = 0; i < length; ++i) {
		std::cout << a[i] << "\t";
	}
	std::cout << std::endl;
}

void selection_sort(int a[], int length) {
	int min_ind, min;
	// j - номер первого элемента в неотсортированной части массива
	for (int i = 0; i < length- 1; ++i) {		
		min_ind = i;
		for (int j = i + 1; j < length; ++j) {
			if (a[j] < a[min_ind])
			{
				min_ind = j;
			}
		}
		if (min_ind != i) {
			int temp = a[i];
			a[i] = a[min_ind];
			a[min_ind] = temp;
		}
	}
	for (int i = 0; i < length; ++i) {
		std::cout << a[i] << "\t";
	}
	std::cout << std::endl;
}

void insertion_sort(int a[], int length) {
	for (int i = 1; i < length; ++i) {
		int sorted = i - 1;
		while (sorted > -1 && a[sorted + 1] < a[sorted]) {
			int temp = a[sorted];
			a[sorted] = a[sorted + 1];
			a[sorted + 1] = temp;
			sorted--;
		}
	}
	for (int i = 0; i < length; ++i) {
		std::cout << a[i] << "\t";
	}
	std::cout << std::endl;
}
int binary_search(std::vector<int>v, int item) {
	std::sort(v.begin(), v.end());
	int low = 0;
	int high = v.size() - 1;
	while (low <= high) {
		int mid = (low + high) / 2;
		int guess = v[mid];
		if (item == guess) {
			return mid;
		}
		else if (item < guess) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return -1;	
}

int main() {
	// array
	int a[] = { 8,6,4,3,7,0,9,5,2,1};
	int length = 10;
	std::cout << "array" << std::endl;
	for (int i = 0; i < length; ++i) {
		std::cout << a[i] << "\t";
	}
	std::cout << std::endl << std::endl;;
	int b[] = { 8,6,4,3,7,0,9,5,2,1};
	int c[] = { 8,6,4,3,7,0,9,5,2,1 };
	std::vector<int>v = { 4,3,0,9,5,1 };

	// test
	std::cout << "bubble sort\n";
	bubble_sort(a, length);
	std::cout << "selection sort\n";
    selection_sort(b, length);
	std::cout << "insertion sort\n";
	insertion_sort(c, length);
	std::cout << "bunary_search\n";
	std::cout << binary_search(v, 0) << '\n';


	std::cout << "next algorithms should be soon\n";
	return 0;
}