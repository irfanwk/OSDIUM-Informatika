#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    double y;
    cin>>n>>y;
    if(n%5==0 && y>n+0.50)
    {
        cout<<fixed<<setprecision(2)<<y-n-0.50<<"\n";
    }
    else
    {
        cout<<fixed<<setprecision(2)<<y<<"\n";
    }
}
