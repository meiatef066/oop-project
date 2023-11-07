#include <iostream>
  
using namespace std;
class account{
    public:
string username;
int id;
string password;
int amount;
vector<int>proccesor;
void withdraw(){
    int value;
    cin>>value;
    amount -=value;
    proccesor.push_back(-value);
    cout<<"your withdraw is completed \n";
}
void deposite(){
     int value;
    cin>>value;
    amount +=value;
    proccesor.push_back(value);
    cout<<"your deposite is completed \n";
}
void account_summary(){
    cout<< "your currant balance is:"<<amount<<"\n";
    cout<<"- your all proccesor is\n";
    for(int i=0;i<proccesor.size();i++)
    {
        if(proccesor[i]>0){
            cout<<" you deposite :"<<proccesor[i]<<"\n";
        }else {
           cout<<" you withdraw :"<<proccesor[i]<<"\n";   
        }
    }
}

};
