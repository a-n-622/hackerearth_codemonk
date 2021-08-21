#include<bits/stdc++.h>
using namespace std;

void multiply(long long int F[2][2],long long int M[2][2], int p);
void power(long long int F[2][2], int n, int p);

long long int incl_excl(int n,int p)
{
    long long int F[2][2];
    F[0][0]=10;
    F[0][1]=1;
    F[1][0]=-1;
    F[1][1]=0;
    if (n==0)
        return 1;
    power(F,n,p);
    return F[0][0];
}

void power( long long int F[2][2], int n, int p)
{
    if(n == 0 || n == 1)
       return;

    long long int M[2][2];
    M[0][0]=10;
    M[0][1]=1;
    M[1][0]=-1;
    M[1][1]=0;

    power(F, n / 2,p);
    multiply(F, F,p);

    if (n % 2 != 0)
        multiply(F, M,p);
}

void multiply( long long int F[2][2], long long int M[2][2], int p)
{
    long long int x = ((F[0][0] * M[0][0])%p + (F[0][1] * M[1][0])%p )%p;
    long long int y = ((F[0][0] * M[0][1])%p + (F[0][1] * M[1][1])%p )%p;
    long long int z = ((F[1][0] * M[0][0])%p + (F[1][1] * M[1][0])%p )%p;
    long long int w = ((F[1][0] * M[0][1])%p + (F[1][1] * M[1][1])%p )%p;

    if (x>=0)
        F[0][0] = x;
    else F[0][0] = x + p;
    F[0][1] = y;
    if (z>=0)
         F[1][0] = z;
    else F[1][0] = z+p;
    F[1][1] = w;
}

int main()
{
   int T;
   cin >> T;
    int  N[T];
    int p=1000000009;
    for (int i=0;i<T;i++)
   {
       cin >> N[i];
   }
   for (int i=0;i<T;i++)
   {
       int result=incl_excl(N[i],p);
       cout << result << endl;
   }

}


