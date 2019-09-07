
#include <iostream>
using namespace std;

bool isPalindrome(string s)
{
	int l = 0, h = s.size() - 1;

	while (h > l)
	{
		if (s[l] != s[h])
			return false;

		l++;
		h--;
	}

	return true;
}

int main()
{
	
	int i = 0, n;

	cin >> n;

	if (isPalindrome(to_string(n)))
		cout << n << " is Palindrom"<<endl;
	else
		cout << n << " is not Palindrom"<<endl;

	while (i <= n)
	{
		if(isPalindrome(to_string(i))) cout<< i << " ";
		i++;
	}
	return 0;
}