#include <iostream>
#include "top.h"
using namespace std;


int temp[1000000];
//πÈ≤¢≈≈–Ú
void merge(int *data, int begin, int mid, int end);

void mergesort(int *data, int begin, int end)
{
	if(begin<end)
	{
		int mid = (end + begin) / 2;
		mergesort(data, begin, mid);
		mergesort(data, mid+1, end);

		merge(data, begin, mid, end);
	}
}

void merge(int *data, int begin, int mid, int end)
{
	int i = begin, j =mid + 1, k = begin;
	
	while(i<=mid&&j<=end)
	{
		if(data[i] <= data[j])
			temp[k++] = data[i++];
		else
			temp[k++] = data[j++];
	}

	while(i<=mid)
	{
		temp[k++] = data[i++];
	}

	while(j<=end)
	{
		temp[k++] = data[j++];
	}

	for(i = begin; i<=end; i++)
	{
		data[i] = temp[i];
	}

}


