
#include<stdio.h>
#include<conio.h>
main()
{int i,j,k,n;
float a[10][10],b[10][10],c[10],x=1;
printf("nhap bac cua ma tran nghich dao: ");
scanf("%d",&n);
printf("\n nhap cac phan tu cua ma tran\n");
for(i=0;i<=n-1;i++)
for(j=0;j<=n-1;j++)
{printf("a[%d][%d]:",i+1,j+1);
scanf("%f",&a[i][j]);}
printf("ma tran de bai la \n");
{for(i=0;i<=n-1;i++)
{for(j=0;j<=n-1;j++)
printf("%4.1f ",a[i][j]);
printf("\n");}
printf("ma tran don vi la\n");
for(i=0;i<=n-1;i++)
{for(j=0;j<=n-1;j++)
{if(j==i) b[i][j]=1; else b[i][j]=0;
printf("%4.1f ",b[i][j]);}
printf("\n");}
//giai
for(k=1;k<=n-1;k++)
for(i=k;i<=n-1;i++)
{c[i]=(float)a[i][k-1]/a[k-1][k-1];
for(j=0;j<=n-1;j++)
{
a[i][j]=a[i][j]-c[i]*a[k-1][j];
b[i][j]=b[i][j]-c[i]*b[k-1][j];
}}}
//tinh det
for(i=0;i<=n-1;i++)
{x=a[i][i]*x;}
printf("\ndinh thuc ma tran tren la %.1f",x);
if (x==0) printf("\nma tran khog kha nghich:>>");
else
{for(k=n-2;k>=0;k--)
{for(i=k;i>=0;i--)
{c[i]=(float)a[i][k+1]/a[k+1][k+1];
for(j=0;j<=n-1;j++)
{a[i][j]=(float)a[i][j]-c[i]*a[k+1][j];
b[i][j]=(float)b[i][j]-c[i]*b[k+1][j];
}}}

for(i=0;i<=n-1;i++)
{c[i]=a[i][i];
for(j=0;j<=n-1;j++)
{a[i][j]=(float)a[i][j]/c[i];
b[i][j]=(float)b[i][j]/c[i];}}
//ket luan
for(i=0;i<=n-1;i++)
{for(j=0;j<=n-1;j++)
//printf("%4.1f ",a[i][j]);
printf("\n");}
printf("bien doi gauss-jordan\ndap an la\n");
for(i=0;i<=n-1;i++)
{for(j=0;j<=n-1;j++)
printf("%4.4f ",b[i][j]);
printf("\n");}
printf("\ndap so dep hon, de nhin hon la:\n");
printf("1/%.0f*\n",x);
for(i=0;i<=n-1;i++)
{for(j=0;j<=n-1;j++)
printf("%5.0f ",x*b[i][j]);
printf("\n");}
}
getch();
} 
