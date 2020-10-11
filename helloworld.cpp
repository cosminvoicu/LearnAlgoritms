#include<iostream>

using namespace std;

int main()
{
	int n=24,b=2,numar_convertit;

	while(n){
		numar_convertit=n%b;
		n/=b;
	}
	cout<<numar_convertit;
	return 0;
}