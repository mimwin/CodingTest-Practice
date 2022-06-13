def solution(s, n):
    data = list(s)
    for i in range(len(data)):
        if data[i].isupper():
            data[i]=chr((ord(s[i])-ord('A')+ n)%26+ord('A'))
        elif data[i].islower():
            data[i]=chr((ord(s[i])-ord('a')+ n)%26+ord('a'))
        answer += chr(str)
    print(answer)



def solution(s, n):
    s = list(s)
    for i in range(len(s)):
        if s[i].isupper():
            
        
    return "".join(s)
