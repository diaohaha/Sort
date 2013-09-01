#include <iostream>
#include "top.h"
using namespace std;


int sortgroup(int* data, int len, int begin,int step)
{
    for (int i = begin + step; i < len; i += step)
    {
        //寻找i元素的位置，
        for (int j = begin; j < i; j+= step)
        {
            //如果比他小，则这里就是他的位置了
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
//希尔排序, pnData要排序的数据， nLen数据的个数
int shellsort(int* data, int len)
{
    //以nStep分组，nStep每次减为原来的一半。
    for (int step = len / 2; step > 0; step /= 2)
    {
        //对每个组进行排序
        for (int i = 0 ;i < step; ++i)
        {
            sortgroup(data, len, i, step);
        }
    }

    return 1;
}