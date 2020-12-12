#include<bits/stdc++.h>
using namespace std;
class Node{
private:
    int key;
    int data;
    Node* next;
    Node* previous;
public:
    Node(){
        key = 0;
        data =0;
        next = NULL;
        previous = NULL;
    }
    Node(int k,int d){
        key = k;
        data = d;
    }
    void setKey(int k)
    {
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
    void setPrevious(Node *p)
    {
        previous = p;
    }

    int getKey()
    {
        return key;
    }
    int getData()
    {
        return data;
    }
    Node* getNext()
    {
        return next;
    }
    Node* getPrevious()
    {
        return previous;
    }

};

class Doubly{
private:
    Node* head;
public:
    Doubly()
    {
        head=NULL;
    }
    Doubly(Node* n)
    {
        head = n;
    }
    void setHead(Node* h)
    {
        head = h;
    }
    Node* getHead()
    {
        return head;
    }
    Node* checkNode(int k)
    {
        Node *temp = NULL;
        Node *ptr = head;
        while(ptr != NULL)
        {
            if(ptr->getKey() == k)
                temp = ptr;
            ptr =ptr->getNext();
        }
        return temp;
    }
    void appendNode(Node* n)
    {
        if(checkNode(n->getKey()) != NULL)
                cout<<"Node already exists"<<endl;

        else{
            if(head == NULL)
            {
                head = n;
                cout<<"nOde appended as head"<<endl;
            }else{
                Node* ptr =head;
                while(ptr->getNext() != NULL)
                    {
                        ptr = ptr->getNext();
                    }
                ptr->setNext(n);
                n->setPrevious(ptr);
                cout<<"Node appended"<<endl;
            }
        }
    }
    void prependNode(Node *n)
    {
        if(checkNode(n->getKey()) != NULL)
            cout<<"Node already exists"<<endl;
        else{
                n->setNext(head);
                head->setPrevious(n);
                head= n;
                cout<<"Node prepended"<<endl;

            }

    }
    void insertNodeAfter(int k ,Node *n)
    {
        Node *ptr =checkNode(k);
        if(ptr == NULL)
            cout<<"invalid key"<<endl;
        else{
            if(checkNode(n->getKey()) != NULL)
                cout<<" Node already exists"<<endl;
            else{
                    Node* nextnode = ptr->getNext();
                    if(nextnode == NULL)
                    {
                        ptr->setNext(n);
                        n->setPrevious(ptr);
                        cout<<"node inserted at end"<<endl;
                    }else{
                        n->setNext(ptr->getNext());
                        n->setPrevious(ptr);
                        ptr->setNext(n);
                        nextnode->setPrevious(n);
                        cout<<"Node inserted in between"<<endl;
                    }
            }
        }
    }

    void deleteNode(int k)
    {
        Node *ptr =checkNode(k);
        if(ptr == NULL)
            cout<<"invalid key"<<endl;
        else{
            if(head == NULL)
                cout<<"No linked list for you"<<endl;
            else{
                if(head ->getKey() == k)
                {
                    head = head->getNext();
                    cout<<"Node unlinked"<<endl;
                }else{
                     Node *nextNode = ptr -> getNext();
                     Node * prevNode = ptr -> getPrevious();
                    // deleting at the end
                    if (nextNode == NULL) {
                      prevNode -> setNext(NULL);
                      cout << "Node Deleted at the END" << endl;
                    }

                    //deleting in between
                    else {
                      prevNode -> setNext(nextNode);
                      nextNode -> setPrevious(prevNode);
                      cout << "Node Deleted in Between" << endl;

                        }
                }
            }
        }
    }
    void updateNode(int k, int d) {

    Node *ptr = checkNode(k);
    if (ptr != NULL) {
      ptr -> setData(d);
      cout << "Node Data Updated Successfully" << endl;
    } else {
      cout << "Node Doesn't exist with key value : " << k << endl;
    }

  }

  void printNode() {
    if (head == NULL) {
      cout << "No Nodes in Doubly Linked List";
    } else {
      cout << endl << "Doubly Linked List Values : ";
      Node *temp = head;

      while (temp != NULL) {
        cout << "(" << temp -> getKey() << "," << temp -> getData() << ") <--> ";
        temp = temp -> getNext();
      }
    }

  }
};
int main(void)
{
    Doubly s;
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
      n -> setKey(key1);
      n -> setData(data1);
      s.appendNode(n);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
       n -> setKey(key1);
      n -> setData(data1);
      s.prependNode(n);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n -> setKey(key1);
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
