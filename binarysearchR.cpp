#include<stdio.h>
int binarysearch(int first,int last,int key,int arr[]){
	int mid=(first+last)/2;
	if(arr[mid]==key){
		return mid;
	}
	if(first==last){
		return -1;
	}
	if(arr[mid]<key){
		return binarysearch(mid+1,last,key,arr);
	}
	else if(arr[mid]>key){
		return binarysearch(first,mid,key,arr);
	}
}
int main(){
	int arr[]={1,3,5,7,9,10,30,40,56};
	int key=40;
	int first=0;
	int last=sizeof(arr)/sizeof(arr[0])-1;
	int idx=binarysearch(first,last,key,arr);
	printf("%d",idx);
}
