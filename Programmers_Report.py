def solution(id_list, report, k):
    answer = []
    list = []
    for i in report:
        user = i.split(" ")
        first = user[0]
        second = user[1]
        for j in range(len(id_list)-1):
            if(second == id_list[j] and not(first in id_list[j])):
                list[j] 
        
    return answer





if __name__ == "__main__":
	solution(["muzi", "frodo", "apeach", "neo"],["muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"], 2 )


