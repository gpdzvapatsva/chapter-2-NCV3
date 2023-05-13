#include <iostream>
using namespace std;
//function prototype
void selectionSort(int arr[], int x );
int main()
{
    int student_marks[] = {63,85,60,17,63,29, 84, 45, 57, 61};
    int size_of_array;
   size_of_array = sizeof(student_marks)/sizeof(int);
    cout<<"Unsorted Array :";
  for (int x: student_marks){
    cout<<x<< "   ";
  }
   cout<<endl;
    selectionSort(student_marks,size_of_array );
    cout<<"Sorted Array :";
     for (int x: student_marks){
    cout<<x<< "   " ;
  }
    return(0);
}
//function to perform selection sort
void selectionSort(int marks[], int n)
{
    int i,j,min_in;
    //outer loop
    for(i=0;i<n;i++)
    {
        min_in = i;//initialising smallest position to i
        //inner loop for comparison throughout
        for(j=i+1;j<n;j++)
            //selection statement to compare item
            if (marks[j] < marks[min_in])
                //identifying the smaller value
                min_in = j;

        swap(marks[i],marks[min_in]);
    }
}

