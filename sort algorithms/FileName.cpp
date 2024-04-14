#include <iostream>
#include <algorithm>
#include <cmath>

void bubble_sort(int a[], int length) {
	for (int i = 0; i < length; ++i) {
		for (int j = 0; j < length - 1; ++j) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
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

	// test
	bubble_sort(a, length);
	selection_sort(b, length);
	return 0;
}
