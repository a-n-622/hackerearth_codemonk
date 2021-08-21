
#include <stdio.h>
#include <stdlib.h>

int* shift (int array[], int n, int k)
{
    int temp, *ar;
    ar= (int *)malloc(n*sizeof(int));
    for (int i=0;i<n;i++)
    {
        ar[(i+k)%n]=array[i];
    }
    return ar;
}

int main()
{
    int T;
    scanf("%d",&T);
    int **array;
    array = (int **) malloc(T*sizeof (int *) );

    for (int i=0;i<T;i++)
        array[i]=(int *)malloc(100000*sizeof(int));
      int n_[T];
    for (int i=0;i<T;i++)
    {
        int N,K;
        scanf("%d%d",&N,&K);
        n_[i]=N;

        for (int j=0;j<N;j++)
        {
            scanf("%d",&array[i][j]);
        }
        //
        array[i]=shift(array[i],N,K);

	}
    for (int i=0;i<T;i++)
    {
        for(int j=0;j<n_[i]-1;j++)
        {
            printf("%d ",array[i][j]);
        }
         printf("%d\n",array[i][n_[i]-1]);
    }
}
