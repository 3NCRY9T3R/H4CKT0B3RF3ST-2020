#CODE

s=input()
stk=[]
stk.append(-1)
length=len(s)
def bracketsLongSubstring(s,result,stk,length):
    n=len(s)
    if n<=1:
        return result
    if s[0]=='(':
        stk.append(length-n)
    else:
        stk.pop()
        if len(stk)!=0:
            result=max(result,length-n-stk[len(stk)-1])
        else:
            stk.append(length-n)
    return bracketsLongSubstring(s[1:],result,stk,length)
print(bracketsLongSubstring(list(s),0,stk,length))
