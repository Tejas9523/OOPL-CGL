#include <iostream>
#include <fstream>
using namespace std;

class student{  //class defination
	public:

	char name[10],div;
   	int roll;
   	
	void get(){ //function defination
	cout<<"Enter name - ";
  	cin>>name;
  	cout<<"Enter Div - ";
  	cin>>div;
  	cout<<"Enter Roll no - ";
  	cin>>roll;

	}
	
};

int main () {
  int n;
  cout<<"Enter no of students - ";    // accept no of students
  cin>>n;
  student s[n];   // array of object of class
  fstream file;   // object of fstream class
  file.open("abc.txt",ios::out);    // open file in writting mode
  for(int i=0; i<n ; i++){
    s[i].get();
    
    file<<"Name - "<<s[i].name<<endl;
    file<<"Div - "<<s[i].div<<endl;
    file<<"Roll no - "<<s[i].roll<<endl;
  }
  file.close();   // close file
  file.open("abc.txt",ios::in);   // open file in write mode
  while(!file.eof())    // print content of file till end of file 
    {
        char ch;
        file>>ch;
        cout<<ch;
    }
   file.close();    // file close
  
}
