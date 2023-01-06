#include <iostream>
using namespace std;

class Student{
    protected: string name; int Branch_Number;
};

class CSE : protected Student {
    protected: float CSE_sub1_marks, CSE_sub2_marks, CSE_sub3_marks;
    public:
        CSE(){Branch_Number=1;}
        void getdata(){
            cin >> name >> CSE_sub1_marks >> CSE_sub2_marks >> CSE_sub3_marks;
        }
        void display(){
            cout << Branch_Number << " : " << name << " : " << CSE_sub1_marks << " , " << CSE_sub2_marks << " , " << CSE_sub3_marks << endl;
        }
};

class ECE : protected Student {
    protected: float ECE_sub1_marks, ECE_sub2_marks, ECE_sub3_marks;
    public:
        ECE(){Branch_Number=2;}
        void getdata(){
            cin >> name >> ECE_sub1_marks >> ECE_sub2_marks >> ECE_sub3_marks;
        }
        void display(){
            cout << Branch_Number << " : " << name << " : " << ECE_sub1_marks << " , " << ECE_sub2_marks << " , " << ECE_sub3_marks << endl;
        }
};

int main(){
    int c,e;
    cin >> c >> e;
    CSE cse[c]; ECE ece[e];
    for(int i=0;i<c;i++){
        cse[i].getdata();
    }
    
    for(int i=0;i<e;i++){
        ece[i].getdata();
    }
    
    for(int i=0;i<c;i++){
        cse[i].display();
    }
    
    for(int i=0;i<e;i++){
        ece[i].display();
    }

    return 0;
}
