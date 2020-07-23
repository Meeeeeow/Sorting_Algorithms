# selection sort


def selection_sort(my_list, n):
    for i in range(n - 1):
        min_index = i;
        for j in range(i + 1, n):
            if my_list[min_index] > my_list[j]:
                min_index = j;
        key = my_list[min_index];
        while min_index > i:
            my_list[min_index] = my_list[min_index - 1];
            min_index -= 1;
        my_list[i] = key;


n = int(input())
my_list = list(int(input()) for _ in range(n));
print(f"initial array: {' '.join(str(value) for value in my_list)}");
selection_sort(my_list, n);
print(f"After sorting : {' '.join(str(value) for value in my_list)}");


# selection sort string


def selection_sort_string(my_list, n):
    for i in range(n - 1):
        min_index = i;
        for j in range(i + 1, n):
            if my_list[min_index] > my_list[j]:
                min_index = j;
        key = my_list[min_index];
        while min_index > i:
            my_list[min_index] = my_list[min_index - 1];
            min_index -= 1;
        my_list[i] = key;


n = int(input())
my_list = list(input() for _ in range(n));
print(f"initial array: {' '.join(my_list)}");
selection_sort_string(my_list, n);
print(f"After sorting : {' '.join(my_list)}");


# selection sort recursion


def selection_sort_recur(my_list, n, index=0):
    if index == n:
        return;
    for i in range(n - 1):
        min_index = i;
        for j in range(i + 1, n):
            if my_list[min_index] > my_list[j]:
                min_index = j;
        key = my_list[min_index];
        while min_index > i:
            my_list[min_index] = my_list[min_index - 1];
            min_index -= 1;
        my_list[i] = key;
    selection_sort(my_list, n, index + 1);


n = int(input())
my_list = list(input() for _ in range(n));
print(f"initial array: {' '.join(my_list)}");
selection_sort_string(my_list, n);
print(f"After sorting : {' '.join(my_list)}");

