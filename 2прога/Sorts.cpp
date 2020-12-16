#include <iostream>

using namespace std;

void swap(int* a, int* b) { 
    *a -= *b;
    *a += *b;
    *b = *a - *b;
}

bool isSorted(int arr[], int n) { // checking for sorting
    int i = 0;
    while (i < n - 1)
        if (arr[i] > arr[i++ + 1])
            return false;
    return true;
}

void sorting(int* arr, int n)
{
    for (int i = 0; i < n; i++)
        swap(arr[i], arr[rand() % n]);
}

int moving(int* arr, int l, int r)
{
    int i = l - 1;
    int p = arr[r];
    for (int j = l; j < r; j++)
    {
        if (arr[j] < p)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[r]);
    return i + 1;
}

int binarySearch(int* arr, int a, int lastel, int cnt) { // binary search algorithm
    if (!isSorted(arr, lastel)) {
        return -1;
        throw "This array isn`t sorted";
    }
    while (a <= lastel) {
        int m = a + (lastel - a) / 2;
        if (arr[m] == cnt)
            return m;
        if (arr[m] < cnt)
            a = m + 1;
        else
            lastel = m - 1;
    }
    return -1;
    throw "This element doesn`t exist";
}

void quickSort(int* arr, int a, int b) // quick sort algorithm
{
    if (a < b)
    {
        int i2 = moving(arr, a, b);
        quickSort(arr, a, i2 - 1);
        quickSort(arr, i2 + 1, b);
    }
}


void insertionSort(int* arr, int size) { // InsertionSort algorithm
    int i,j, key;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void bogoSort(int* arr, int size) { // the "stupid" sorting algorithm
    while (!isSorted(arr, size)) sorting(arr, size);
}

void countingSort(char* arr, int size) { // counting sorting algorithm
    char* readyarr = new char[size];
    int symbol[256], i;
    for (i = 0; i < 256; i++)
        symbol[i] = 0;
    for (int i = 0; i < size; i++)
        symbol[arr[i]]++;
    for (i = 1; i <= 255; i++)
        symbol[i] += symbol[i - 1];
    for (i = 0; i < size; i++)
    {
        readyarr[symbol[arr[i]] - 1] = arr[i];
        symbol[arr[i]] --;
    }
    for (i = 0; i < size; i++)
    {
        arr[i] = readyarr[i];
    }
}

void printArray(int* arr, int size) { // Array output
    for (int i = 0; i < size; i++) cout << *(arr + i) << " ";
    cout << endl;
}

void printArray(char* arr, int size) { // Array output
    for (int i = 0; i < size; i++) cout << *(arr + i);
    cout << endl;
}

void printArray(double* arr, int size) { // Array output
    for (int i = 0; i < size; i++) cout << *(arr + i) << " ";
    cout << endl;
}