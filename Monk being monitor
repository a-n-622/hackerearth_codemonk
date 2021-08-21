#include <bits/stdc++.h>

using namespace std;


void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
} 

void heapSort(int arr[], int n) 
{ 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    for (int i=n-1; i>0; i--) 
    { 
        swap(arr[0], arr[i]); 
        heapify(arr, i, 0); 
    } 
} 


int main() {
	int T;
	cin >> T;
	int output[T];
	for (int i=0;i<T;i++)
	{
		int N;
		cin >> N;
		long int arr[N];
		for (int j=0;j<N;j++)
			cin >> arr[j];
		sort(arr,arr+N);
		/*
		int flag=1;
		for (int j=0;j<N-1;j++)
		{
			if (arr[j]!=arr[j+1])
				{flag++;
			//	cout << "jjjjjjjo" << endl;
			}
		}
		//cout << flag << endl;
		int good [flag][2];
		flag=1;
		int counter=1;
		for (int j=0;j<N-1;j++)
		{
			if (arr[j]!=arr[j+1]){
				good[flag-1][0]=counter;
				good[flag-1][1]=arr[j];
			//	cout << "jjjjj" <<endl;
				flag++;
				counter=1;
				}
			else counter++;
			if (j==N-2){
				good[flag-1][0]=counter;
				good[flag-1][1]=arr[j];
				}
		}
		//cout << good[0] <<" "<< good[1]<<" " << good[2] <<endl;
		heapSort(good,flag);
		//cout << flag << endl;
		//cout << good[0] <<" "<< good[1]<<" " << good[2] <<endl;
		if (flag>1){
		if (good[flag-1]-good[0]>0)
			{
					output[i]=good[flag-1]-good[0];
				
			}

		else output[i]=-1;}
		else output[i]=good[0]; 
		int flag=1;
		for (int k=0;k<N-1;k++)
			{
				if (arr[k+1]>arr[k])
					flag++;
			}
		int height [flag];
		int count=0;
		for (int k=0;k<N-1;k++)
			{
				if (arr[k+1]>arr[k])
					{count++;
					height[count-1]++;}
				else height[count]++;
			}
		//cout << height[0] << " " << height [1] << height [2] <<endl;
		int min=height[0],max=height[0];
		for (int k=0;k<flag-1;k++)
		{
			//cout << height[k] << endl;
			if (height[k+1]<min)
				{
				min=height[k+1];
				max=height[k];
				}
		}

		if (min==max)
			output[i]=1;
		else output[i]=max-min; */

		//cout << arr[0] << " " << arr[1] << endl;

		int nums = 1;
		for (int j=1;j < N; j++)
		{
			if (arr[j]!= arr[j-1])
				nums += 1;
		}

		//cout << nums << endl;

		int hee[nums];
		for (int j=0; j<nums ;j++)
			hee[j] = 0;
		int count = 1;
		int flag = 0;
		for (int j=0;j < N-1; j++)
		{
			if (arr[j]!= arr[j+1])
				{
					//cout << arr[j] << " " << arr[j+1] << endl;
					
					hee[flag] = count;
					flag += 1;
					count = 1;
				}
			else 
				count += 1;
		}

		hee[nums-1] = count; 

		//cout << hee[0] << " " << hee[1] << " " << hee[2] << endl;

		int min = 100000, max = 0;

		for (int j=0;j < nums; j++)
		{
			if (hee[j] < min)
				min = hee[j];
			if (hee[j] > max)
				max = hee[j];
		}
		if (min >= max)
			output[i] = -1;
		else
			output[i] = max - min;
		

	}
	for (int i=0;i<T;i++)
	{
		cout << output[i] << endl;
	}
}


