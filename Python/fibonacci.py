n=int(input("Enter the limit: "))
a,b=0,1
print("fibonacci series is: ")
print("\t",a)
print("\t",b)
for i in range(1,n+1):
    fib=a+b
    print("\t",fib)
    a,b=b,fib
print("\nFibonacci sum is: ",fib)


