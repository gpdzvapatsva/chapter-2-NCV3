//Voter verification and venue allocation system
#include<iostream>
using namespace std;

int main()
{
    char gender;
    int grade;
    double age;
    cout<<"\nEnter Your grade    : "<<endl;
    cin>>grade;
    if(grade==8)
    {
        cout<<"\nEnter Your Gender : ";
        cin>>gender;
        cout<<"\nEnter Your age in years  : ";
        cin>>age;
         if (cin.fail()){
            cout<<"Entry not recognised"<<endl;
            return 0;
         }
        if((gender=='M' || gender=='m') && (age>=14 || age<15))
        {
             cout<<"\nGo To Room-5";
        }
        else  if((gender=='F' || gender=='f') && (age>=14 || age<15))
        {
             cout<<"\nGo To Room-6";
        }
        else
        {
            cout<<"\n Invalid range of input. Please try again";
        }
    }
    else if(grade==9)
    {
        cout<<"\nEnter Your Gender : ";
        cin>>gender;
         cout<<"\nEnter Your age in years  : ";
         cin>>age;
          if (cin.fail()){
            cout<<"Entry not recognised"<<endl;
            return 0;
         }
        if((gender=='M' || gender=='m') && (age>=15 && age<16))
        {
             cout<<"\nGo To Room-7";
        }
        else  if((gender=='F' || gender=='f')&& (age>=15 && age<16))
        {
             cout<<"\nGo To Room-8";
        }
        else
        {
            cout<<"\n Invalid range of input. Please try again";
        }
    }
      else if(grade==10)
    {
        cout<<"\nEnter Your Gender : ";
        cin>>gender;
         cout<<"\nEnter Your age in years  : ";
         cin>>age;
         if (cin.fail()){
            cout<<"Entry not recognised"<<endl;
            return 0;
         }
        if((gender=='M' || gender=='m') && (age>=16 && age<17))
        {
             cout<<"\nGo To Room-9";
        }
        else  if((gender=='F' || gender=='f') &&  (age>=16 && age<17))
        {
             cout<<"\nGo To Room-10";
        }
        else
        {
            cout<<"\n Invalid range of input. Please try again";
        }
    }
      else if(grade==11)
    {
        cout<<"\nEnter Your Gender : ";
        cin>>gender;
         cout<<"\nEnter Your age in years  : ";
         cin>>age;
          if (cin.fail()){
            cout<<"Entry not recognised"<<endl;
            return 0;
         }
        if((gender=='M' || gender=='m') && (age>=17 && age>=18))
        {
             cout<<"\nGo To Room-3";
        }
        else  if((gender=='F' || gender=='f') && (age>=17 && age<18))
        {
             cout<<"\nGo To Room-4";
        }
        else
        {
            cout<<"\n Invalid range of input. Please try again";
        }
    }
    else{
        cout<<"Voter verification failed. Please consult the polling officer"<<endl;
    }
    return 0;
}
