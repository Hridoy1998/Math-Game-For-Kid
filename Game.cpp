#include <iostream>
#include <conio.h>
using namespace std;
class game
{
protected:
    double first_value;
    double second_value;
    double result;
    double check_result;

public:
    game(double a ,double b,double c, double d)
    {
        this->first_value=a;
        this->second_value=b;
        this->result=c;
        this->check_result=d;
    }
   void display()
   {
       cout<<"Welcome to Math game"<<endl;
   }
};
class summation:public game
{
public:
    summation(double a ,double b,double c, double d):game(a,b,c,d){}
     void display()
    {
       cout<<"enter two value for start the game"<<endl;
       cin>>first_value>>second_value;
       result=first_value+second_value;
       cout<<"enter the answer "<<first_value<<"+"<<second_value<<"= ?"<<endl;
       cin>>check_result;
       if(check_result==result)
       {
           cout<<"the answer is right"<<endl;
       }
       else
       {
           cout<<"the answer is not right . the right answer is = "<<result<<endl;
       }
    }
};
class subtraction:public game
{
    public:
    subtraction(double a ,double b,double c, double d):game(a,b,c,d){}
     void display()
    {
       cout<<"enter two value for start the game"<<endl;
       cin>>first_value>>second_value;
       result=first_value-second_value;
       cout<<"enter the answer "<<first_value<<"-"<<second_value<<"= ?"<<endl;
       cin>>check_result;
       if(check_result==result)
       {
           cout<<"the answer is right"<<endl;
       }
       else
       {
           cout<<"the answer is not right . the right answer is = "<<result<<endl;
       }
    }
};
class maltipication:public game
{
   public:
    maltipication(double a ,double b,double c, double d):game(a,b,c,d){}
     void display()
    {
       cout<<"enter two value for start the game"<<endl;
       cin>>first_value>>second_value;
       result=first_value*second_value;
       cout<<"enter the answer "<<first_value<<"*"<<second_value<<"= ?"<<endl;
       cin>>check_result;
       if(check_result==result)
       {
           cout<<"the answer is right"<<endl;
       }
       else
       {
           cout<<"the answer is not right . the right answer is = "<<result<<endl;
       }
    }
};
class division: public game
{
    public:
    division(double a ,double b,double c, double d):game(a,b,c,d){}
     void display()
    {
       cout<<"enter two value for start the game"<<endl;
       cin>>first_value>>second_value;
       result=first_value/second_value;
       cout<<"enter the answer "<<first_value<<"/"<<second_value<<"= ?"<<endl;
       cin>>check_result;
       if(check_result==result)
       {
           cout<<"the answer is right"<<endl;
       }
       else
       {
           cout<<"the answer is not right . the right answer is = "<<result<<endl;
       }
    }
};


int main()
{
    char option;
   do
    {
       double x,y,z,w;
    int name;
    game *ob1;
    summation *ob2;
    subtraction *ob3;
    maltipication *ob4;
    division *ob5;

    cout<<"***Welcome to the math game***"<<endl;
    cout<<"enter your choice"<<endl;
    cout<<"press '1' for summation"<<endl;
    cout<<"press '2' for subtraction"<<endl;
    cout<<"press '3' for maltipication"<<endl;
    cout<<"press '4' for division"<<endl;
    cin>>name;
    switch(name)
    {
    case 1:
       ob2=new summation(x,y,z,w);
    ob2->display();
        break;
    case 2:
        ob3=new subtraction(x,y,z,w);
    ob3->display();
    break;
    case 3 :
         ob4=new maltipication(x,y,z,w);
    ob4->display();
    break;
    case 4:
        ob5=new division(x,y,z,w);
     ob5->display();
     break;
    default :
        cout<<"unknown"<<endl;
        break;
     }
      cout<<"do you want to play  ? press 'y' for yes or 'n' for exit game"<<endl;
    option=getche();

    }
    while(option=='y');
}