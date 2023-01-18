#include<stdio.h>
int main(){
	int n,i,j,temp=0;
	
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Array after sorting:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nSubmitted by ayush verma\nCS-AI-2A\n2101641520040");
	return 0;
}
