 #include<stdio.h>
int main(){
	int i,j,n,key;
	printf("enter number of element:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++){
		key =arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j-=1;
		}
		arr[j+1]=key;
	}
	printf("Array after sorting:");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\nSubmitted by ayush verma\nCS-AI-2A\n2101641520040");
	return 0;
}
