//logical arithmetic and comparison operators
# include <iostream>
using namespace std;
int main ()
{
// variables declarations
int num1, num2;// declaration of two  integers variables
bool boolVar1 = true, boolVar2 = false;// declare and initialize two bool variable

//prompt user input and capture input
cout << " Enter first non-zero value" << endl;
cin >> num1;
cout << " Enter second non- zero value "<< endl;
cin >> num2;

//*****ARITHMETIC OPERATORS*******/
//Additional operator '+'
	cout << "Sum of " << num1 << " + " << num2 << " = " << num1 + num2 << endl;

	//subtraction operator '-'
	cout << "Difference of " << num1 << " - " << num2 << " = " << num1 - num2 << endl;

	//multiplication operator
	cout << "Product of " << num1 << " * " << num2 << " = " << num1 * num2 << endl;

	//division operarator
	cout << "Division of " << num1 << " / " << num2 << " = " << num1 / num2 << endl;

	//modulus operator
	cout << "Modulus of " << num1 << " % " << num2 << " = " << num1 % num2 << endl;

	//increment operaator ++ as prefix
	cout << "Prefix Increment intA by 1 : " << num1 << endl;

	//increment operaator ++ as postfix
	cout << "Postfix Increment " << num2 << "by 1 : " << num2++ << endl;

	//decrement operator -- as a prefix
	cout << "Prefix Decrement intA by 1 : " << --num1 << endl;

	//decrement operator -- as a postfix
	cout << "Postfix Increment " << num2 << "by 1 : " << num2-- << endl;

	//increment and assign operation eg increase num1 by 3
	num1 += 3;  //This is the same as num1 = num1 + 3
	cout << "Increment asn assign num1 by 3 : " << num1 << endl;

	//comparison operator
	//greater than operator           
	//in brackets typecasting from integer to boolean variable
	cout << num1 << "greater than : " << num2 << " = " << (bool)(num1 > num2) << endl;

	//less than operator
	cout << num1 << "less than : " << num2 << " = " << (bool)(num1 < num2) << endl;

	//equal to operator
	cout << num1 << "equal to : " << num2 << " = " << (bool)(num1 == num2) << endl;

	//not equal to operator
	cout << num1 << "not equal to : " << num2 << " = " << (bool)(num1 != num2) << endl;

	//Boolean operators
	//boolean &&
	cout << boolVar1 << "&&" << boolVar2 << " = " << (boolVar1 && boolVar2) << endl;

	//boolean operator ||
	cout << boolVar1 << "||" << boolVar2 << " = " << (boolVar1 || boolVar2) << endl;

	//boolean operator !
	cout << boolVar1 << "!" << boolVar2 << " = " << (boolVar1) << endl;

	//true && true = true
	//true && false = false
	//false && true = false
	//false && false = false
	//true || true = false
	//true || false = true

	//Pointer operations
	//declare a pointer
	int* ptr = nullptr;
	//assign a value to the poimter
	ptr = & num1;
	//output address of intA
	cout << "Address of intA : " << &num1 << endl;
	//dereference the pointer to get the value at the memory location
	cout << "Value at memory location pointed by ptr = " << *ptr << endl;

	return 0;







}
