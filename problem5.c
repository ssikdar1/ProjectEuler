#include <stdio.h>

int isPrime(int number){
	if(number <= 1){
		return 0;
	}
	
	int i;
	for(i = 2; i < number; i++){
		if(number%2 == 0){
			return 0;
		}
	}
	return 1;
}

int main(){

	int range = 20;
	
	int numbers[20] = {0}; 
	
	int i = 1;
	for(i = 1; i <= 20; i ++){
		numbers[i] = i;
	}
	int answer = 1;

	//loop through numbers array until all elements are 1
	int j = 0;
	for(j = 0; j < 20; j ++){
		if(isPrime(numbers[j]) == 1){ //if prime 
			int prime = numbers[j];
			answer = answer * prime; // number multiply the answer by the prime
			//if any multiple of this prime exsists in the array then divide that multiple by the prime
			int k;
			for(k = j; k < 20; k++){
				if(numbers[k]% prime == 0){
					numbers[k] =  numbers[k]/prime;
				}
				
			}
		}
	}
	
	printf("answer: %d",answer);
	
}
