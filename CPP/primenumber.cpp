// A school method based C++ program to check if a
// number is prime
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<=1) return false;

    for(int i = 2 ; i <= n/2; i++) 
    if(n % i == 0) return false;

    return true;

}

// Driver Program to test above function
int main()
{
    int n, i = 0;
    cin >> n;
    while (i <= n)
    {
        if (isPrime(i))
            cout << i << " ";
            i++;
    }
    return 0;
}