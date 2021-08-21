#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m, g;
	cin >> n >> m >> g; 										
	int time[n], dry[m], diff[n-1];
	for (int i=0 ; i<n ; i++)
	{
		cin >> time[i];
	}

	for (int i=0; i<n-1 ; i++)
	{
		diff[i] = time[i+1] - time[i];
	}

	for (int i=0 ; i<m ; i++)
	{
		cin >> dry[i];
	}
	sort(diff, diff + (n-1));
	sort(dry, dry+m);

	int collected=0;
	/*
	if (g<=n)
		{
		for (int i=0; i<g; i++)
		{
			for (int j=dry_index; j<m ; j++)
			{
				if (dry[j] <= (time[i+1]-time[i]))
					{dry_index += 1;
				else 
					break;

			}
		}
		}
	else
		{
		for (int i=0; i<n; i++)
		{
			for (int j=dry_index; j<m ; j++)
			{
				if (dry[j] <= (time[i+1]-time[i]))
					dry_index += 1;
				else 
					break;

			}
		}
		}
	*/

	for (int i=0 ; i<m ; i++)
	{
		if (dry[i] <= diff[n-2])
			collected++;
		else break;
	}
	cout << collected; 

}

