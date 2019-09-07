#include<iostream>
int main()
{
	int a=0 ,b=1,c;

	
	for(int i = 0; i<30; i++){
		c = a+b;
		std::cout<<c<<" ";
		a=b;
		b=c;
		}
}