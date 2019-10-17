#include<stdio.h>

int main()

{

    int m,a,b,s=0,n,temp;

    printf("of which number do you want fib successor of\n");
    scanf("%d",&n);
    m=n;
    while(n>0)
        {

            a=1,b=1;

            while(b<n){

                    temp=a;
                    a=b;
                    b=a+temp;

            }

        n=n-a,s=s+b;
}

printf("fibonacci successor of %d is %d",m,s);

}
