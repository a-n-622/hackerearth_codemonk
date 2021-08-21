

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	int min_[T];
	for (int i=0;i<T;i++)
	{
		int N;
		long int temp,val=0;
		cin >> N;
		long int A[N];
		for (int j=0;j<N;j++)
		{
			cin >> A[j];
		}
		sort (A,A+N);
		 temp=A[1]^A[0];
		for (int j=1;j<N-1;j++)
			{
				val= A[j]^A[j+1];
				min_[i]=min(temp,val);
				temp=min_[i];
				//cout << val << " " << min_[i] << endl << endl;
			}

	}
	for (int i=0;i<T;i++)
	{
		 cout << min_[i] << endl;

	}
}


