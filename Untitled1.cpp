#include<stdio.h>
int main(){
	int arr[]={1,2,3};
	int *ptr=&arr[0];
	printf("%d",*++ptr);
}
