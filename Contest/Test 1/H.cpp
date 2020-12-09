#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,m;
    scanf("%lld %lld", &n, &m);
    printf("%lld", m % ll(pow(2,n)));
}
