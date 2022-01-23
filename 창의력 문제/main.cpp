#include <iostream>
#include<stdio.h>
using namespace std;


/*
int main(){
	int a, b, i, sum=0;
	cin>>a>>b;
	for(i=a; i<b; i++){
		cout<<i<<" + ";
		sum = sum + i;
	}
	cout<<b<<" = ";
	cout<<sum + b;
	return 0;
}
*/



/*
int main() {
	char a[20];
	int year, age;
	scanf("%s", &a);
	if(a[7]=='1' || a[7]=='2')
		year=1900+((a[0]-48)*10+(a[1]-48));
	else year=2000+((a[0]-48)*10+(a[1]-48));
	age=2019-year+1;
	printf("%d", age);
	
	if(a[17]=='1' || a[7]=='3') printf(" M\n");
	else printf(" W\n");	
	return 0;
}
*/





/*
int main() {
	char a[100], b[100];
	int res=0, cnt=0, i;
	scanf("%s", &a);
	for(i=0; a[i]!='\0'; i++){
		if(a[i]>=48 && a[i]<=57){
			res=res*10+(a[i]-48);
		}
	}
	printf("%d\n", res);
	
	for(i=1; i<=res; i++){
		if(res%i==0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
	
}
*/












