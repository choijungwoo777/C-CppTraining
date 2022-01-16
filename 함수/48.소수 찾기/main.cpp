#include<iostream>
#include<stdio.h>
#include<string.h>
//48.소수 찾기

bool isPrime(int n){
	int i;
	if(n==1) return false;
	for(i=2; i<n; i++){
		if(n%i==0) return false;
	}
	return true;
}


int main() {
	int n, i, a;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a);
		if(isPrime(a)) printf("%d ", a);
	}
	return 0;
}
