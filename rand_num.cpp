#include <iostream>
#include <fstream>
#include "top.h"
using namespace std;


int rand_number(char *filepath,int total)
//����������������ļ�
{
	int num;
	ofstream file(filepath);
	if(!file)
		return 0;
	for(int i = 0; i < total; ++i)
	{
		num=rand();   //���������
        file<<num<<endl;
	}
	file.close();
    return 1;
}