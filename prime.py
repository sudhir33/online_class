def find_factors(num):#function definition
    fc=0
    if num==0 or num==1:
        return 1
    for i in range(2,num//2+1):
        if num%i==0:
            fc+=1
            break
    return fc

#main function
num=int(input())
fc=find_factors(num)#function call
if fc==0:
    print("Prime")
else:
    print("Not a Prime")
        
    
