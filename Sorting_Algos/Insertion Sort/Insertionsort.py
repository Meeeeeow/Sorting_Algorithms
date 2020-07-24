

                                                            # own algo


def insertionsort(my_list, n):
    for i in range(1, n):
        key = my_list[i];
        for j in range(i):
            if my_list[j] > my_list[i]:
                index = i;
                while index > j:
                    my_list[index] = my_list[index - 1];
                    index -= 1;
                    print(f'index in if is: {index}');
                my_list[j] = key;
                print(my_list);
                break;


n = int(input('Enter a valid digit : '));
my_list = list(int(input()) for _ in range(n));
print(my_list);
insertionsort(my_list, n);
print(my_list);


                                                            # algo from source understood


def insertionsort(my_list, n):
    for i in range(1, n):
        key = my_list[i];
        j = i - 1;
        while j >= 0 and my_list[j] > key:
            my_list[j + 1] = my_list[j];
            j -= 1;
        my_list[j + 1] = key;


n = int(input('Enter a valid digit : '));
my_list = list(int(input()) for _ in range(n));
print(my_list);
insertionsort(my_list, n);
print(my_list);


                                                                # recursion


def insertionsort(my_list, n):
    if n == 1:
        return;
    insertionsort(my_list, n - 1);
    key = my_list[n - 1];
    j = n - 2;
    while j >= 0 and my_list[j] > key:
        my_list[j + 1] = my_list[j];
        j -= 1;
    my_list[j + 1] = key;


n = int(input('Enter a valid digit : '));
my_list = list(int(input()) for _ in range(n));
print(my_list);
insertionsort(my_list, n);
print(my_list);