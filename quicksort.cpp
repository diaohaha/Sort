#include <iostream>
#include "top.h"
using namespace std;

void quicksort(int data[], int left, int right)
{	
	if(left < right)
	{
		int i = left, j = right, temp = data[left];
		while(i < j)
		{
			while(i<j && data[j] >= temp)
				j--;
			if(i < j)
				data[i++] = data[j];
			while(i<j && data[i]<temp)
				i++;
			if(i < j)
				data[j--] = data[i];
		}
		data[i] = temp;
		quicksort(data,left,i-1);
		quicksort(data,i+1,right);
	}
}