#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int i,j,sum=0,ans=0,dif;

    unordered_map<int ,int> ma;
    int l=n/2 +1;
    ma[0]=1;
    for(int i=1; i<=l; i++)
    {
        sum+=i;
        dif=sum-n;
        if(ma.find(dif)!=ma.end() && i-j >=2)
            ans++;
        ma[sum]=1;
    }
    cout<<ans;
}

