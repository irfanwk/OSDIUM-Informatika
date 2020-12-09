#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    (n%2==0 && n!=1) ? printf("White\n") : printf("Black\n");
}
