#include<bits/stdc++.h>
using namespace std;
class Node{
private:
    int key;
    int data;
    Node* next;
public:
    Node(){
        key = 0;
        data = 0;
        next =NULL;
    }
    Node(int k,int d)
    {
        key = k;
        data = d;
    }
    void setkey(int k)
    {
        key = k;
    }
    void setdata(int d)
    {
        data = d;
    }
    void setnext(Node *n)
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
    Node* getnext()
    {
        return next;
    }
};
class Circular{
private:
    Node* head;
public:
    Circular()
    {

        head= NULL;
    }
    Circular(Node *n)
    {
        head = n;
    }

    Node* checkNode(int k)
    {
        Node * temp = NULL;
    Node * ptr = head;

    if (ptr == NULL) {
      return temp;
    } else {
      do {
        if (ptr -> getkey() == k) {
          temp = ptr;
        }
        ptr = ptr -> getnext();

      } while (ptr != head);
      return temp;
    }

    }

    void appendNode(Node *n)
    {
        if(checkNode(n->getkey()) != NULL)
            cout<<"node already exists"<<endl;
        else{
            if(head == NULL)
            {
                head = n;
                n->setnext(head);
                cout<<"Node appended as head"<<endl;
            }else{
                Node *ptr =head;
                while(ptr->getnext() != head)
                    ptr = ptr ->getnext();
                n->setnext(head);
                ptr->setnext(n);
                cout<<"Node appended at last"<<endl;

            }
        }
    }

    void prependNode(Node *n)
    {
        if(checkNode(n->getkey()) != NULL)
            cout<<"node already exists"<<endl;
        else{
             if(head == NULL)
             {
                 head= n;
                 n->setnext(head);
                 cout<<"Node prepended as head"<<endl;
             }
             else{
                Node *ptr = head;
                while(ptr->getnext() != head)
                    ptr =ptr->getnext();
                ptr->setnext(n);
                n->setnext(head);
                head= n;
                cout<<"NOde appended"<<endl;
             }
        }
    }

    void insertAfterNode(int k ,Node *n)
    {
        Node *ptr = checkNode(k);
        if(ptr == NULL)
            cout<<"Invalid key"<<endl;
        else{
            if(checkNode(n->getkey()) != NULL)
                cout<<"node already exists"<<endl;
            else{
                if(ptr->getnext() == head)
                {
                    n->setnext(head);
                    ptr->setnext(n);
                    cout<<"Node inserted after last"<<endl;
                }
                else{
                    n->setnext(ptr->getnext());
                    ptr->setnext(n);
                    cout<<"Node inserted in between"<<endl;
                }
            }
        }
    }
    void deleteNode(int k)
    {
         Node * ptr = checkNode(k);
    if (ptr == NULL) {
      cout << "No node exists with key value OF : " << k <<
        endl;
    } else {

      if (ptr == head) {
        if (head -> getnext() == head) {
          head = NULL;
          cout << "Head node Unlinked... List Empty";
        } else {
          Node * ptr1 = head;
          while (ptr1 -> getnext() != head) {
            ptr1 = ptr1 -> getnext();
          }
          ptr1 -> setnext(head -> getnext());
          head = head -> getnext();
          cout << "Node UNLINKED with keys value : " << k << endl;
        }
      } else {
        Node * temp = NULL;
        Node * prevptr = head;
        Node * currentptr = head -> getnext();
        while (currentptr != NULL) {
          if (currentptr -> getkey() == k) {
            temp = currentptr;
            currentptr = NULL;
          } else {
            prevptr = prevptr -> getnext();
            currentptr = currentptr -> getnext();
          }
        }

        prevptr -> setnext(temp -> getnext()) ;
        cout << "Node UNLINKED with keys value : " << k << endl;

      }

    }
    }
    void updateNode(int k,int d)
    {

        Node *ptr = checkNode(k);
        if (ptr != NULL) {
          ptr -> setdata(d);
          cout << "Node Data Updated Successfully" << endl;
        } else {
          cout << "Node Doesn't exist with key value : " << k << endl;
        }
    }

    void printNode()
    {
       if (head == NULL) {
      cout << "No Nodes in Circular Linked List";
    } else {
      cout << endl << "head address : " << head << endl;
      cout << "Circular Linked List Values : " << endl;

      Node * temp = head;

      do {
        cout << "(" << temp -> getkey() << "," << temp -> getdata() << "," << temp -> getnext() << ") --> ";
        temp = temp -> getnext();
      } while (temp != head);
    }

  }

};
int main(void)
{
   Circular s;
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
      n -> setdata(data1);
      s.appendNode(n);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
       n -> setkey(key1);
      n -> setdata(data1);
      s.prependNode(n);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n -> setkey(key1);
      n -> setdata(data1);

      s.insertAfterNode(k1, n);
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
