#include <iostream>
using namespace std;

int binarySearch(int arr[], int x, int left, int right)
{
	if (left > right)
		return -1;

	int mid = (left + right) / 2;
	
	if(arr[mid]==x) return mid;
	
	else if(arr[mid]>x) return binarySearch(arr,x,left,mid-1);
	
	else return binarySearch(arr,x, mid+1,right);
}

int main()
{
	int arr[] = {3, 5, 7, 9};

	cout<<binarySearch(arr,8,0,3);

	return 0;
}
