def FindMajorityElement(a):
    l = len(a)
    if (l == 2):
        # a가 2개의 요소만 가지고 있을 때(길이가 2일때) 2개의 요소 를 비교한다.
        if (a[0] == a[1]):
            # 만약 요소가 같으면 부분 배열에서 과반수 요소이다.
            # l / 2 보다 요소의 개수가 크므로 리턴한다.
            return a[0]
        else:
            # 2개의 요소가 같지 않을 때, 과반수 요소가 아니므로 -1을 리턴한다.
            # -1은 과반수 요소가 없다는 것을 의미한다.
            return -1
    elif(l == 1):
        return a[0]
    
    # 분할 정복을 통해 과반수 요소를 찾는다.
    element1 = FindMajorityElement(a[:int(l/2)]) # first half
    element2 = FindMajorityElement(a[int(l/2):]) # second half

    # 분할한 두 요소를 비교하여 과반수 요소가 있는지 확인한다.
    # 만약 두 요소중에 과반수 요소가 없고 다른 한쪽에 과반수 요소가 있으면
    # 과반수 요소가 있는 쪽을 리턴한다.
    if (element1 == -1 and element2 >= 0):
        return element2
    elif (element2 == -1 and element1 >= 0):
        return element1
    
    # 만약 두 요소가 같으면 과반수 요소가 존재하므로 해당 값을 리턴한다.
    if (element1 == element2):
        return element1
    # 다르면 과반수 요소를 가지고 있지 않으므로 -1을 리턴한다.
    else:
        return -1

if __name__ == "__main__":
    A = [54, 23, 97, 23, 23, 80, 23, 23, 67]
    result = FindMajorityElement(A)
    if (result != -1): print("majority element is", str(result))
    else: print("no majority element.")
