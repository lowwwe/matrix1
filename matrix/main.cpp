// author
// date
// estimated time
// time session 1
// time session 2
// ...
// total time
// error percentage of estimated time over or under



#include "Matrix.h" // matrix 
#include <iostream> // cout


void testConstructor();
void testAddition();


/// <summary>
/// default starting point for c programs
/// </summary>
/// <returns></returns>
int main()
{
	testConstructor();
	testAddition();
	return 1;
}

/// <summary>
/// method to test default and valued  constructors
/// </summary>
void testConstructor()
{
	Matrix matrix1;
	Matrix matrix2{ 1.0f, 2.0f,3.0f,
				1.0f, 2.0f,3.0f,
				1.0f, 2.0f,3.0f };
	if (matrix1.m11 == 0.0f)
	{
		std::cout << "so far so good default constuctor" << std::endl;
	}

	// need to add simple test for contructoir with values
}



/// <summary>
/// method to test addition of matrics
/// </summary>
void testAddition()
{
	Matrix matrixA;
	Matrix matrixB{ 1.0f, 2.0f,3.0f,
				1.0f, 2.0f,3.0f,
				1.0f, 2.0f,3.0f };
	matrixA = matrixB + matrixB;
	if (matrixA.m11 == 2.0f)
	{
		std::cout << "so far so good addition 1" << std::endl;
	}
	Matrix matrixC { 5.0f, 5.0f,3.0f,
				0.0f, 4.0f,3.0f,
				4.0f, -2.0f,6.0f };
	matrixA = matrixC + matrixB;
	if (matrixA.m32 == 0.0f)
	{
		std::cout << "so far so good addition 2" << std::endl;
	}


	// you will need to check all nine values for multiple cases via the watch/debugger
}
