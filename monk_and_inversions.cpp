
#include <iostream>

using namespace std;

int check (int **matrix, int N)
{
	int count=0;
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
		{
			for (int m=i;m<N;m++)
			{
				for (int n=j;n<N;n++)
				{
					if (matrix[i][j]>matrix[m][n])
						count++;
				}
			}
		}
	}
	return count;
}

int main() {
	int T;
	cin >> T;
	int val[T];
	for (int i=0;i<T;i++)
	{
		int N;
		cin >> N;
		int** matrix=new int*[N] ;

		for (int x=0;x<N;x++)
        {
            matrix[x]= new int [N];
        }
		for (int j=0;j<N;j++)
		{
			for (int k=0;k<N;k++)
			{
				cin >> matrix[j][k];
			}
		}
		val[i]= check(matrix,N);

	}
	for (int i=0;i<T;i++)
	{
		cout << val[i] << endl;
	}
}
