#include <iostream>
#include "top.h"
using namespace std;

void bubblesort(int *data, int begin, int end)
{
	int i,j;
	int isend;

	for(j = end; j>=begin; j--)
	{
		isend = 0;
		for(i = begin; i<j; i++)
		{
			if(data[i] > data[i+1])
			{
				int temp = data[i+1];
				data[i+1] = data[i];
				data[i] = temp;
				isend = 1;
			}
		}
		if (!isend)
			break;
	}
}

