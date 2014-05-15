/*
Greatest Prime Factor 
To be honest had help from http://math.stackexchange.com/questions/389675/largest-prime-factor-of-600851475143
But this answer also seems related to the fundamental theorem of arthimetic
Basically keep dividing to get the factorization until the quotient is 1
*/

class Problem3{

	public static long lpf(long dividend){
		long divisor = 2;
		long quotient = dividend;
		long divisible = 1;
		
		while(quotient != 1){
			divisible = quotient%divisor; 	
			if(divisible != 0){
				divisor++; //if not divisible by divisor, increment the divsor
			}else{
				quotient = quotient/divisor; //else divided and go back to the start of the loop
			}
		}
		return divisor;
	}


	public static void main(String[] args){
		System.out.println(lpf(2));
		System.out.println(lpf(147));
		System.out.println(lpf(105));
		System.out.println(lpf(600851475143l));
	}	


}