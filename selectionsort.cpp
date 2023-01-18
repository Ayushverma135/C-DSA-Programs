#include<stdio.h>
int main(){
	int n,i,j,min,temp;
	printf("enter the number of element:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	printf("Array after sorting:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nSubmitted by ayush verma\nCS-AI-2A\n2101641520040");
	return 0;
}
