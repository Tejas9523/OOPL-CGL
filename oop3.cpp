#include <iostream>
#include<string.h>
using namespace std;

class publish{  // Base class
    public:
    int flag;
    
    string title;
    float price;
    
    void getdata1(){    //function
        X:
        cout<<"Enter Title - ";
        cin>>title;
        for(int i=0;i<title.length();i++){
            if(isdigit(title[i])==true){
                flag=0;
            }
            else{
                flag=1;
            }
        }
        try{
            if(flag==0){
                throw flag;
            }
        }
        catch(int flag){
            cout<<"Exception caught...!\n";
            goto X;
        }
        cout<<"Enter Price of book - ";
        cin>>price;
    }
    
    void display1(){
        cout<<"Title - "<<title<<"\n";
        cout<<"Price - "<<price<<"\n";
    }
};

class book:public publish{       //  derived class
    int count;
    public:
    void getdata2(){
        cout<<"Enter Page count- ";
        cin>>count;
    }
    
    void display2(){
        cout<<"Page count is - "<<count<<"\n";
    }
};

class tape:public publish{    //  derived class
    public:
    float tm;
    void getdata3(){
        cout<<"Enter play time- ";
        cin>>tm;
    }
    
    void display3(){
        cout<<"Play time is - "<<tm<<"\n";
    }
};
int main() {
    book b;    // object of derived class
    tape t;    // object of derived class
    
    b.getdata1();   // function call of Base class by object of derived class
    b.display1();   // function call of Base class by object of derived class
    b.getdata2();   // function call of derived class by object of derived class
    b.display2();   // function call of derived class by object of derived class
    
    // t.getdata1();
    // t.display1();
    t.getdata3();   // function call of derived class by object of derived class
    t.display3();   // function call of derived class by object of derived class

    return 0;
}
