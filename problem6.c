/*
Problem 6: Project Euler
Shan Sikdar
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <stdio.h>
#include <math.h>

int main(){

	int i;
	int sum = 0;
	int sum2 = 0;

	for(i = 1; i <= 100; i++){
		sum += i;
		sum2 += i*i;
	}
	sum = sum* sum;
	
	printf("%d",sum - sum2);

}
