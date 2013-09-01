#include <iostream>
#include "top.h"
#include <fstream>
#include <time.h>
using namespace std;

int main()
{
	clock_t start, finish; 
	double duration;
	int data[100000];
	char *filepath = "d:\\data.txt";

	/*************************************************************************/
    start = clock();
	rand_number(filepath,100000);
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout<<"generate the rand number take "<<duration<<" seconds "<<endl;
	/*************************************************************************/

	ifstream file(filepath);
	if (!file)
		return 0;

	/*************************************************************************/
	start = clock();
	for(int i=0;i<100000;i++)  //文件存入了100000随机数 这里假设不出错
		file>>data[i];
    finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout<<"get file data take "<<duration<<" seconds "<<endl;
	/*************************************************************************/



	
	/*************************************************************************/
    start = clock();
    heapsort(data,100000);
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	cout<<"sort take "<<duration<<" seconds "<<endl;
	/*************************************************************************/


	for(int n=1000;n<1200;n++)
	{
		cout<<endl<<data[n];
	}
	return 1;
}
