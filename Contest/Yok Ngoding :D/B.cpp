#include<bits/stdc++.h>
using namespace std;

int main()
{
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int n,t,a[3],tmp,sum;
        bool y;
        cin>>t;
        for(int rr=0;rr<t;rr++)
        {
                y=true;
                sum=0;
                memset(a, 0, 3*sizeof(a));
                cin>>n;
                for(int i=0;i<n;i++)
                {
                        cin>>tmp;
                        a[tmp]++;
                        sum+=tmp;
                }
                if(sum%2==0 && n!=1)
                {
                        if(a[2]%2==0)
                        {
                                if(a[1]%2==1) y=false;
                        }
                        else
                        {
                                if((2+a[1])%2!=0 || a[1]==0) y=false;
                        }
                }
                else y=false;

                if(y) cout<<"YES\n";
                else cout<<"NO\n";
        }
}
