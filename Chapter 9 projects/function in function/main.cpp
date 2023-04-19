//program to check if a person's age is over the legal_age
//and citizen status checked
#include <iostream>
using namespace std;
char age_check();
bool check_Status();
int main(){
    char age_result=age_check();
    if (age_result==' '){
        return 0;
    }
    bool status=check_Status();

    if (age_result=='Y' && status==true){
     cout<<"You are eligible to vote"<<endl;
    }
    else  if (age_result=='N' || status==false){
             cout<<"You are NOT eligible to vote"<<endl;
    }

  return 0;
 }

char age_check(){
     int age;
 cout<<"Please enter age" <<endl;
 cin>>age;
 if (cin.fail()){
    cout<<"Incorrect input"<<endl;
    return ' ';
 }
 if (age>=18){
    return 'Y';
 }
 else

     {
    return 'N';
 }

  }

 bool check_Status(){
 char cit_status;
 cout<<"enter citizen status [C=citizen or N=Non-citizen]"<<endl;
 cin >>cit_status;
//evaluating a relational expression and storing answer in an integer
 if (cin.fail()){
    cout<<"Incorrect input"<<endl;
    return ' ';
 }
    if (cit_status=='c' || cit_status=='C'){
     return true;
    }
    else {
            return false;

    }

 }


