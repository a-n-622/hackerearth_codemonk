#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector < long long int > arr[100];
stack <long long int> my_st;      // only for first row, where arrangement is not uniform. size of stack to be equal to size of row 1; with
                               // top element equal to the minimum always. 

int bin_search(int i, long long int val){
	int l = 0, r = arr[i].size();
	while(l<r)
	{
		int mid = (l+r)/2;

		if (arr[i][mid]>val)
			r = mid;
		else
			l = mid + 1;
	}

	if (arr[i][l]>val)
		return l;
	return -1;

}

int check(int N){
	long long int min_ = my_st.top();
	int flag = 1;
	for (int i=1; i<N; i++)
	{
		flag = bin_search (i, min_);
		if (flag==-1)
			return -1;
		else
			min_ = arr[i][flag];
	}
	return 1;
}


int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int N;
	cin >> N;

	for (int i=0; i<N; i++)
	{
		long long int temp_size, temp_;
		cin >> temp_size;

		for (int j=0; j<temp_size; j++)
		{
			
			cin >> temp_;
			arr[i].push_back(temp_);
			if (i==0){
				if (j==0)
					my_st.push(temp_);
				else{
					if (my_st.top()>temp_)
						my_st.push(temp_);
					else my_st.push(my_st.top());
				}
			}
		
		}
	}

	vector <string> output;

	int Q;
	cin >> Q;

	for (int i=0; i<Q; i++)
	{
		int v;
		cin >> v;
		if (v==0)
		{
			int k;
			cin >> k;
			arr[k-1].pop_back();
			//size_[k-1] = arr[k-1].size();
			if (k-1==0)
				my_st.pop();
		}

		else if (v==1)
		{
		    
			int k, l;
			cin >> k >> l;//
			arr[k-1].push_back(l);
			if (k-1==0)
			{
				if (my_st.top()>l)
					my_st.push(l);
				else my_st.push(my_st.top());
			}
		}

		else{
			if (check(N)==1)
			{
				output.push_back("YES");
			}
			else output.push_back("NO");
		}

		//cout << i << endl;
	}

	for (int i=0; i<output.size(); i++)
	{
		cout << output[i] << endl;

	}

}


