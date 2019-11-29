 #include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void find(ll prime[])
{
    for(ll i=2; i*i<= 100000; i++)
        {   if(prime[i]==0)
            {   for(ll j=i*i; j<=10000; j=j+i)
                {
                    prime[j]=1;


                }
            }
        }

}

int main()
{
    ll t;
    ll prime[100000]={0};
    find(prime);
    cin >> t;
    while(t--)
    {
        ll l,r;
        cin >> l >> r;

        ll ans=0;
        for(ll i=l ;i<=r; i++)
        {

            if(prime[i]==0)
                ans++;

        }

        cout << ans << endl;
    }


    return 0;
}

