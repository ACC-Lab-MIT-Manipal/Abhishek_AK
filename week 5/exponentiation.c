#include<stdio.h>
#include <math.h>
int main()
{
    int b = printf("enter base: ");
    scanf("%d",&b);
    int e = printf("enter exponentiation: ");
    scanf("%d",&e);
    int n = printf("enter modulus: ");
    scanf("%d",&n);
    int result;

    if (e > 0)
    {
        result = pow(b,e);
        int x = result % n;
        printf("result : %d",x);
    }
    else if(e == 0){
        printf("result : %d",1);
    }

}
