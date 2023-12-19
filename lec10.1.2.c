/*Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF
output:
enter a number: 15
the number is devisable by 3 or 5
*/
#include<stdio.h>
	void xyz(){
	int a;
	printf("enter a number: ");
	scanf("%d",&a);
	if(a%3==0 && a%5==0){
		printf("the number is devisable by 3 or 5");
	}else{
		printf("the number is not devisable by 3 or 5");
	}
}
void main(){
	xyz();
}

