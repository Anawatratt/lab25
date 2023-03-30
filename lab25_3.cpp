#include<iostream>
#include <set>

using namespace std;

//Write function count() here.
int count(const int *NumberData,int N)
{
	set<int> temp;
	for(int i=0;i<N;i++)
	{
		temp.insert(NumberData[i]);
	}
	return temp.size();
}

