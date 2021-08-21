#include <iostream>
#include <bits/stdc++.h>

using namespace std;
queue <pair <int,int> >q1, q2, q3, q4, output_;
queue <int> school;

int check(int num)
{
	queue <int> temp = school;
	while(!temp.empty())
	{
		if (temp.front()!=num)
			temp.pop();
		else return 1;
	}
	return 0;
}

int main() {
	int Q;	
	
	cin >> Q;
	char inp;
	int count = 0;
	for (int i=0; i<Q; i++)
	{
		cin >> inp;
		pair <int,int> temp; 
		if (inp =='E')
		{
			cin >> temp.first >> temp.second;
			// /*
			if (temp.first==1)
				q1.push(temp);
			else if (temp.first==2)
				q2.push(temp);
			else if (temp.first==3)
				q3.push(temp);
			else q4.push(temp);


			if (school.empty())
				school.push(temp.first);
			else if (check(temp.first)==0)
			{
				school.push(temp.first);
			}
		}

		if (inp == 'D')
		{
			if (school.front()==1)
			{
				output_.push(q1.front());
				q1.pop();
				if (q1.empty())
					school.pop();
			}
			else if (school.front()==2)
			{
				output_.push(q2.front());
				q2.pop();
				if (q2.empty())
					school.pop();
			}
			else if (school.front()==3)
			{
				output_.push(q3.front());
				q3.pop();
				if(q3.empty())
					school.pop();
			}
			else if (school.front()==4)
			{
				output_.push(q4.front());
				q4.pop();
				if (q4.empty())
					school.pop();
			}
		}
	}
	//cout << output_.size() << endl;
	while(!output_.empty())
	{
		cout << output_.front().first << " " << output_.front().second << endl;
		output_.pop();
	}


}

