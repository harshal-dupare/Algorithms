#include <stdio.h>
#include <stdlib.h>

//this code genartaes the sequence of numbers in which next number in the sequence represents how many times did the nth last number appeared between it and last number

int main()
{

int n,i,j,m,k;
printf("give the size of starting sequence and the size of extended sequence:");
scanf("%d %d",&n,&m);

int a[m];

printf("enter the sequence of %d numbers:",n);

for(j=0;j<n;j++){
    scanf("%d",&a[j]);
}

for(i=0;i<m-n;i++){
        k=0;
    for(j=0;j<n+i;j++){
        if(a[j]==a[i]) k+=1;
        }
    a[n+i]=k;
}

for(i=0;i<m;i++){
    printf("%d ",a[i]);
}
}
