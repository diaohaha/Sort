#include <iostream>
#include "top.h"
using namespace std;

void selectsort(int *data, int begin, int end)
{
	int i,j;
	int temp;
	int sign;
	
	for(i=begin; i<end; i++)
	//寻找与data[i]交换的元素
	{
		temp = data[i];
		sign = i;

		for(j=i+1; j<=end; j++)
		{
			if(data[j]<temp)
			{
				temp = data[j];
				sign = j;
			}
		}

		if(sign!=i)
		{
			data[sign] = data[i];
			data[i] = temp;
		}
	}
}
