def reverse(num):
    rev=0
    while(num!=0):
        r=num%10
        num=num//10
        rev=rev*10+r
    return rev

#main program
num=int(input())
rev=reverse(num)
if rev==num:
    print("palindrome")
else:
    print("not a palindrome")
