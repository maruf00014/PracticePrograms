#include <iostream>
using namespace std;
int fact(int n);
int main()
{
	int n;
	cin>>n;
	cout<< fact(n);
	return 0;
}

int fact(int n){
	
	if(n==1 || n== 0) return 1;
	else return n*fact(n-1);
	}