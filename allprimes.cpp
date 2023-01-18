#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int* arr=(int*)malloc(sizeof(int)*100);
	int x,y,k;
	k=0;
	printf("enter the range:::");
	scanf("%d %d",&x,&y);
	for(int i=x;i<=y;i++){
		int flag=0;
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			arr[k++]=i;
		}
	}
	for(int i=0;i<k;i++){
		printf("%d ",arr[i]);
	}
	free(arr);
	return 0;
}
