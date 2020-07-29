def mergeSort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        L = arr[:mid]
        R = arr[mid:]

        mergeSort(L)
        mergeSort(R)

        i = j = k = 0

        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1

        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1


def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()


arr = [12, 11, 13, 5, 7]
print("Given array is", end="\n")
printList(arr)
mergeSort(arr)
print("Sorted array is: ", end="\n")
printList(arr)


#Solution 2
def merge_sort(values):
    if len(values) > 1:
        m = len(values) // 2
        left = values[:m]
        right = values[m:]
        merge_sort(left)
        merge_sort(right)

        values = []

        while len(left) > 0 and len(right) > 0:
            if left[0] < right[0]:
                values.append(left[0])
                left.pop(0)
            else:
                values.append(right[0])
                right.pop(0)

        for i in left:
            values.append(i)
        for i in right:
            values.append(i)

    return values


a = [12, 11, 13, 5, 6, 7]
print("Given array is")
print(a)

my_list = merge_sort(a)

# Print output
print("Sorted array is : ")
print(my_list) 