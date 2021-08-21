#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	long int n, m, l, r;
	int k;
	cin >> n >> m >> l >> r >> k;
	long int rem = n%m, idx=0;
	//cout << "this is rem "<< rem << endl;
	

	vector <long int> v;
	for (long int i = 0; i <= r-l ; i++)
	{
		if ((n)%(l+i) == rem)
			{
			if ((l+i)==m)
				continue;
			else
				v.push_back(l+i);
			
			} 
	}


	 //cout << count << endl;
	if (v.size()>k){
		cout << v.size() << endl;
		cout << -1 << endl;
		return 0;
	}
	
	//vector <long int> out;
	else {
		cout << v.size() << endl;
		for (int i=0; i<v.size();i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}



}

