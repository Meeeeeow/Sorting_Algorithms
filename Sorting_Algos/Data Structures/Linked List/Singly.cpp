#include<bits/stdc++.h>
using namespace std;
class Node{
private:
    int key;
    int data;
    Node* next;
public:
    void setkey(int k){
        key = k;
    }
    void setData(int d)
    {
        data = d;
    }
    void setNext(Node *n)
    {
        next = n;
    }
    int getkey()
    {
        return key;
    }
    int getdata()
    {

        return data;
    }
    Node* getnext(){
        return next;
    }
    Node(){
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k,int d)
    {
        key = k;
        data = d;
    }
};

class SinglyLinkedList{
    private:
         Node* head;
    public:
        void sethead(Node *n)
        {
            head = n;
        }
        Node* gethead(){
            return head;
        }
        SinglyLinkedList(){
            head = NULL;
        }
        SinglyLinkedList(Node *n)
        {
            head = n;
        }
        //node exists
        Node* checkNode(int k)
        {
            Node* temp =NULL;
            Node* ptr = head;
            while(ptr != NULL)
            {
                if(ptr->getkey() == k)
                    temp = ptr;
                ptr = ptr->getnext();
            }
            return temp;
        }

        //append node
        void appendNode(Node* n)
        {
            if(checkNode(n->getkey()) != NULL){
                cout<<"Node already exists"<<endl;
            }
            else{
                if(head == NULL)
                {
                    head = n;
                    cout<<"Node appended"<<endl;
                }else{
                    Node* ptr = head;
                    while(ptr->getnext() != NULL)
                        ptr = ptr->getnext();
                    ptr->setNext(n);
                    cout<<"Node appended"<<endl;
                }
            }
        }

        void prependNode(Node* n)
        {
            if(checkNode(n->getkey()) != NULL){
                cout<<"Node already exists"<<endl;
            }
            else{
                n->setNext(head);
                head = n;
                cout<<"Node prepended"<<endl;
            }
        }

        void insertNodeAfter(int k,Node* n)
        {
            Node* ptr =checkNode(k);
            if(ptr == NULL)
                cout<<"Invalid key"<<endl;
            else{
                    if(checkNode(n->getkey()) != NULL)
                        cout<<"Node already exists"<<endl;
                    else{
                        n->setNext(ptr->getnext());
                        ptr->setNext(n);
                        cout<<"node inserted"<<endl;
                    }

                }
        }

       void deleteNode(int k)
        {
                Node* ptr =checkNode(k);
                if(ptr == NULL)
                    cout<<"Invalid key"<<endl;
                else{
                    if(head == NULL)
                        cout<<"Delete Node unavailable"<<endl;
                    else{
                        if(head->getkey() == k)
                        {
                            head=head->getnext();
                            cout<<"Node unlinked"<<endl;
                        }else{
                            Node* temp =NULL;
                            Node* prevNode;
                            Node* currentNode;
                            prevNode = head;
                            currentNode = head->getnext();
                            while(currentNode!= NULL)
                            {
                                if(currentNode->getkey() == k)
                                {
                                    temp = currentNode;
                                    currentNode = NULL;

                                }else{
                                    prevNode=prevNode->getnext();
                                    currentNode=currentNode->getnext();
                                }
                            }
                            if(temp != NULL)
                            {
                                prevNode->setNext(temp->getnext());
                                cout<<"Node unlinked from two points"<<endl;
                            }

                        }
                    }
                }
        }

        void updateNode(int k,int d)
        {
            Node* ptr = checkNode(k);
            if(ptr == NULL)
                cout<<"Node doesnot exist"<<endl;
            else{
                ptr->setData(d);
                cout<<"Node updated successfully"<<endl;
            }
        }
        void printNode()
        {
            if(head == NULL)
                cout<<"No linked list exist"<<endl;
            else{
                Node* temp;
                temp = head;
                while(temp != NULL)
                {
                    if(temp->getnext() == NULL)
                         cout<<temp->getkey()<<"  "<<temp->getdata();
                    else
                         cout<<temp->getkey()<<"  "<<temp->getdata()<<"-->";
                    temp=temp->getnext();
                }
            }
        }

};
int main(void)
{
SinglyLinkedList s;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;
    Node* n = new Node();


    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n -> setkey(key1);
      n -> setData(data1);
      s.appendNode(n);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
       n -> setkey(key1);
      n -> setData(data1);
      s.prependNode(n);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n -> setkey(key1);
      n -> setData(data1);

      s.insertNodeAfter(k1, n);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      s.deleteNode(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      s.updateNode(key1, data1);

      break;
    case 6:
      s.printNode();

      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);
    return 0;
}
