#include <bits/stdc++.h>
#include <iostream>

using namespace std;

bool checkPegs(long long int array[], int size)
{

  for (int i = 0; i < size; i++)
  {
      if(array[i])
          return false; // return false at the first found

  }
  return true; //all elements checked
}


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//cout << "HAHA" << "\n";

	int N;
	scanf("%d", &N);

	//printf("%d", N);

	long long int ptr[N];
	//ptr = (long long int*)malloc(N*sizeof(long long int));
	//ptr_ = (long long int*)malloc(N*sizeof(long long int));
	for (int i=0; i<N; i++)
	{
		scanf("%lld", &ptr[i]);
		//printf("HAHAHA");
		
	}
	//cout << ptr[0];

	int flag = 1;
	vector <pair<long long int, int> > vp;
	for (int i=1 ;(flag==1) ;i++ )
	{
	    long long int temp[N];
		int beep[N], k=0;

		
		for (int j=0; j<N; j++)
		{
			//printf("%lld",ptr[j]);
			
			long long int f = 0;
			f = (long long int) round(pow(100000, i));	
			temp[j] = ptr[j] % f;
			beep[j] = j;
			
		}

		vp.clear();

		for (int j=0; j<N; j++)
		{
			vp.push_back(make_pair(temp[j], beep[j]));
		}


		sort(vp.begin(), vp.end());

		for (int j=0; j<N; j++)
		{

			printf("%lld ",ptr[vp[j].second]);
		}
		printf("\n");

		
		for (int j=0; j<N; j++)
		{
			if ((temp[j]==ptr[j])&&(j==N-1))
				flag = 0 ;
			
		}

	}


}

