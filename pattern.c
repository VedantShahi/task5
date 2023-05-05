#include<stdio.h>
int main(){
	int n;
	printf("enter n:-");
	scanf("%d",&n);
	int start,end,size;
	start=0;
	
	size=2*n-1;
	end=size-1;
	int i,j;
	int a[size][size];
	while(n!=0){
		for(i=start;i<=end;i++){
			for(j=start;j<=end;j++){
				if(i==start || i==end || j==start || j==end){
					a[i][j]=n;
					
				}
			}
		}
		--n;
		++start;
		--end;
	}
	for(i=0;i<=size-1;i++){
			for(j=0;j<=size-1;j++){
				printf("%d ",a[i][j]);			
		    }
			printf("\n");
			
	}
	
}
