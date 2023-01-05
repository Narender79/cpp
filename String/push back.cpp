#include <iostream>
#include <string>
using namespace std;

// Function to demonstrate push_back()
void push_backDemo(string str1, string str2)//
{
	// Appends character by character str2
	// at the end of str1
	for(int i = 0; str2[i] != '\0'; i++)
	{
		str1.push_back(str2[i]);
	}
	cout << "After push_back : ";
	cout << str1;
}
		
// Driver code
int main()
{
	string str1("Geeksfor");
	string str2("Geeks");

	cout << "Original String : " << str1 << endl;
	push_backDemo(str1, str2);

	return 0;
}
