#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a<0){
		printf("Number is negative");
	}
	if(a>0){
		printf("Number is positive");
	}
	if(a==0)
		printf("Zero");
}
