#include <iostream>
using namespace std;
class sort{     // class defination
    
    public:
    template <class T>void get(int n, T a[]){       // function templateto accept array of elements
        for (int i = 0 ; i < n ; i++){
        cout<<"Enter element - ";
        cin>>a[i];
    }
    cout<<"Unorted array : ";
    for (int i = 0 ; i < n ; i++){
        cout<<a[i]<<" , ";
    }
    }
    
    template <class T>void select(int n, T a[]){        // function template for selection sort
        for (int i = 0 ; i < n ; i++){
        for (int j = i+1 ; j < n ; j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"\nSorted array : ";
    for (int i = 0 ; i < n ; i++){
        cout<<a[i]<<" , ";
    }
    }
};
int main() {
    int ch,m;
    sort s;     // object creation
    cout<<"1. INT type sort\n";
    cout<<"2. FLOAT type sort\n";
    cout<<"Enter choice - ";
    cin>>ch;
    
    switch(ch){
        
        case 1: {
                cout<<"Enter no of elements - ";
                cin>>m;
		int arr[m];
                s.get(m,arr);
                s.select(m,arr);
                break;}
                
        case 2: {
                cout<<"Enter no of elements - ";
                cin>>m;
		float brr[m];
                s.get(m,brr);
                s.select(m,brr);
                break;}
    }
    
    return 0;
}