#include<stdio.h>>

int main(){

int i,j,k,n,m,mark=0,t;

printf("enter the size of stolarsky array you want\n");
scanf("%d %d",&n,&m);

int a[n][m];

a[0][0]=1,a[0][1]=2;

for(i=0;i<n;i++){

if(i>0){

for(t=1;;t++){
mark=0;

for(j=0;j<i;j++){
    for(k=0;k<m;k++){

    if(a[j][k]==t){
    mark=1;
    break;}

}
              if(mark==1){
                    break;}

        }

        if(mark==0){
                a[i][0]=t;
        break;}
   }

for(t=a[i][0]+1;;t++){
mark=0;

for(j=0;j<i;j++){
    for(k=0;k<m;k++){

    if(a[j][k]==t){
    mark=1;
    break;}

}
              if(mark==1){
                    break;}

        }

        if(mark==0){
                a[i][1]=t;
        break;}
   }


}


    for(j=2;j<m;j++){

        a[i][j]=a[i][j-1]+a[i][j-2];

    }
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
 printf("%d ",a[i][j]);
}
printf("\n");
}
}

