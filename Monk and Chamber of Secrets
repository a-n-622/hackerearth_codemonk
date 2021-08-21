
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Print the current pair
void printPair(pair<int, int> p)
{
    // Gives first element from queue pair
    int f = p.first;
 
    // Gives second element from queue pair
    int s = p.second;
 
    cout << "(" << f << ", " << s << ") ";
}
 
// Print the Queue of Pairs
void showQueue(queue<pair<int, int> > gq)
{
    // Print element until the
    // queue is not empty
    while (!gq.empty()) {
        printPair(gq.front());
        gq.pop();
    }
 
    cout << '\n';
}

int main() {
	int N,X;
	cin >> N >> X;										
	queue <pair <int,int> > A, temp;
	for (int i=0; i<N; i++)
	{
		int temp;
		cin >> temp;
		A.push(make_pair(temp, i));
	}	

	int result[X];

	for (int i=0; i<X; i++)
	{
		int max_ = 0,flag=1;
		
		if (A.size()>=X)
		{
			for (int j=0; j<X; j++)
			{
				max_ = max(A.front().first, max_);
				temp.push(A.front());
				//cout << i+1 << " " << max_  << " " << temp.back().first << " hi " << endl;            //
				A.pop();
			}
		}
		else {
			//cout << A.size() << endl;                             //
			while(!A.empty())
			{
				//cout << j << endl;                              //
				max_ = max(A.front().first, max_);
				temp.push(A.front());
				//cout << i+1 << " " << max_ <<" " << temp.back().first << " hi " << endl;                     //
				A.pop();
			}
		}
				

		//cout << i+1 << " " << max_ << " "<<" max"<< endl;                                //
		//showQueue(temp);
		//cout << endl;
		while(!temp.empty())
		{
			
			if (temp.front().first<max_)
			{
				if (temp.front().first > 0)
					A.push(make_pair(temp.front().first-1, temp.front().second));
				else A.push(temp.front());
				temp.pop();
			}

			else{
				if (flag==0)
				{
					if (temp.front().first > 0)
						A.push(make_pair(temp.front().first-1, temp.front().second));
					else A.push(temp.front());
						temp.pop();
				}
				else {
					result[i]= temp.front().second+1;
					//cout <<i << " " << result[i] << endl;                   //
					temp.pop();
					flag = 0;
				}
			}
		}

		//showQueue(A);
		//cout << endl;
		
	}

	for (int i=0; i<X; i++)
	{
		cout << result[i] << " ";
	}
}


