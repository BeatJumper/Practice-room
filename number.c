#include <stdio.h>
#include <math.h>

int main()
{
    int m, n, T1, T2;
    printf("input two numbers,m>n\n");
    while(scanf("%d,%d",&m,&n) != EOF)
    {
        T1 = (1-0.15) * sqrt(m-n) * exp(m/n);
        T2 = (1+0.3) * sqrt(m-n) * exp(m/n);
        printf("%d<T<%d", T1, T2);
        getchar();
        getchar();
    }
        return 0;

}