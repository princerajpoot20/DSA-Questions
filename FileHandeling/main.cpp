
]//
//  main.cpp
//  FileHandeling
//
//  Created by Prince Rajpoot on 24/05/22.
//

#include <iostream>;
#include <fstream>;
using namespace std;

int main(){

    
    
    
    ofstream outfile ("salary.txt"); //creates outfile and connects salary to it

    outfile<<"72000 Rs ";

    outfile.close(); //disconnect salary from outfile and connect to infile

    ifstream infile ("salary.txt");

    string str;
    
    infile>>str;
    cout<<str<<endl;
    
    infile.close();
}
