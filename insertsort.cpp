#include <iostream>
#include "top.h"
using namespace std;

void insertsort(int data[],int num)
{
	int i,j;
	int temp;
	for(j = 1; j<num; j++)
	//�ӵڶ�λ�����һλ���ν��в�������
	{
		i = j-1;
		int place = j;
		while(place>=0 && data[j]<=data[place])
        //���Ѿ���������������Ѱ����Ԫ�صĲ���λ��place
		{
			place--;
		}
		place++;

		//�� place��j ���������
		temp = data[j];
		while(place<i+1)
		{
			data[i+1] = data[i];
			i--;
		}
		data[place] = temp;
	}
}