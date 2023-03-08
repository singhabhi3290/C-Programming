#include <stdio.h>
int main() {
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("a is greater");
	}
	if(a<b){
		printf("b is greater");
	}
	if(a==b){
		printf("Both are equal");
	}
	return 0;
}
