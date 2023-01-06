//
//  main.cpp
//  Assignment3-Que2
//
//  Created by Prince Rajpoot on 23/05/22.
//

#include <iostream>
using namespace std;
class student{
protected:
    string name;
    int rollNo;
    
public:
    void setStudentData(string s,int n){
        name=s;
        rollNo=n;
    }
    
    void print(){
        cout<<"Name of student: "<<name<<endl;
        cout<<"RollNo: "<<rollNo<<endl;
    }
};

class T1T2T3 : public student{
protected:
    int t1,t2,t3;
   
public:
    void setT1T2T3Marks(int a,int b,int c){
        t1=a; t2=b;t3=c;
    }
    
    void print(){
        
    }
    
    
};
class P1P2 : public student{
  
protected:
    int p1,p2;
   
public:
    void setP1P2Marks(int a,int b){
        p1=a; p2=b;
    }
    
    void print(){
        
    }
};
class Attendance : public student{
  
protected:
    int attend;
   
public:
    void setAttendanceData(int a){
        attend=a;
    }
    
    void print(){
        
    }
};

class Total : public T1T2T3,public P1P2, public Attendance{
    
protected:
    int totalMarks;
    char grade;
   
public:
    void print(){
        
    }
    
};

class Faculty{
    
public:
    void setMarksAndAttendance(){
        
    }
};

class Administration{
    
public:
    void setNameRollNo(){
        
    }
    void calculateTotalAndGrade(){
        
    }
    
};

int main() {
    
    
    
    
    return 0;
}
