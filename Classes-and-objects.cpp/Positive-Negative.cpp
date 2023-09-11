#include<iostream>
using namespace std;

class PosNeg{
    private:
    int a;

    public:
    void getdata(){
        cin>>a;
    }
    void check(){
        if(a > 0){
            cout<<a<<" is a positive number.";
        }
        else if(a < 0){
            cout<<a<<" is a negative number.";
        }
        else{
            cout<<"Zero";
        }
    }
};

int main(){
    PosNeg obj;
    obj.getdata();
    obj.check();
    return 0;
}