#include <iostream>
#include "top.h"
using namespace std;

void heapadjust(int *data, int i, int len)
{
	int child;
	int temp;

	for(temp = data[i]; 2*i+1<len; i=child)
	{
		child = 2*i+1;
		if(child<len-1&&data[child+1]>data[child])
			child++;
		if(temp<data[child])
			data[i] = data[child];
		else
			break;
		data[child] = temp;
	}
}

void heapsort(int *data,int len)
{
	int temp;
	int i;

	for(i = len/2-1; i>=0; i--)
		heapadjust(data,i,len);

	for(i = len-1; i>0; --i)
	{
		temp = data[i];
		data[i]  = data[0];
		data[0] = temp;
		heapadjust(data,0,i-1);
	}
}