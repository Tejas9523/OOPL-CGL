#include <iostream>
#include <map>      // include header file of map
#include<string>
using namespace std;
int main() {
    string st;
    typedef map <string,int> type;
    type pop;
    type::iterator p;
   
    pop.insert(pair<string,int>("maharshtra",130000000));
    pop.insert(pair<string,int>("gujrat",220000000));
    pop.insert(pair<string,int>("karnataka",99000000));
    pop.insert(pair<string,int>("punjab",12000000));
    pop.insert(pair<string,int>("adam",23000000));
    
    cout<<"Enter state name - ";
    cin>>st;
    
    p=pop.find(st);
    if(p!=pop.end()){
        cout<<p->second;
    }
    else{
        cout<<"Not found...!!!";
    }
    

    return 0;
}
