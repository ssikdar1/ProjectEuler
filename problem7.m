%% Problem 7: 
%
%By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
%What is the 10001st prime number?
%

%Using the Prime number theorem see what number should be put into the sieve
x = 10;
tmp = 0;
while(tmp < 10001)
  tmp = x/log(x);
   x = x*10;
end

%create an array of numbers for the sieve
numbers = zeros(1,x);
for i=1:x
    numbers(i) = i;
end

%Sieve of Eratosthenes, returns an array with all primes and the rest is 0
for i = 2:x
   if(numbers(i) ~= 0)
       p = numbers(i);
       j = 2; 
       while(p*j < x)
            numbers(p*j) = 0;
            j = j + 1;
       end
   end
end

%Find the 10,001st prime by going through all non zero elements
pcount = 0;
p = 0;
for i = 2:x
  if(numbers(i) ~= 0)
      pcount = pcount + 1;
      p = numbers(i);
  end
  
  if(pcount == 10001)
      break;
  end
end

disp(pcount);