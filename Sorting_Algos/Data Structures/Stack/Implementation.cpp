#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int top;
public:
    Stack(){
        top = -1;

    }
     bool isEmpty(){
        if(top == -1)
           return true;
        else
            return false;
    }
    bool isFull(int arr[],int s)
    {
        if(top == s -1)
            return true;
        else
            return false;
    }
    void push(int arr[],int new_value,int s)
    {
        if(isFull(arr,s))
            cout<<"Stack is overflowed"<<endl;
        else{
            top++;
            arr[top] = new_value;
        }
    }
    int pop(int arr[])
    {
        if(isEmpty())
            {
                cout<<"Stack is underflowed"<<endl;
                return 0;
            }
        else{
            int popped_value = arr[top];
            arr[top] = 0;
            top--;
            return popped_value;
        }

    }
    void display(int arr[],int s)
    {

        for(int i=s -1;i>=0;i--)
            cout<<arr[i]<<endl;
    }
    int peek(int arr[],int position)
    {
        if(isEmpty())
            cout<<"Stack is underflowed"<<endl;
        else{
            return arr[position];
        }
    }
    void change(int arr[],int pos,int nv)
    {
        if(isEmpty())
        {
            cout<<"Stack is underflowed"<<endl;
        }else{
            arr[pos] = nv;
            cout<<"Value updated"<<endl;
        }
    }

    int count(){
        return top+1;
    }
};
int main(void)
{
    int option,n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        arr[i] = 0;
    int len = sizeof(arr)/sizeof(arr[0]);
    cin>>option;
    Stack s;
    while(option!=0)
    {
        switch(option)
        {
            case 0:
                break;
            case 1:
                    int value;
                    cout<<"Enter  value:"<<endl;
                    cin>>value;
                    s.push(arr,value,len);
                    break;
            case 2:
                cout<<"Popped value "<<s.pop(arr)<<endl;
                break;
            case 3:
                if(s.isEmpty())
                    cout<<"Stack is empty"<<endl;
                else
                    cout<<"Stack is not empty"<<endl;
                break;
            case 4:
                if(s.isFull(arr,len))
                    cout<<"Stack is full"<<endl;
                else
                    cout<<"Stack is not full"<<endl;
                break;
            case 5:
                s.display(arr,len);
                break;
            case 6:
                cout<<"enter the position you want to peek"<<endl;
                int pos;
                cin>>pos;
                if(pos <= n)
                    cout<<"The positioned value is "<<s.peek(arr,pos)<<endl;
                else
                    cout<<"Wrong position entered"<<endl;
                break;
            case 7:
                cout<<"Enter the position and value you want to change"<<endl;
                int posi,val;
                cin>>posi>>val;
                if(posi<=n)
                    s.change(arr,posi,val);
                else
                    cout<<"wrong position entered"<<endl;
                break;
            case 8:
                cout<<"Stack element counter "<<s.count()<<endl;
                break;
            case 9:
                system("cls");
                break;
            default:
                cout<<"no proper option number guven"<<endl;


        }
        cout<<"Enter option"<<endl;
        cin>>option;
    }
    return 0;
}
