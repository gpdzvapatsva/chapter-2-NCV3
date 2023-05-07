#include <iostream>

using namespace std;
int student_marks[5];

int main()
{
student_marks[0]=52;
student_marks[1]=62;
student_marks[2]=94;
student_marks[3]=24;
student_marks[4]=78;
for (int i=0; i<=4; i++){
    cout<<student_marks[i]<<endl;
}
    return 0;
}
