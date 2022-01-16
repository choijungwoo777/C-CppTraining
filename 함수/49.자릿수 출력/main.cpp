#include<iostream>
#include<string.h> 
////49.자릿수 출력
//int digit(int n){
//	if(n<10) return 1;
//	else if(n<100) return 2;
//	else if(n<1000) return 3;
//	else if(n<10000) return 4;
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//		printf("%d\n", digit(n));
//		return 0;
//}


#include<stdio.h>
#include<string.h>
struct Student{
char name[20];
int mat, eng;
};
int main(){
Student s1;
strcpy(s1.name, "Jhon");
s1.mat=90;
s1.eng=95;
printf("%s\n", s1.name);
printf("%d\n", s1.mat);
printf("%d\n", s1.eng);
return 0;
}

