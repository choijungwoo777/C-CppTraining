#include<iostream>
#include<stdio.h>
#include<string.h>
//47.º° Âï±â 

void prntStar(int n){
	int i;
	for(i=1; i<=n; i++){
		printf("*");
	}
}

int main() {
	int a, j;
	scanf("%d", &a);
	for(j=1; j<=a; j++){
	prntStar(j);
	printf("\n");
}
	return 0;
}

