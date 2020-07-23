# Bubble sort optimized


def bubble_sort(my_list):
    temp = counter = 0;
    for i in range(len(my_list) - 1):
        for j in range(len(my_list) - 1):
            if my_list[j] > my_list[j + 1]:  # swap functionality
                temp = my_list[j];
                my_list[j] = my_list[j + 1];
                my_list[j + 1] = temp;
                counter += 1;
        if counter == 0:  # to stop unnecessary loop
            break;
        counter = 0;


my_list = list(int(input()) for _ in range(int(input())));
print(max(my_list))
print(f"before sorting: {' '.join([str(value).ljust(min(my_list), ' ') for value in my_list])} ");
bubble_sort(my_list);
print(f"after sorting:  {' '.join([str(value).ljust(min(my_list), ' ') for value in my_list])} ");


# Bubble Sort Recursion


def bubble_sort_recursive(my_list, size):
    temp = 0;
    if size == 1:
        return;
    for i in range(size - 1):
        for j in range(size - 1):
            if my_list[j] > my_list[j + 1]:
                temp = my_list[j];
                my_list[j] = my_list[j + 1];
                my_list[j + 1] = temp;
    bubble_sort_recursive(my_list, size - 1);


# list
my_list = list(map(int, input().split()));
print(f"before sorting: {' '.join([str(value).ljust(min(my_list), ' ') for value in my_list])} ");
bubble_sort_recursive(my_list, len(my_list));
print(f"after sorting:  {' '.join([str(value).ljust(min(my_list), ' ') for value in my_list])} ");