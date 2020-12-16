#include <iostream>
#include "Sorts.h"
#include <time.h>

using namespace std;

int main() {
	const int nmbr = 10;
	char* charr = new char[nmbr];
	int* arr = new int[nmbr];
	double* res = new double[10];
	srand(time(0));
	/*for (int j = 0; j < 10; j++) {
		for (int i = 0; i < nmbr; i++)
			*(arr + i) = rand() % (nmbr * 10);
		clock_t start = clock();
		//quickSort(arr, 0, cnt - 1);
		insertionSort(arr, nmbr);
		clock_t stop = clock();
		clock_t itog = stop - start;
		res[j] = ((double)itog * 1000 / CLOCKS_PER_SEC);
	}*/

	//for (int i = 0; i < 10; i++) cout << res[i] << " ";
	for (int i = 0; i < nmbr; i++)
		*(arr + i) = rand() % (nmbr * 10);
	for (int i = 0; i < 10; i++)
		*(charr + i) = rand() % 93 + 33;
	printArray(arr, nmbr);
	//cout << binarySearch(arr, 0, nmbr - 1, *(arr + 2));
	insertionSort(arr, nmbr);
	printArray(arr, nmbr);
	printArray(charr, nmbr);
	countingSort(charr, nmbr);
	printArray(charr, nmbr);
}