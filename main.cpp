#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter number of customers:";
    cin>>N;
    int bill, total = 0;
    for (int i =1 ; i <=N; i++){
        cout<<"Enter bill for customer" <<i<<":";
        cin>>bill;
        if(bill>900){
            cout<<"Free Mug"<<endl;
        }
        total+=bill;
    }
    cout<<"Total money collected:"<<total<<endl;
    return 0;
}