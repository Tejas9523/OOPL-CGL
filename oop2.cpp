#include <iostream>
#include <string.h>
using namespace std;

class student  // define class
{
    
    int roll, cla;  // class private variable
    char Div;
    string name, blood, add;
    static int id;
    long long int tel;

public:
    
    void getdata();  // function declaration
    void display();  // function declaration
    
    student()  // default constructor
    {
        name = "Tejas";
        roll = 25;
        cla = 2;
        Div = 'B';
        blood = "B+";
        tel = 8796612190;
        add = "dighi";
    }
    
    student(student &i)  // copy constructor
    {
        name = i.name;
        roll = i.roll;
        cla = i.cla;
        Div = i.Div;
        blood = i.blood;
        tel = i.tel;
        add = i.add;
    }
    
    ~student()  // destructor
    {
        cout << "Memory deleted";
    }

    static int showid()  //static function
    {
        id++;
        cout << id;
        return id;
    }
};

class personinfo
{
    char sub[10];
    friend class student;  //  friend class
};

void student::getdata() // function defination
{
    personinfo p;
    cout << "Enter the Name - ";
    cin >> name;
    cout << "Enter the roll no - ";
    cin >> roll;
    cout << "Enter the class - ";
    cin >> cla;
    B:
    cout << "Enter the division - ";
    cin >> Div;
    try{
        if(isdigit(Div)==true){
            throw Div;
        }
    }
    catch(char Div){
        cout<<"Exception caught...!!!\n";
        goto B;
    }
    cout << "Enter the blood group - ";
    cin >> blood;
    cout << "Enter the address - ";
    cin >> add;
    cout << "Enter the telephone no. - ";
    cin >> tel;
    cout << "enter the subject - ";
    cin >> p.sub;
}
void student::display()
{
    cout << "Name - " << name << "\n";
    cout << "Roll  No - " << roll << "\n";
    cout << "class is - " << cla << "\n";
    cout << "Division is - " << Div << "\n";
    cout << "Blood Group - " << blood << "\n";
    cout << "Adress - " << add << "\n";
    cout << "Phone no - " << tel << "\n";
}

int student::id;

int main()
{
    int n;

    cout << "Enter the no of student - ";
    cin >> n;

    student *s = new student[n]; // dynamic memory allocation
    student t;                   // class object
    for (int i = 0; i < n; i++)
    {
        cout << "Database of student - ";
        student::showid();
        cout << "\n";
        s[i].getdata();
        s[i].display();
    }
    t.getdata();
    student s1(t);
    s1.display();
    delete s;//delete memory
}

// int main() 
// {
//     student s,*s2;
//     s2=new student;
//     cout<<"Dtabase of student - ";
//     s.show();
//     cout<<"\n";
//     s.getdata();
//     s.display();
//     //copy constructor
//     student s1(s);
//     //dynamic memory allocation
//     s2->getdata();
//     s2->display();
//     delete s2;
    

// }