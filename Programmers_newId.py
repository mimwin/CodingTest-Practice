import re
def solution(new_id):
    #1단계
    new_id = new_id.lower()
    
    #2단계
    lv2 = re.compile('[0-9a-z_.\-]+')
    new_id = lv2.findall(new_id)
    new_id = ''.join(new_id)
    
    #3단계
    while ".." in new_id:
        new_id = new_id.replace('..','.')
        
    #4단계
    new_id = new_id.strip('.')
    
    #5단계
    if new_id =='':new_id+='a'
    
    #6단계
    if len(new_id) >= 16:
        new_id = new_id[:15]
        new_id = new_id.rstrip('.')
        
    #7단계
    if len(new_id) <= 2:
        idSize = len(new_id)
        addChar = new_id[idSize-1:]
        while(len(new_id)<3):
            new_id += addChar
    return new_id