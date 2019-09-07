#include <iostream>
using namespace std;
int main()
{
	int t, m,n,x,y;
	
	 while(cin>> t && t!= 0){
	 	
	 	cin>> m>>n;
	 	while(t--){
	 		cin>>x>>y;
	 		
	 		if(x>m&&y>n) cout<<"NE"<<endl;
	 		else if(x<m&&y<n) cout<<"SO"<<endl;
	 		
	 		else if(x>m&&y<n) cout<<"SE"<<endl;
	 	else if(x<m&&y>n) cout<<"NO"<<endl;
	 		
	 		else  cout<<"divisa"<<endl;
	 	
	 		}
	 	
	 	}
	return 0;
}