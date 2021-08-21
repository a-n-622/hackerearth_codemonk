#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int func (long long int arr[], long long int X, int n)
{
	int k=n, count=0, start = 0, flag=1; // flag checks if at any point, the subarray exceeded X; count keeps track of the subarray's elements when it exceeds X, k is the minimum value of count that occured throughout
	long long int sum = 0;
	for (int i=0; i<n ;i++)
	{
		if (sum <= X){
			count+=1;
			sum += arr[i];
			//cout << count << " " << sum << endl;
		}

		while (sum > X)
		{
			flag=0;
			k = min (k, count);
			
			sum = sum - arr[start];
			//cout << "k is "<< k << " " << sum << endl;
			start++;
			count--;
			

			if (sum==0)
				break;
		}
		if (sum == 0) {
            //k += -1;
            break;
        }
		//k = max (k, count);
		
		

		
		
	}
	//cout << k << endl;
	if (flag==1)
		return k; // if the subarray didn't exceed X even once, then k itself
	return (k-1); // else, one less than the least length of subarray whose sum exceeded X 
}

int main() {
	int N;
	long long int X;
	cin >> N >> X;	
	long long int A[N];
	for (int i=0; i<N ; i++)
		cin >> A[i];
	int k= func(A, X, N);
	cout << k;

	// assuming array is already sorted


	
}


