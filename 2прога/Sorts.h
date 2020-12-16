#pragma 
#include <iostream>
#ifndef SORTS_H
#define SORTS_H
int binarySearch(int* arr, int a, int lastel, int cnt);
void quickSort(int* arr, int a, int b);
void insertionSort(int* arr, int size);
void bogoSort(int* arr, int size);
void countingSort(char* arr, int size);
void printArray(int* arr, int size);
void printArray(char* arr, int size);
void printArray(double* arr, int size);
bool isSorted(int arr[], int n);
#endif