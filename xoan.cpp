#include<stdio.h>
int show(int n){
int arrRunner=0;
int i=0, j=0, top=0, bottom=n-1, right=n-1, left=0, matrix[n][n], arr[n*n];
//gan so cho mang
for(i=0;i<n*n;i++){
	arr[i]=i;
}
i=0;
j=0;
//gan mang cho ma tran
while(arrRunner<n*n){
	for(j=left;j<=right;j++){
		matrix[i][j]=arr[arrRunner];
			//printf("%d ", matrix[i][j]);
			//printf("%d %d  ", i, j);
		arrRunner++;
		if(arrRunner>n*n-1) break;
	}
	j--;
	top++;
	for(i=top;i<=bottom;i++){
		matrix[i][j]=arr[arrRunner];
			//printf("%d ", matrix[i][j]);
			//printf("%d %d  ", i, j);
		arrRunner++;
		if(arrRunner>n*n-1) break;
	}
	i--;
	right--;
	for(j=right;j>=left;j--){
		matrix[i][j]=arr[arrRunner];
			//printf("%d ", matrix[i][j]);
			//printf("%d %d  ", i, j);
		arrRunner++;
		if(arrRunner>n*n-1) break;
	}
	j++;
	bottom--;
	for(i=bottom;i>=top;i--){
		matrix[i][j]=arr[arrRunner];
			//printf("%d ", matrix[i][j]);
			//printf("%d %d  ", i, j);
		arrRunner++;
		if(arrRunner>n*n-1) break;
	}
	i++;
	left++;	
}
printf("\n");
for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d ", matrix[i][j]);
		}
		printf("\n");
	}
return 0;	
}
int main(){
	show(8);
	show(13);
}
