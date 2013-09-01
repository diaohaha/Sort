#include <iostream>
#include "top.h"
using namespace std;

void countsort(int data[], int len)
{
	long *pcount = NULL;
	pcount = (long*)malloc(sizeof(long)*len);

	for(int i=0; i<len; i++)
	{
		pcount[i] = 0;
	}
    
	for(i=0; i<len; i++)
	{
		++pcount[data[i]];
	}

	for(i=1; i<len; i++)
	{
		pcount[i] += pcount[i-1];
	}

	

	int *psort = NULL;
	psort = (int*)malloc(sizeof(int)*len);

	for(i=0; i<len; i++)
	{
		pcount[data[i]]--;
		psort[pcount[data[i]]] = data[i];
	}

	for(i=0; i<len; i++)
	{
		data[i] = psort[i];
	}

	free(pcount);
	free(psort);
}