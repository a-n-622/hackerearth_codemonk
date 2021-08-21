#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()

{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long int N;
	cin >> N;
	long long int A[N];
	for (int i=0; i<N; i++)
	{
		cin >> A[i];
	}

	long long int result[N];

	// for x
	stack <int> st;
	for (int i=0; i<N; i++)
	{
		while(!st.empty() && A[st.top()]<=A[i]) st.pop();	 // this line essentially serves to clean up the stack by popping larger elements,
													// but is not the starting point
		if (st.empty())
		{
			result[i] = -1; // this line is essentially the beginning point, 
							//and serves as reboot point for any element if no element is less than that element 

		}
		else {
			result[i] = st.top()+1;
		}
		st.push(i);
	}

	

	stack <int> st_y;

	for (int i=N-1; i>=0; i--)  // think this as attacking in a similarfashion but with a reversed array
	{
		while(!st_y.empty() && A[st_y.top()]<=A[i]) st_y.pop();	 // this line essentially serves to clean up the stack by popping larger elements,
													// but is not the starting point
		if (st_y.empty())
		{
			result[i] += -1; // this line is essentially the beginning point, 
							//and serves as reboot point for any element if no element is less than that element 

		}
		else {
			result[i] += st_y.top()+1;
		}
		st_y.push(i);
	}


	for (int i=0 ; i<N ; i++)
		cout << result[i] << " ";



	
}
