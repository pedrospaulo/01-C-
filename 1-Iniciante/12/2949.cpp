#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int Q,A,E,H,M,X;
	A=E=H=M=X=0;
	string N;
	char R;
	cin>>Q;
	for (int I=0; I<Q;I++)
	{
		cin>>N>>R;
		switch (R)
		{
			case 'A':
				A++;
			break;
			case 'E':
				E++;
			break;
			case 'H':
				H++;
			break;
			case 'M':
				M++;
			break;
			case 'X':
				X++;
			break;
		}
	}
	cout<<X<<" Hobbit(s)"<<endl;
	cout<<H<<" Humano(s)"<<endl;
	cout<<E<<" Elfo(s)"<<endl;
	cout<<A<<" Anao(s)"<<endl;
	cout<<M<<" Mago(s)"<<endl;
	return 0;
}
