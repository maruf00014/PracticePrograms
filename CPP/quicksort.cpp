#include <iostream>
using namespace std;

int partition(int arr[],int left, int right, int pivot){
	
	while(left<=right){
		
		while(arr[left]< pivot) left++;
		while(arr[right]> pivot) right--;
		
		if(left<=right){
			
			int temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			
			left++;
			right--;
			
			
			
		}
		
	}
	
	return left;
	
	}

void quickSort(int arr[], int left, int right ){
	
	if(left>= right) return;
	
	int pivot = arr[(left+right)/2];
	int index = partition(arr, left, right, pivot);
	
	quickSort(arr,left,index-1);
	quickSort(arr,index,right);
	
	}

int main()
{
	int arr[] = {3,5,5,7,4,8};
	
	quickSort(arr, 0, 5);
	
	int i=0;
	while(i<5){
		
		cout<< arr[i]<<" ";
		i++;
	}
	
	
	return 0;
}
