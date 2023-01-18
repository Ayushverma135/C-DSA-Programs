#include<stdio.h>
#include<stdlib.h>
int mergesort(int arr[],int start,int end){
	if(start!=end){
		int mid=(start+end)/2;
		mergesort(arr,start,mid-1);
		mergesort(arr,mid,end);
		merge(arr,start,mid,end);
	}
	return 0;
}
int merge(int arr[],int start,int mid,int end){
	
}
int main(){
	int arr[]={1,2,3,4};
	int arr2[]={5,6,7,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	int k=0,i=0,j=0;
	int arr3[m+n];
	while(i!=n && j!=m){
		if(arr[i]>arr2[j]){
			arr3[k++]=arr2[j];
			j++;
		}
		else{
			arr3[k++]=arr[i];
			i++;
		}
		
	}
	for(;i<n;i++){
		arr3[k++]=arr[i];
	}
	for(;j<m;j++){
		arr3[k++]=arr2[j];
	}
	for(int i=0;i<(m+n);i++){
		printf("%d ",arr3[i]);
	}
	
}	
