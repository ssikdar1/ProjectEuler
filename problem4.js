/*
Problem 4 :

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/
function integerPalindrome(x){
	string = x.toString()
	for(i = 0; i < string.length/2; i++){
		if(string[i] != string[string.length -1 - i]){return false;}
	}
	return true;
}

function largestPalindrome(x) {
  num = Math.pow(10,x)-1; //9, 99, 999,....
  num = num * num; // 9*9, 99*99, .... largest number you can get by mult same digit nums.
  found = false;
  while(num > 0 && !found && num.toString().length >5){
	found = integerPalindrome(num);
	if(found){
		//found a palindrome
		for(i=100; i < 1000; i ++){
			//if i can divide it by a 3 digit number
			foo = num%i;
			bar = num/i;
			if(foo == 0){ //division has no remainders
				if(bar.toString().length == 3){ //the divison has a number with 3 digits
					console.log("num: " + num);
					console.log('bar: ' + bar);
					return num;			
				}

			}
		}
		
	}
	found = false;
	num --;
  }
  return num;
}

//console.log(integerPalindrome(80));
//console.log(integerPalindrome(9009));
foo = largestPalindrome(3);
console.log("---------")
console.log(foo);
