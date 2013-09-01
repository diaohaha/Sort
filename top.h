#include <iostream>
#include <fstream>
using namespace std;

int rand_number(char *filepath,int total);
void countsort(int data[], int len);
void insertsort(int data[],int num);
void mergesort(int *data, int begin, int end);
void quicksort(int data[], int left, int right);
int shellsort(int* data, int len);
void selectsort(int *data, int begin, int end);
void bubblesort(int *data, int begin, int end);
void heapsort(int *data,int len);