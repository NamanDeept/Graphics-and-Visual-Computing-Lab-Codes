 #include <iostream>
#include<bits/stdc++.h>
#include<math.h>
#define ll long long int
using namespace std;
int main() {

     ll n;
     cin >> n;
     multiset < ll > s;
     multiset < ll > :: iterator it;
     ll k,ans=0;
     cin >> k;
     for( ll i=0 ; i< n ;i++)
     {
         ll a,f;
         cin  >> a;
        if(s.size() >= 1)
        {


         f=(long long int)(ceil((k*1.0)/(a*1.0)));
         it=s.lower_bound(f);
         //cout << a <<"^^" <<endl;
         //cout << *it <<"&&" <<endl;
         if( it != s.end())
         {
             ll in=distance(s.begin(),it);
             //cout << in << " @@" << endl;
             in=s.size()-in;
             //cout << in << " **" << endl;
             ans=ans+in;
         }
        }
        s.insert(a);



     }
     cout << ans << endl;
     return 0;


}

