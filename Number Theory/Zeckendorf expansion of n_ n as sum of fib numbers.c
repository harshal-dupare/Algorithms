#include<stdio.h>

int main(){

int a,n,b,c,temp;

printf("give number of which fib decomposition is required\n");
scanf("%d",&n);

printf("%d",n);

c=0;

while(n>0){

a=1,b=1;

while(b<=n){
        temp=a;
        a=b;
        b=temp+a;
}

n=n-a;
c+=1;

if(c>1) printf(" + ");
else printf(" = ");

printf("%d",a);

}

}
