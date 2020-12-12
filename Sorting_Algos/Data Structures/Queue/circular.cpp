#include<bits/stdc++.h>
using namespace std;

class Queue{
private:
    int rear,front,itemcount =0;
public:
    Queue(){
        rear = front = -1;
    }
    bool isEmpty()
    {
        cout<<front<<rear<<endl;
        if(front == -1 && rear == -1)
            return true;
        else
            return false;
    }
    bool isFull(int arr[],int s)
    {
        if((rear + 1) % s == front)
            return true;
        else
            return false;
    }
    void enqueue(int arr[],int value,int s)
    {
        if(isFull(arr,s))
            cout<<"Queue is full"<<endl;
        else {
            if(isEmpty())
                front = rear = 0;
            else
                rear =(rear + 1)%s;
            arr[rear] = value;
            itemcount++;
        }
    }
    int dequeue(int arr[],int s)
    {
        int x = 0;
        if(isEmpty())
            cout<<"Queue is empty"<<endl;
        else{
            x = arr[front];
            arr[front] = 0;
            itemcount--;
            if(front == rear) //changed here
                front = rear = -1;
            else
                {
                    front = (front+1) % s;
                }

        }
        return x;
    }
    int count()
    {
        return itemcount;
    }
    void display(int arr[],int s)
    {
        for(int i =0;i<s;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
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
    Queue q;
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
                    q.enqueue(arr,value,len);
                    break;
            case 2:
                cout<<"Popped value "<<q.dequeue(arr,len)<<endl;
                break;
            case 3:
                if(q.isEmpty())
                    cout<<"Queue is empty"<<endl;
                else
                    cout<<"Queue is not empty"<<endl;
                break;
            case 4:
                if(q.isFull(arr,len))
                    cout<<"Queue is full"<<endl;
                else
                    cout<<"queue is not full"<<endl;
                break;
            case 5:
                q.display(arr,len);
                break;
            case 6:
                cout<<"Queue element counter "<<q.count()<<endl;
                break;
            case 7:
                system("cls");
                break;
            default:
                cout<<"no proper option number given"<<endl;


        }
        cout<<"Enter option"<<endl;
        cin>>option;
    }
    return 0;
}

