#include<stdio.h>
#include<math.h>

// radical of a number is defined as
// radical(n) = product of distinct primes diving n

int isprime(int n)
{

            int c=1,i,m=sqrt(n)+1;

            if(n==2||n==3)
                c=1;
            else
            {
            if(n%2==0||n%3==0) 
                c=0;
            else
            {

            for(i=5;i<m;i=i+6)
            {

            if(n%i==0||n%(i+2)==0)
            {
            c=0;
            break;
            }

            }

            }
}

return c;

}

int radical(int n)
{

int m=sqrt(n)+1,j=1,i=2,k=1;

while(i<=m){

            if(isprime(i)==1){
                 if(n%i==0){

                    if(i!=j)
					{
                        k*=i;
                        j=i;
                    }
                    n/=i;

                 }

                 else i+=1;
                 }
            else i+=1;
            }

k=k*n;

return k;

}

int main(){

int n,rad;

printf("which number do you want the radical of\n");
scanf("%d",&n);

rad = radical(n);

printf("radical(%d) = %d",n,rad);
}

