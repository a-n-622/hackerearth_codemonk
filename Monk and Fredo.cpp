#include<bits/stdc++.h>
#define dd double
#define ll long long

using namespace std;

ll g, x, y;

void extendedEuclid(ll A,ll B) {

    if(B == 0) {

        g = A;

        x = 1;

        y = 0;

    }

    else {

        extendedEuclid(B, A%B);

        ll temp = x;

        x = y;

        y = temp - (A/B)*y;

    }

}

int main()

{

    int q;

    cin>>q;
   //very solid approach using extended euclid and modulo inverse  -- uncomment the commented section
    while(q--)

    {

        ll a,b,d,e=0;

        cin>>a>>b>>d;

        extendedEuclid(a,b);

    if(d%g !=0){
	  cout<<"0\n";
	  continue;
	  }

        ll k1=ceil(dd(-x)*(dd(d)/dd(b))),k2=floor((dd)y*((dd)d/(dd)a));  // this line is seeing how many values can be handled by a and b

    if(k1<=k2)
        cout<<k2-k1+1<<"\n";    

    else
        cout<<"0\n";

    }



   
    return 0;

}
