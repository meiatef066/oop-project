#include <bits/stdc++.h>
#include <chrono>
#include <ctime> 
#include "account.h"  
using namespace std;
// arrays
vector<account>arr;
void login();
void registerwindow();
//2 create create_account
void create_account(){
    account a;
    cout<<"enter new user name\n";
    cin>>a.username;
     cout<<"enter password\n";
    cin>>a.password;
       cout<<"enter amount $\n";
    cin>>a.amount;
    arr.push_back(a);
    cout<<"User created successuflly\n";
      registerwindow();
}

// page log in // page 2 
void   page_login(account a,int i){
    cout<<"user option :\n";
    cout<<"1. withdraw \n";
    cout<<"2. Deposit \n";
    cout<<"3. Get account summary \n";
    cout<<"4. close account \n";
    cout<<"5. log out \n";
int c;

while(cin>>c){
    if(c==1){
     a.withdraw();
    }else if(c==2){
     a.deposite();
    }
     else if(c==3){
    a.account_summary();
    } else if(c==4){
     arr.erase(arr.begin()+i);
    }else if(c==5){
     registerwindow();   
    }
}


}

// page 1
void registerwindow(){
    cout<<"1. Log in ?  \n";
    cout<<"2. create account \n";
    cout<<"3. manger login \n";
    cout<<"4. Exit\n";
  int choice;
  cin>>choice;
  if(choice==1){
      login();
  }else if(choice==2) {
      create_account();
  }else if(choice==3) {
  
  }else if(choice==4) {
    cout<<"Good Luck\n";  
  }else{
      cout<<" sorry this choice not valid you can try again\n";
  }
}

//1 log in
void login(){
    string name,password;
    cout<<"enter your user name & password\n";
    cin>>name>>password;
    bool Isfind=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i].username==name&&
        arr[i].password==password){
            cout<<"successuflly log in\n";
            page_login(arr[i],i);
            Isfind=1;
            break;
        }
    }
    if(Isfind==0){
        cout<<" you write a wrong user name or passowrd\n";
        cout<<"you can try again or \ncreate new account if you didn`t have\n ";
            registerwindow();
    }
    
}

int main()
{
    cout<<"          Hello in our bank system         \n";
    cout<<"                please enter your choice      \n";
    registerwindow();
    return 0;
}

