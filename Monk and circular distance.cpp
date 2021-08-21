#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


int binarySearchCount(long long int arr[], int n, long long int key)
{
    int left = 0;
    int right = n - 1;
 
    int count = 0;
 
    while (left <= right) {
        int mid = (right + left) / 2;
 
        // Check if middle element is
        // less than or equal to key
        if (arr[mid] <= key) {
 
            
            count = mid + 1;
            left = mid + 1;
        }
 
        // If key is smaller, ignore right half
        else
            right = mid - 1;
    }
 
    return count;
}


int bin_search (long long int V[], long long int r, int begin, int end, int size)
{
	if (begin>end)
		return 0;
	//int size = V.size();
	if (V[0] > r)
		return 0;
	if (V[size-1]<r)
		return size;
	
	int beg = begin, en = end;
	int mid = beg + (en - beg)/2 ; 
	if (V[mid] > r){
		if (V[mid-1]<=r){
			//cout << "1" <<" " << mid << endl;
			return mid;
		}

		return bin_search(V, r, beg, mid-1, size);
	}
	if (V[mid] <= r){
		if (V[mid+1] >r){
			//cout << "2" << endl;
			return (mid+1);
		}
		if (mid==beg){
			//cout << "3" << endl;
			return size;
		}

		return bin_search(V,r,mid+1, en, size);
	}
	
	
}

int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  

	int N;
	cin >> N;										
	long long int radius[N];
	for (int i=0 ; i<N ; i++)
	{
		long long int x,y, rad;
		cin >> x >> y;
		rad = ceil(pow(x*x+y*y, 0.5));
		
		radius[i] = rad;
	}

	sort(radius, radius+N);
	
	int q;
	cin >> q;
	int result[q];
	for (int i=0; i<q ; i++)
	{
		long long int query;
		cin >> query;
		result[i] = bin_search(radius, query, 0, N-1, N);
		//result[i] = binarySearchCount(radius, N, query);
	}

	

	for (int i=0 ; i<q ; i++)
		cout << result[i] << "\n";
	


}


