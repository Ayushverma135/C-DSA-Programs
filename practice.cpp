#include<stdio.h>
int main(){
	int i=0,j=0,k=0;
	int arr[]={1,3,8};
	int arr2[]={2,4,6};
	int c=sizeof(arr)/sizeof(arr[0]);
	int h=sizeof(arr2)/sizeof(arr2[0]);
	int x[c+h];
	while( i<c && j<h){
		if(arr[i]>=arr2[j]){
			x[k++]=arr2[j++];
		}
		else{
			x[k++]=arr[i++];
		}
	}
	for(;i<c;i++){
		x[k++]=arr[i++];
	}
	for(;j<h;j++){
		x[k++]=arr2[j++];
	}
	for(int i=0;i<(c+h);i++){
		printf("%d ",x[i]);
	}
}
