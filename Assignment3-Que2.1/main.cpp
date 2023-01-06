#include<iostream>
//#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Administration;
class Student
{
    protected:
        double roll_no;
        string name;
    public:
        void Display1()
        {
            cout<<"Name : "<<name<<endl<<"Roll Number : "<<roll_no<<endl;
        }

};

class T1T2T3 : virtual public Student
{
    protected:
        int T1,T2,T3;
    public:
        void Display2()
        {
            cout<<"Marks obtained in T1 T2 and T3 are : "<<T1<<" "<<T2<<" "<<T3<<endl;
        }

};

class P1P2 : virtual public Student
{
    protected:
        int P1,P2;
    public:
        void Display3()
        {
            cout<<"Marks obtained in P1 and P2 are : "<<P1<<" "<<P2<<endl;
        }

};

class Attendance : virtual public Student
{
    protected:
        int present;
    public:
        void Display4()
        {
            cout<<"Attendance : "<<present<<"%"<<endl;
        }


};

class Total : virtual public T1T2T3 , virtual public P1P2 , virtual public Attendance
{
    protected:
        int total;
        char grade;
    public:
        void totalmarks()
        {
            total=T1+T2+T3+P1+P2+(present/20);
            switch (total)
            {
            case 0 ... 49:
            grade='F';
                break;
            case 50 ... 59:
            grade='D';
                break;
            case 60 ... 69:
            grade='C';
                break;
            case 70 ... 79:
            grade='B';
                break;
            case 80 ... 100:
            grade='A';
                break;
            default:
                break;
            }

            cout<<"Total Marks are : "<<total<<endl;
            cout<<"Grade           : "<<grade<<endl;
        }


};

class Faculty : virtual public Total
{
    public:
        void setmarks(float a,float b,float c,float d,float e,float f)
        {
            T1=a;
            T2=b;
            T3=c;
            P1=d;
            P2=e;
            present=f;
        }

};

class Administration : virtual public Faculty
{
    public:
        void setdata(string s, int rno, float a, float b, float c, float d, float e, float f)
        {
            name = s;
            roll_no = rno;
            setmarks(a, b, c, d, e, f);
        }

        void display()
        {
            Display1();
            Display2();
            Display3();
            Display4();
            totalmarks();
            cout<<endl<<endl;
        }


void func1(Administration s[],int No)
{

        for(int i = 0; i < No; i++)
    {
        for(int j = i+1; j < No; j++)
        {
            Administration temp;
            if(s[i].name > s[j].name)
            {
             temp = s[i];
             s[i] = s[j];
             s[j] = temp;
            }
        }
    }

}

void func2(Administration s[],int No)
{

        for(int i = 0; i < No; i++)
    {
        for(int j = i+1; j < No; j++)
        {
            Administration temp;
            if(s[i].grade == s[j].grade)
            func1(s,No);
            else
            if(s[i].grade > s[j].grade)
            {
             temp = s[i];
             s[i] = s[j];
             s[j] = temp;
            }
        }
    }

}

void func3(Administration s[],int No)
{
    string sname;
    cout<<"Enter Name of the Student : ";
    getline(cin,sname);
    for(int i=0;i< No ;i++)
    {
        if(sname==s[i].name)
        {
        s[i].display();
        break;
        }
        else
        cout<<"No such student exists "<<endl;
    }

}

void MakeStudent(Administration s[],int No)
    {
        string Name;
        int roll;
        float a,b,c,d,e,f;
        cout<<"Enter Name : ";
        getline(cin,Name);
        cout<<"Enter Roll No : ";
        cin>>roll;
        cout<<"Enter T1 : ";
        cin>>a;
        cout<<"Enter T2 : ";
        cin>>b;
        cout<<"Enter T3 : ";
        cin>>c;
        cout<<"Enter P1 : ";
        cin>>d;
        cout<<"Enter P2 : ";
        cin>>e;
        cout<<"Enter Attendance : ";
        cin>>f;
        cin.ignore();
        setdata(Name,roll,a,b,c,d,e,f);
    }


};

int main()
{
    int No;
    cout<<"Enter Number of students : ";
    cin>>No;
    cin.ignore();
    Administration s[No];
    for(int i=0;i<No;i++)
    {
        s[i].MakeStudent(s,No);
    }
    int n;
    cout<<"What would you like to do ?"<<endl;
    cout<<"1 Namewise sorting  "<<endl;
    cout<<"2 Gradewise sorting "<<endl;
    cout<<"3 Search by name"<<endl;
    cin>>n;
    cin.ignore();
    switch (n)
    {
    case 1:

    s[0].func1(s,No);
    cout<<" Namewise sorting "<<endl;
    for (int i = 0; i < No; i++)
    {
        s[i].display();
    }
        break;
    case 2:
    s[0].func2(s,No);
    cout<<" Gradewise sorting "<<endl;
    for (int i = 0; i < No; i++)
    {
        s[i].display();
    }
    break;
    case 3:
    cout<<" Search by name "<<endl;
    s[0].func3(s,No);
    break;
    default:
        exit(0);
        break;
    }
    return 0;
}
