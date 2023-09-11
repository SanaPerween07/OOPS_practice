#include<iostream>
using namespace std;

class OddEven{
    private:
    int a;

    public:
    void getdata(){
        cin>>a;
    }
    void check(){
        if(a % 2 == 0){
            cout<<a<<" is an even number.";
        }
        else{
            cout<<a<<" is an odd number.";
        }
    }
};

int main(){
    OddEven obj;
    obj.getdata();
    obj.check();
    return 0;
}