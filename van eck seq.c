#include<stdio.h>

int main(){

int i,j,k,n;

printf("enter the terms of van eck sequence you want \n");
scanf("%d",&n);

int a[n];
a[0]=0;
a[1]=0;
a[2]=1;

for(i=2;i<n-1;i++){
        k=0;

    for(j=i-1;j>=0;j--){
        if(a[j]==a[i]) {
            k=j;
            break;
        }
    }

    if(k!=0) a[i+1]=i-k;
    else a[i+1]=0;
}

for(i=0;i<n;i++){
printf("%d ",a[i]);
}

}
