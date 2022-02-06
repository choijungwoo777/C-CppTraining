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





/*
int main() {
	char a[200], b[200];
	int i, p=0;
	gets(a);
	
	for(i=0; a[i] != '\0'; i++){
		if(a[i] != ' '){
			if(a[i]>=65 && a[i]<=90){
				b[p++]=a[i]+32; 
			}
			else b[p++]=a[i];
		}
	}
	b[p]='\0';
	printf("%s\n", b);
	
	return 0;	
}
*/





/*
int main(){
	int cnt = 0;
	char a[30];
	scanf("%s",&a);
	for(int i = 0; i < 30; i++){
		if(a[i] == 40) cnt++;
		if(a[i] == 41)
		if((--cnt) < 0) break;
	}
	if(cnt==0) {
		printf("YES");
	}
	else printf("NO");
	return 0;
}
*/





/*
int main(){
	int a, cnt;
	scanf("%d",&a);
	for(int i = 1; i <= a; i++)	{
		cnt = 0;
		for(int j = 1; j <= i; j++)
		if(i%j==0) cnt++;
		printf("%d ",cnt);
}
return 0;
}
*/





/*
int dight_sum(int x){
	int tmp, sum=0;
	while(x>0){
		tmp=x%10;
		sum+=tmp;
		x=x/10;
	}
	return sum;
}

int main() {
	int n, num, i, sum, max=-2147000000, res;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &num);
		sum = dight_sum(num);
		if(sum>max){
			max=sum;
			res=num;
		}
		else if(sum==max){
			if(num>res) res=num;
		}
	}
	printf("%d", res);
	return 0;
}
*/




/*
int main(){
	int n, i, cnt=0, tmp;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		tmp=i;
		while(tmp>0){
			tmp=tmp/10;
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}
*/





/*
int main() {
	int n, sum=0, cnt=1, d=9, res=0;
	scanf("%d", &n);
	while(sum+d<n){
		res=res+(cnt*d);
		sum=sum+d;
		cnt++;
		d=d*10;
	}
	res=res+((n-sum)*cnt);
	printf("%d\n", res);
	return 0;
}
*/




/*
int ch[10];
int main() {
	int i, digit, max=-2147000000, res;
	char a[200];
	scanf("%s", &a);
	
	for(i=0; a[i] != '\0'; i++){
		digit=a[i]-48;
		ch[digit]++;
	}
	
	for(i=0; i<=9; i++){
		if(ch[i]>max){
			max=ch[i];
			res=i;
		}
	}
	printf("%d\n", res);
	
	return 0;
}
*/



