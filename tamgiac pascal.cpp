#include<stdio.h>
int main(){
	int a[100],b[100],i,j,k,l,m,n;
	printf("thich so may?\n");
	scanf("%d",&n);
for(j=0;j<=n;j++){
	for(m=n;m>=j;m--)
	printf("   ");
	for(i=0;i<=j;i++){
	a[0]=1;
	a[1]=2;
	b[0]=1;
   	if(i%2!=0) a[i]=0;
    if(i%2==0&&i>=2) a[i]=b[i]+b[i-2];
	if(i==j&&j%2==0) a[i]=2*b[i-2];
	a[0]=1;
	if(a[i]==0) printf("   ");
	else printf("%3d",a[i]);

}   
	for(l=0;l<j;l++){
		a[1]=0;
	if(a[j-l-1]==0) printf("   ");
	else printf("%3d",a[j-l-1]);}
	for(k=1;k<=j;k++)
    b[k]=a[k];
    
	printf("\n");	
	}
	
	}

