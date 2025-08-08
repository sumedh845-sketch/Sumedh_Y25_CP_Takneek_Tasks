#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int X,Y,Z,A,B,C;
        cin>>X>>Y>>Z>>A>>B>>C;
   
        int h1=min(Z,C);
        Z=Z-h1;
   
        Y=Y+Z;
        int h2=min(Y,B);
        Y=Y-h2;
   
        X=X+Y;
        int h3=min(X,A);
   
        cout<<(h1+h2+h3)<<endl;
        
    }

   
}
