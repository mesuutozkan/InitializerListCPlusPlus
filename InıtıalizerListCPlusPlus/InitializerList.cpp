#include <iostream>

using namespace std;

class member
{

private:

	string memberType;

	double coefficient;

public:
	//use the right combination of below to use default constructor.
	
	/*
	* begginer use:
	* 
	member()
	{
		memberType = "begginer";
		coefficient = 1;
	
		cout << "Default constructed. " << memberType << " " << coefficient << endl;

	}
	*/
 
	/*
	* intermediate use.(If you use like this, use only 1 constructor, with its initial values.)
	* 
	member(string _memberType = "intermediate", double _coefficient = 1.5)
	{
	
		memberType = _memberType;
		coefficient = _coefficient;

	}
	*/

	/*
	* expert use.
	* 
	member(string _memberType = "expert", double _coefficient = 2.0) : memberType(_memberType), coefficient(_coefficient)
	{
		//usually empty space. But as an information below is used.
		cout << "Usage of Initializer List" << endl;
	}
	*/


	/*
	*constructor without default.
	* 
	member(string _memberType, double _coefficient)
	{
		memberType = _memberType;
		coefficient = _coefficient;

		cout << "Constructed in main. " << _memberType << " " << _coefficient << endl;

	}
	*/

	void printInformation()
	{
		cout << "Member Type: " << memberType << " Member Coefficient: " << coefficient << endl;
	}

};

int main()
{
	member John;
	member Martin("Operator", 1.5);

	John.printInformation();

	Martin.printInformation();
}