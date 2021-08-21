#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int bin_search ( long int A[], int N, long int x, int flag) // flag==0 means greater than or equal to, 1 means greater than 
{
	if (A[N-1]<x)
		return 0;
	if (A[0]>x)
		{
			//cout << "houdini" << endl;
			return N;
		}
	
	
	int beg=0, end=N-1;

	while (beg < end)
	{
		int mid = beg +(end -beg)/2;
		if (beg==mid)
		{
			if (flag==0)
			{
				if (A[beg]>=x){
					//cout << "1" << endl;
					return(N-beg);
				}
				else{
					if (A[end]>=x){
						//cout << "2" << endl;
						return (N-end);
					}
				}
			}

			else{
				if (A[beg]==x)
					{
						for (int i=beg; i<N;i++)
						{
							if (A[i]!=x){
								//cout << "3" << endl;
								return (N-i);
							}
							if (i==(N-1))
								return 0;
						}
					}
				if (A[beg]>x)
				{
					//cout << "4" << endl;
					return (N-beg);
				}
				if (A[end]==x)
					{
						for (int i=end; i<N;i++)
						{
							if (A[i]!=x){
								//cout << "5" << endl;
								return (N-i);
							}
						}
					}
				if (A[end]>x){
					//cout << "6" << endl;
					return (N-end);
				}
			}
		}
		if (A[mid]<x)
			beg = mid + 1;
		if (A[mid]>=x)
		{
			end = mid;	
		}
	}

	//cout << "gui" <<" "<< beg << " " << end << endl;
	if (beg==end)
	{
		//cout << "7" << " " << beg << endl;
		if (flag==0) // here issue comes when confusion arises if number needs to be taken or not taken
			return (N-beg);
		else{
			for (int i=beg; i<N;i++)
						{
							if (A[i]!=x){
								
								return (N-i);
							}
							if (i==(N-1))
								return 0;
						}

		}
	}
}
	

int main() 
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int N;
	cin >> N;										
	long int A[N];
	
	for (int i=0 ; i<N ; i++)
	{
		cin >> A[i];
	}

	sort (A, A+N);
	/*
	for (int i=0; i<N ; i++)
	{
		cout << A[i] << " ";

	}

	cout << endl;
	*/
	
	int Q;
	cin >> Q;
	int result[Q];
	long int x[Q]; 
	int flag[Q];

	for (int i=0 ; i<Q ; i++)
	{
		
		cin >> flag[i] >> x[i];
				
	}

	
	
	for (int i=0 ; i<Q ; i++){
		result[i] = bin_search(A, N, x[i], flag[i]);
		cout << result[i] << "\n";
	}

	return 0;

}

