#include<bits/stdc++.h>
using namespace std;
/*

int main(void){
    cout<<"Hello World"<<endl;
    return 0;
}*/

namespace ns {
    void display(int a){
        cout<<"Number is: "<<a<<endl;
    }

    class Geek{
    public:
        void display(){
            cout<<"hello from display"<<endl;
        }
    };
}

namespace ns1 {
    class Geeks{
    public:
        void displayText(){
            cout<<"hello from displayText"<<endl;
        }
    };
}
int main(void){
    ns::display(4);
    ns::Geek obj;
    obj.display();

    ns1::Geeks objDisplay;
    objDisplay.displayText();
    return 0;
}

/*using namespace ns;
int main(void){
    display(5);
    Geek obj;
    obj.display();
    return 0;
}*/
