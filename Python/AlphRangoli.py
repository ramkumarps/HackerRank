# Enter your code here. Read input from STDIN. Print output to STDOUT
import sys
N = raw_input()
n = int(N)

for row in range(1,2*n-1+1):
  print " "
  for col in range(1,4*n-3+1):      
       if row <= n:
        if col <=2*(n)-1:
         if col == (2*(n)-1)-(2*((row-1)%(n))):
             print chr(n+96),
         else:
            print "-",
        else:
         if col == (2*(n)-1)+(2*((row-1)%(n))):
            print chr(n+96),
         else:
            print "-",
       elif row <= 2*n-1:
        if col <= 2*n-1:
         if col == 2*(n)-1-row+3*(row%(n)-1):
             print chr(n+96),
         else:
             print "-",
        else: 
         if col == 2*(n)-1+row-3*(row%(n)-1):
             print chr(n+96),
         else:
             print "-",        
 
