#include <iostream>
#include "top.h"
using namespace std;


int sortgroup(int* data, int len, int begin,int step)
{
    for (int i = begin + step; i < len; i += step)
    {
        //Ѱ��iԪ�ص�λ�ã�
        for (int j = begin; j < i; j+= step)
        {
            //�������С���������������λ����
            if (data[i] < data[j])
            {
                int temp = data[i];
                for (int k = i; k > j; k -= step)
                {
                    data[k] = data[k - step];
                }
                data[j] = temp;
            }
        }
    }
    return 1;
}
//ϣ������, pnDataҪ��������ݣ� nLen���ݵĸ���
int shellsort(int* data, int len)
{
    //��nStep���飬nStepÿ�μ�Ϊԭ����һ�롣
    for (int step = len / 2; step > 0; step /= 2)
    {
        //��ÿ�����������
        for (int i = 0 ;i < step; ++i)
        {
            sortgroup(data, len, i, step);
        }
    }

    return 1;
}