#include<stdio.h>
#include<math.h>
int main()
{
    double n,k,p;

    while(scanf("%lf %lf",&n,&p)!=EOF)
    {
    k=pow(p,1/n);
    printf("%.0lf\n",k);
    }
    return 0;
}
