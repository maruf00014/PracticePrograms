#include<iostream>
using namespace std;

bool isArmstrong(string s){

int sum = 0;
    for(int i = 0; i< s.size;i++){
        sum += (s[i] - '0')*3;
    }
    if(sum == stoi(s)) return true;

    return false;
}

int main(){

    int n ;
    cin>>n;

    for(int i = 0; i<= n ; i++) 
    if(isArmstrong(to_string(i))) 
    cout<< i<< " ";

    return 0;







}