// author
// estimated time
// time session 1
// time session 2
// ...
// total time
// error percentage of estimated time over or under



#include "Matrix.h"
#include <iostream>
#include <ctime>


void testConstructor();
void testAddition();
void testSubtraction();
void testScalarMultiplication();

/// <summary>
/// default starting point for c programs
/// </summary>
/// <returns></returns>
int main()
{
	
	testSubtraction();
	testScalarMultiplication();
	testConstructor();
	testAddition();
	std::system("pause");
	return 1;
}

/// <summary>
/// method to test default and valued  constructors
/// </summary>
void testConstructor()
{
	Matrix matrix1;
	Matrix matrix2{ 1.0f, 2.0f,3.0f,
				4.0f, 5.0f,6.0f,
				7.0f, 8.0f,9.0f };
	if (matrix1.m11 == 0.0f)
	{
		std::cout << "so far so good default constuctor" << std::endl;
	}
	if (matrix2.m11 == 1.0f)
	{
		std::cout << "so far so good 9 value constuctor" << std::endl;
	}

	
}



/// <summary>
/// method to test addition of matrics
/// </summary>
void testAddition()
{
	Matrix matrixA;
	Matrix matrixB{ 5.0f, 2.0f,3.0f,
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


/// <summary>
/// method to test subtraction of matrics
/// </summary>
void testSubtraction()
{
	
	Matrix matrixA{ 1.0f, 2.0f,3.0f,
				1.0f, 2.0f,3.0f,
				1.0f, 2.0f,3.0f };
	Matrix matrixB{ 5.0f, 5.0f,3.0f,
				0.0f, 4.0f,3.0f,
				4.0f, -2.0f,6.0f };
	Matrix matrixC;
	matrixC = matrixA - matrixB;
	if (matrixC.m11 == -4.0f)
	{
		std::cout << "so far so good subtraction" << std::endl;
	}
}

/// <summary>
/// method to test if scalar multiplication is working
/// </summary>
void testScalarMultiplication()
{
		Matrix matrixA{ 
				1.0f, 2.0f,3.0f,
				5.0f, 0.0f,3.0f,
				7.0f, 8.0f,3.0f };
		Matrix matrixB;
		matrixB = matrixA * 2.0f;
		if (matrixB.m11 == 2.0f)
		{
			std::cout << "so far so good scalar multiplication" << std::endl;
		}
}
