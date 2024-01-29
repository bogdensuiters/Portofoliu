#include <iostream>
using namespace std;

int main()
{
	int side1; // side lenght of the cube
	float volcub;
	cout << "\n\n Calculate The volume of a cube  :\n"; // output message
	cout << "--------------------------------------\n"; // output message separator line

	cout << "Input the side of a cube : "; // prompting the user to input side lenght
	cin >> side1; // Taking input

	// calculate the volume of a cube
	volcub = (side1 * side1 * side1);

	cout << "The volume of the cube is : " << volcub << endl; //displaying the volume
	cout << endl; // outputting a blank line for better readability

	return 0; //returning 0 to indicate the successful program execution

}