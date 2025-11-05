#include<iostream>
using namespace std;
class bill
{
    private:
    int customerID,units;
    char customername[50],address[50];
    float amount;
    void getdetails()
    {
        cout<<"enter customerID:";
        cin>>customerID;
        cout<<"enter customer name:";
        cin>>customername;
        cout<<"enter address:";
        cin>>address;
        cout<<"enter the no of units:";
        cin>> units;
    }
void calculate()
{
    else if(units<400)
    amount={100*2.25}+{units-200}*4.25;
    else if(units<=600)
    amount(100*2.25)+(200*4.25)+(400*6.25)*6.25;
else 
amount=(100*2.25)+(200*4.25)+(400*6.25)+(units-500)*9;
}
void print()
{
    cout<<"\n customerid:"<<customerID;
    cout<<"\n name:"<<customername;
    cout<<"\n address:"<<address;
    cout<<"\n units:"<<units;
    cout<<"\n amount:"<<amount;
}
};
int main()
{
    ebill B;
    B.getdetails();
    B.calculate();
    B.print();
}
    
}