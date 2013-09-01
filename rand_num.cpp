#include <iostream>
#include <fstream>
#include "top.h"
using namespace std;


int rand_number(char *filepath,int total)
//生成随机数并存入文件
{
	int num;
	ofstream file(filepath);
	if(!file)
		return 0;
	for(int i = 0; i < total; ++i)
	{
		num=rand();   //随机数生成
        file<<num<<endl;
	}
	file.close();
    return 1;
}