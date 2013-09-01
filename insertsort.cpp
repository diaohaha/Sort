#include <iostream>
#include "top.h"
using namespace std;

void insertsort(int data[],int num)
{
	int i,j;
	int temp;
	for(j = 1; j<num; j++)
	//从第二位到最后一位依次进行插入排序
	{
		i = j-1;
		int place = j;
		while(place>=0 && data[j]<=data[place])
        //在已经完成排序的数组中寻找新元素的插入位置place
		{
			place--;
		}
		place++;

		//从 place到j 依次向后移
		temp = data[j];
		while(place<i+1)
		{
			data[i+1] = data[i];
			i--;
		}
		data[place] = temp;
	}
}