echo "Enter the range of fibonoic serise"
read range
a=0
b=1
c=0
i=1
echo -n "$c "

while [ $i -lt $range ]
 do
  a=$b
  b=$c
  c=`expr $a + $b`
  echo -n "$c "
  i=`expr $i + 1`

 done

