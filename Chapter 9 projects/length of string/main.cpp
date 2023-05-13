#include <iostream>
#include <string>
using namespace std;
string instruction("Please enter some text!\n"),
lineformat( 50, '-');
int main()
{
instruction+="Terminate the input with an empty line.\n ";
cout << lineformat << '\n' << instruction<< lineformat << endl;
string text,lineformat;
// Empty strings
while( true)
{
getline( cin, lineformat);
// Reads a line of text
if( lineformat.length() == 0)
// Empty line?
break;
// Yes ->end of the loop
text = lineformat + '\n' + text;
// Inserts a new line at the beginning.
}
// Output:
cout << lineformat<< '\n'
<< "Your lines of text in reverse order:"
<< '\n' << lineformat << endl;
cout << text << endl;
return 0;
}

