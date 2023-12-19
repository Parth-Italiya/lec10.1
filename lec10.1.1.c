/*Q.1 Write a Program to find the cube of a given number using UDF
output:
enter a number:7
the cube is: 343
*/

#include<stdio.h>

	void cube(){
		int a;
		
		printf("enter a number:");
		scanf("%d",&a);
		printf("the cube is: %d",a*a*a);
		
	}
	void main(){
		cube();
	}
