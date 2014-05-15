#
# Problem 2
# Shan Sikdar
#By considering the terms in the Fibonacci sequence whose values do not exceed four million, 
#find the sum of the even-valued terms.

# ctr = 0
# Create a sliding window start with [1,2]
# calc the sum to create the new fib
# make the window [2,fib]
# keep running total of the even numbers
#keep going until fib > 4 million
	
def main():
	fibList = [1,2]
	sum = 2  #since we already have 2 in the list
	for i in range (1,100):
		fib = fibList[1] + fibList[0]
		fibList[0] = fibList[1]
		fibList[1] = fib
		if fib > 4*10**6:
			break
		if(fib%2 == 0):
			sum = sum + fib
		# print fib

	print(sum)


main()