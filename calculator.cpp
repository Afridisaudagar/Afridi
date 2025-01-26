#include<iostream>
using namespace std;
class calc{
    int x,y;
    char symbol;
    public:
    void calculator(){
  cout<<"Enter 1st no. ";
  cin>>x;
  cout<<"Enter 2nd no. ";
  cin>>y;
  cout<<"Enter  operation you want to perform on this two number "<<endl;
  cin>>symbol;
  switch(symbol){
    case '+':
    cout<<"The sum of ther x+y= "<<x+y<<endl;
    break;
    case '-':
    cout<<"The sum of ther x+y= "<<x-y<<endl;
    break;
    case '*':
    cout<<"The sum of ther x+y= "<<x*y<<endl;
    break;
    case '/':
    cout<<"The sum of ther x/y= "<<x/y<<endl;
    break;

    default:
    cout<<"Error! operator is not correct";    
  }

    }
};

int main(){
    calc obj;
    obj.calculator ();
    return 0;
}