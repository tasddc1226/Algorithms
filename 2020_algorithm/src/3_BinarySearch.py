
def BinarySearch(a, first, last, x):
    if (first > last): return -1
    else:
        mid = (first + last) // 2
        if (x == a[mid]): return mid
        elif (x < a[mid]):
            return BinarySearch(a, first, mid-1, x)
        else:
            return BinarySearch(a, mid+1, last, x)

if __name__ == "__main__":
    list = [1,2,3,4,5,6,7,8,9,10]
    
    x = input("input target value : ")
    location = BinarySearch(list, 0, len(list)-1, int(x))
    print("target index is : " + str(location) )

