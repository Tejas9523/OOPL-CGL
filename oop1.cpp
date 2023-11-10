#include <iostream>
using namespace std;

class complex{   // class define
    float real,img;
    public:
    complex(){  // default contructor
        real=0.0;
        img=0.0;
    }
    complex(int x,int y){  //  parameterised constructor
        real=x;
        img=y;
    }
    void display(){
    	cout<<"\n"<<real<<"+i"<<img<<endl;
    }
    complex operator +(complex z){    // operator overloading
    	complex temp;
    	temp.real=this->real+z.real;
    	temp.img=this->img+z.img;
    	return temp;
    }
    friend complex operator * (complex m, complex n);  // friend function and operator overloading
    friend ostream &operator << (ostream & out,complex o1); // friend function and operator overloading
    friend istream &operator >> (istream & in,complex o2);  // friend function and operator overloading
};
complex operator *(complex m, complex n){
	complex temp1;
	temp1.real=(m.real*n.real)-(m.img*n.img);
	temp1.img=(m.real*n.img)+(n.real*m.img);
	return temp1;

}

ostream &operator << (ostream & out,complex o1){
	out<<o1.real<<"+i"<<o1.img;
    cout<<"\nExtracted successfully...";
	return out;
}
istream &operator >> (istream & in,complex o2){
	in>>o2.real>>o2.img;
    cout<<"Extracted successfully...";
	return in;
}



int main(){
   complex c;
   int m,n,s;
   while(1>0){
   cout<<"\n1.Addition\n";
   cout<<"2.Multiplication\n";
   cout<<"3.Insertion\n";
   cout<<"4.Extraction\n";
   cout<<"Select an option:";
   cin>>s;
   switch (s){
   	case 1:{
	   	cout<<"Enter space seperated real and img part of first numbers:";
	   	cin>>m>>n;
	   	complex c1(m,n);
	   	cout<<"Enter space seperated real and img part of second numbers:";
		cin>>m>>n;
		complex c2(m,n);
		c=c1+c2;
		c.display();
        break;}
    case 2:{
        cout<<"Enter space seperated real and img part of first numbers:";
	   	cin>>m>>n;
	   	complex c3(m,n);
	   	cout<<"Enter space seperated real and img part of second numbers:";
		cin>>m>>n;
		complex c4(m,n);
		c=c3*c4;
		c.display();
		break;}
	case 3:{
		// cout<<"Enter space seperated real and img part of first numbers:";
	   	// cin>>m>>n;
	   	complex c5;
		cout<<c5; 
		break;}
	case 4:{
		cout<<"Enter real and img part of first numbers:"<<endl;
	   	// cin>>m>>n;
	   	complex c6;
		cin>>c6;
		break;}
   }
   }
//    cout<<"Enter first complex numbers: ";
//    cin>>m>>n;
//    complex c1(m,n);
//    cout<<"Enter second complex number: ";
//    cin>>m>>n;
//    complex c2(m,n);
//    c3=c1+c2;
//    cout<<"Addition is - ";
//    c3.display();
//    c3=c1*c2;
//    cout<<"\nMultipliaction is - ";
//    c3.display();
//    cout<<"\nEnter another complex no - ";
//    complex c(14,25);
//    cin>>c;
//    cout<<c;     
//    return 0;
}
