
#include <bits/stdc++.h>

using namespace std;

typedef struct s{
	string b;
} adam;

void bubble_sort( adam A[ ], int n ) {
    adam temp;
    for(int k = 0; k< n-1; k++) {
        // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations

        for(int i = 0; i < n-k-1; i++) {
            if(A[ i ].b.compare(A[ i+1].b)>0 ) {
                // here swapping of positions is being done.
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
}


int main() {
	int len,idx;
	adam scam[25];
	string a;
	cin >> a >> idx;
	len=a.length();
	for (int i=0;i<len;i++)
	{
		scam[i].b=a.substr(i);
	}
	bubble_sort(scam,len);
	cout << scam[idx-1].b << endl;
}

