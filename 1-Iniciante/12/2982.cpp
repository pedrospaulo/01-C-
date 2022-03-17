#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	char A;
	int N,Q,S;
	S=0;
	cin>>Q;
	for (int I=0;I<Q;I++)
	{
		cin>>A>>N;
		if (A=='G')
		{
			S-=N;
		}
		else
		{
			S+=N;
		}
	}
	if (S>=0)
	{
		cout<<"A greve vai parar."<<endl;
	}
	else
	{
		cout<<"NAO VAI TER CORTE, VAI TER LUTA!"<<endl;
	}
	return 0;
}
