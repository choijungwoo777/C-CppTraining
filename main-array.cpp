#include<iostream>
#include<stdio.h>
#include<string.h>

//**********문자열 길이********** 

//int main() {
//	char a[20];
//	int n;
//	scanf("%s", &a);
//	n=strlen(a);
//	printf("문자열 길이=%d\n", n);
// 
//	return 0;
//}





//**********36. 배열의 역순 출력********** 
//int main() {
//	int a[200];
//	int n, i;
//	scanf("%d", &n);
//	for(i=0; i<n; i++){
//		scanf("%d", &a[i]);
//	}
//	for(i=n-1; i>=0; i--){
//		printf("%d", a[i]);
//	}
//	
//	return 0;
//} 





//**********37. 배열의 회전********** 

//#include<stdio.h>
//int arr[10];
//int main(){
//	int i, j, k, tmp;
//	for(i=0; i<9; i++){
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &k);
//	for(i=1; i<=k; i++){
//		tmp=arr[0];
//		for(j=0; j<8; j++){
//			arr[j]=arr[j+1];
//		}
//		arr[j]=tmp;
//	}
//	for(i=0; i<9; i++){
//		if(arr[i]>0) printf("%d ", arr[i]);
//	}	
//	return 0;
//}





//**********41. A를 #으로********** 

//int main() {
//	char str[100];
//	int n, i;
//	scanf("%s", &str);
//	
//	n=strlen(str);
//	for(i=0; i<n; i++){
//		if(str[i]=='A') str[i]='#';
//	}
//	printf("%s\n", str);
//	
//	return 0;
//}





//**********42. 2차원 배열 출력 1********** 

//int a[11][11];
//int main() {
//	int b, i, j, k=1;
//	scanf("%d", &b);
//	for(i=0; i<b; i++) {
//		for(j=b-1; j>=0; j--) {
//			a[j][i]=k;
//			k++;
//		}
//	}
//	for(i=0; i<b; i++) {
//		for(j=0; j<b; j++) {
//			printf("%3d",a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//} 



















