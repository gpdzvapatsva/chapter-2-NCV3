#include <iostream>
using namespace std;
int main(){
    int age=0;
    double BMI=0;
    char gender;
cout<<"Enter age"<<endl;
cin>>age;
cout<<"Enter your gender"<<endl;
cin>>gender;

cout<<"Enter your BMI"<<endl;
    cin>>BMI;

  if (age >=18 && age<=45) {
        if (gender=='M' || gender =='m') {
            if ( BMI <=24.9 && BMI >=18.5) {
                cout << "You must go for a national service" << endl;
            }
            else{ cout << "We are going to be reffered to a physician" << endl;}
        }
        else if (gender=='F' || gender =='f'){
            cout << "You are allowed to skip national service" << endl;
        }
        else{
           cout << "You entered invalid gender" << endl;
        }
    }
    else {
       cout << " Your age is outside the acceptable range"<<endl;
    }

    return 0;

}

