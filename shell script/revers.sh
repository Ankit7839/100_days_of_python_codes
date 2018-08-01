echo "Enter any number"
read number
sum=0
while [ $number - 0 ]
  do
    rem= `expr $number % 10`
    number= `expr $number / 10`
    sum= `expr $sum \* 10 + $rem`
    
  done
echo "reversed number is $sum"