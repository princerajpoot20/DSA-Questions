#include <iostream>
using namespace std;

class landline{
protected:

    string subscriberName;
    int number;
    
public:

    landline(){}
    landline(string s,int n){
        subscriberName=s;
        number=n;
    }
    void setLandlineData(string s,int n){
        subscriberName=s;
        number=n;
    }
    void call(int sub_number){

        cout<<"Calling to...."<<sub_number<<endl;
    }
    void receive(){
        cout<<"Call received"<<endl;
    }

};

class mobile : public landline{
protected:
    string name[100];
    int phoneNumber[100];
    
    int callHistory[20];
    
    int index;
    int size1;
    int size2;
    int startingIndex;

public:
    
    mobile(){
        index=0;
        size1=0;
        size2=0;
        startingIndex=0;
    }
    
    void callWithName(string str){
        int j=-1;
        for(int i=0;i<100;i++){

            if(str==name[i]){
                j=i;
                break;
            }
        }
        if(j==-1){
            cout<<"This name is not in your phonebook"<<endl;
        }
        else{
            call(phoneNumber[j]);
            callHistoryUpdate(phoneNumber[j]);
        }
    }
    void callHistoryUpdate(int n){
        
        if((startingIndex+size1)<20){
            callHistory[startingIndex+size1]=n;
            size1++;
            
        }
        else{
            callHistory[19-startingIndex-size1]=n;
            startingIndex++;
        }

    }
    
    void displayHistory(){
        cout<<"Call History"<<endl;
        
        for(int i=0;i<size1;i++){
            cout<<i+1<<". ";
            if((startingIndex+i)<20){
                cout<<callHistory[startingIndex+i]<<endl;
            }
            else{
                cout<<callHistory[20-startingIndex-i]<<endl;
            }
            
        }
    }
    
    void callFromHistory(){

        displayHistory();
        
        cout<<"Enter your choice"<<endl;
        int choice;
        cin>>choice;
        
        if(startingIndex+choice<20){
            call(callHistory[startingIndex+choice-1]);
            callHistoryUpdate(callHistory[startingIndex+choice-1]);
        }
        else{
            call(callHistory[20-startingIndex-choice+1]);
            callHistoryUpdate(callHistory[20-startingIndex-choice+1]);
        }
    }
    void addContactToPhoneBook(string s,int n){
        name[size2]=s;
        phoneNumber[size2]=n;
        size2++;
    }

};


int main() {

    
    landline lan;
    mobile mob;

    lan.setLandlineData("PrinceLandline",10001);
    lan.call(1234);
    //lan.receive();
    cout<<endl;

    
    mob.addContactToPhoneBook("prince", 1000);
//    mob.addContactToPhoneBook("ashish", 1001);
//    mob.addContactToPhoneBook("ayush", 1002);
//    mob.addContactToPhoneBook("vivek", 1003);
//    mob.addContactToPhoneBook("princerajpoot", 1004);

    mob.callWithName("prince");
//    mob.callWithName("vivek");
//    mob.callWithName("abc");
//    mob.callWithName("ayush");
//    mob.callWithName("ashish");
    
//    cout<<"enter the name you want to call::"<<endl;
//    string str;
//    cin>>str;
//    mob.callWithName(str);
    
//    mob.displayHistory();
   
    mob.callFromHistory();
//    mob.callFromHistory();
//    mob.callFromHistory();
//    
//    mob.displayHistory();
    
    
    
  return 0;
}
