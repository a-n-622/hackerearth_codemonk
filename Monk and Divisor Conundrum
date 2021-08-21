#include <iostream>
#include <bits/stdc++.h>
/*
	approach:
	first, something like a hash array was filled to indicate which numbers are there (while inputting)
	then, a sieve of erasthotenes type approach was taken to find out how many divisors of that number is there
	then, according to question, if both a and b are having common factor/divisor, subtract that. 
*/
using namespace std;
long int GCD(long int a,long int b){   // for calculating GCD
 	if(b==0)
        return a;
 	else
        return GCD(b,a%b);


}
int main() {
	int N;
	cin >> N;
	array <long int, 200001> arr, div;          // arr fills up according to input, and div fills up in sieve
	arr.fill(0);                              // using array stl, initialising to zero
	div.fill(0);

	long int max_ = 0;
	for (int i=0; i<N ;i++)
	{
		long int temp;
		cin >> temp;
		if (temp>max_)
			max_ = temp;
		arr[temp] += 1;	         // filling the 'arr' array according to input to indicate if number is there or not
	}
	
	for(int i =1;i<=max_;i++){    // sieve 
		int j = i;
		for(;j<=max_;j=j+i){
			div[i] = div[i]+arr[j];
		}
	}
	
	int T;
	cin >> T;
	
	
	long int out[T];
	
	for (int i=0; i<T; i++)
	{
		long int p,q;
		cin >> p >> q;
		

		long int k = 0;
		k = GCD(p,q); 

		if (k==0)
			k = a*b;
		long int lcm = a*b/k, z = 0, x = div[p], y=div[q];
		if (lcm<max_)
			z = div[lcm];
		
		out[i] = x + y - z;                    // calculating final value
		

	}

	for(int i=0; i<T; i++)
		cout << out[i] << endl;

	return 0;
}

