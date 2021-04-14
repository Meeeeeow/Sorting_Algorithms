# -*- coding: utf-8 -*-
"""
Created on Thu Apr 15 00:25:14 2021

@author: User
"""

class bubblesort:
    def __init__(self , my_list, size):
        self.my_list = my_list;
        self.size = size;
    
    def input_list(self):
        for _ in range(self.size):
            self.my_list.append(int(input('Enter item: ')));
        return self.my_list;
    
    def print_list(self):
        print(' '.join([str(i) for i in self.my_list]));
    
    def sort_list(self , my_list ,size):
        if size == 1:
            return;
        for j in range(len(my_list) - 1):
            if my_list[j] > my_list[j + 1]:
                index1 = my_list.index(my_list[j]);
                index2 = my_list.index(my_list[j + 1]);
                my_list[index1],my_list[index2] = my_list[index2],my_list[index1];
        self.sort_list(my_list ,size - 1);  
        
        

my_list=[];                
b1 = bubblesort(my_list, int(input('Enter array size: ')));
mylist = b1.input_list();
print('Before sorting: ');
b1.print_list();          
b1.sort_list(my_list,len(my_list));
print('After sorting: ');
b1.print_list();        