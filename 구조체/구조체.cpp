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
	printf("    name      math     ehg\n"); //±×³É ²Ù¹Ò 
	printf("[   %s   ", s1.name);//             ''
	printf("|   %d   ", s1.mat);//              ''
	printf("|   %d   ]", s1.eng);//             ''
return 0;
}

