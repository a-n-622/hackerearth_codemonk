#include <iostream>
#include <bits/stdc++.h>

using namespace std;


long int func(int m, int n)
{
	//cout << m << " " << n << endl;
	for (long int i=0; i<=m; i++)
	{
		long int temp = i*i;
		if (temp%m==n)
			return i;
		
	}

	return -1;
	
}

int main() {
	int t;
	cin >> t;
	for (int i=0; i<t; i++)
	{
		long int m,n;
		cin >> n >> m;
		long int x = 0;
		x = func(m,n);
		cout << x << endl;
	}
}


