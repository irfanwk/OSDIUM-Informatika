#include<bits/stdc++.h>
using namespace std;

int main()
{
        long long a,b,c;
        scanf("%lld %lld %lld", &a, &b, &c);
        for(long i=1;i<=c;i++)
        {
                if(i%a==0 && i%b==0)
                {
                        printf("FizzBuzz\n");
                }
                else if(i%a==0)
                {
                        printf("Fizz\n");
                }
                else if(i%b==0)
                {
                        printf("Buzz\n");
                }
                else
                {
                        printf("%lld\n", i);
                }
        }
}
