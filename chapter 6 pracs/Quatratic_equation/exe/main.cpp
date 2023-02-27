#include <iostream>

using namespace std;

int main()
{
double monthly_sales, total_salary=0;
string f_name="", s_name="";
cout<<"Please enter your firstname "<<endl;
cin>>f_name;
cout<<"Please enter your surname"<<endl;
cin>>s_name;
cout<<"Please enter your monthly sales"<<endl;
cin>>monthly_sales;
if (monthly_sales>=50000){
    total_salary=(monthly_sales * 0.16)+6750;
    cout<<"Firstname:\t"<<f_name<<endl;
    cout<<"Surname:\t"<<s_name<<endl;
    cout<<"Your salary is :"<<total_salary<<endl;
}
else if ((monthly_sales<50000) || (monthly_sales>=40000)){
     total_salary=(monthly_sales * 0.14)+6500;
    cout<<"Firstname:\t"<<f_name<<endl;
    cout<<"Surname:\t"<<s_name<<endl;
    cout<<"Your salary is :"<<total_salary<<endl;

}
else if ((monthly_sales<40000) || (monthly_sales>=30000)){
     total_salary=(monthly_sales * 0.12)+6250;
    cout<<"Firstname:\t"<<f_name<<endl;
    cout<<"Surname:\t"<<s_name<<endl;
    cout<<"Your salary is :"<<total_salary<<endl;
}
else if ((monthly_sales<30000) && (monthly_sales>=1000)){
     total_salary=(monthly_sales * 0.03)+5000;
    cout<<"Firstname:\t"<<f_name<<endl;
    cout<<"Surname:\t"<<s_name<<endl;
    cout<<"Your salary is :"<<total_salary<<endl;
}
else if (monthly_sales<1000){
          total_salary=4000;
        cout<<"Firstname:\t"<<f_name<<endl;
    cout<<"Surname:\t"<<s_name<<endl;
    cout<<"Your salary is :"<<total_salary<<endl;
cout<<"Please collect your warning letter from HR"<<endl;
}
else{
   cout<<"Incorrect entry"<<endl;
}
    return 0;


}
