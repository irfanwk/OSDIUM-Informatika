#include<stdio.h>

int main()
{
        int t,n;
        scanf("%d", &t);
        while(t--)
        {
                scanf("%d", &n);
                int a[n+5],tmp=n;
                for(int i=1;i<=n;i++)
                {
                        scanf("%d", &a[i]);
                }
                for(int i=1;i<=n/2;i++)
                {
                        printf("%d %d ", a[i], a[tmp]);
                        tmp--;
                }
                if(n%2==1) printf("%d ", a[n/2+1]);
                printf("\n");
        }
}
