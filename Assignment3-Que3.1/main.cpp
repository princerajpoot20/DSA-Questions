#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class landline{
protected:

    string subscriberName;
    int number;
    
public:

    landline(){cout<<"Landline object created"<<endl;}
    landline(string s,int n){
        subscriberName=s;
        number=n;
    }
    void setLandlineData(string s,int n){
        subscriberName=s;
        number=n;
    }
    void call(int sub_number){

        cout<<"call function called"<<endl;
    }
    void receive(){
        cout<<"Call received"<<endl;
    }

};

class mobile : public landline{
protected:
    //string name[100];
    //int phoneNumber[100];
    vector<string>name;
    vector<int>phoneNumber;
    //int callHistory[20]; // to maintain the call history...
    queue<int> callHistory;
    //static int ind;  // to maintain the index of callHistory array.


public:
    
    void callWithName(string str){
        int index=-1;
        for(int i=0;i<100;i++){

            if(str==name[i]){
                index=i;
                break;
            }
        }
        if(index==-1){
            cout<<"This name is not in your phonebook"<<endl;
        }
        else{
            call(phoneNumber[index]);
            callHistoryUpdate(phoneNumber[index]);
        }
    }
    void callHistoryUpdate(int n){
//        cout<<"Number for adding in history  "<<n<<endl;
//        cout<<"Pending....."
        
        if(callHistory.size()<20){
            callHistory.push(n);
        }
        else{
            callHistory.pop();
            callHistory.push(n);
        }

    }
    
    void displayHistory(){
        cout<<"Call History"<<endl;
        queue<int> temp=callHistory;
        for(int i=0;i<callHistory.size();i++){
            cout<<temp.front()<<endl;
            temp.pop();
        }
    }
    
    void callFromHistory(int n){

        cout<<"List of all the contact in the history::"<<endl;
        //cout<<"Enter your choice::"<<endl;
        queue<int>temp=callHistory;
        for(int i=0;i<callHistory.size();i++){
            cout<<i+1<<" ."<<temp.front()<<endl;
            temp.pop();
            
        }
        cout<<"Enter your choice"<<endl;

        int choice;
        cin>>choice;

        call(choice); //call funtion called.
    }
//    void addContactToPhoneBook(string name,int n){
//        name[0]=name;
//        phoneNumber[0]=n;
//
//    }

};


int main() {

    landline lan;
    mobile mob;

    lan.setLandlineData("PrinceLandline",10001);
    lan.call(1234);
    lan.receive();

    mob.callHistoryUpdate(100);
    mob.callHistoryUpdate(200);
    mob.callHistoryUpdate(300);
    
    mob.displayHistory();
    
    mob.callHistoryUpdate(400);
    mob.displayHistory();
    
    

  return 0;
}
