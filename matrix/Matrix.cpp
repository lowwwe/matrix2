#include "Matrix.h"

/// <summary>
/// default constructor: set all values to zero
/// </summary>
/// <returns> creates the null matrix</returns>
Matrix::Matrix()
{
	m11 = 0.0f;
	m12 = 0.0f;
	m13 = 0.0f;
	m21 = 0.0f;
	m22 = 0.0f;
	m23 = 0.0f;
	m31 = 0.0f;
	m32 = 0.0f;
	m33 = 0.0f;
}

/// <summary>
/// Matrix constructor
/// </summary>
/// <param name="t_m11">value for m11</param>
/// <param name="t_m12">value for m12</param>
/// <param name="t_m13">value for m13</param>
/// <param name="t_m21">value for second row fisrt element</param>
/// <param name="t_m22">value for second row second element</param>
/// <param name="t_m23">value for second row third element</param>
/// <param name="t_m31">value for m31</param>
/// <param name="t_m32">value for m32</param>
/// <param name="t_m33">value for m33</param>
/// <returns>matrix with the nine values passed in</returns>
Matrix::Matrix(
	float t_m11, 
	float t_m12, 
	float t_m13,	
	float t_m21, 
	float t_m22, 
	float t_m23, 
	float t_m31, 
	float t_m32, 
	float t_m33)
{
	m11 = t_m11;
	m12 = t_m12;
	m13 = t_m13;
	m21 = t_m21;
	m22 = t_m22;
	m23 = t_m23;
	m31 = t_m31;
	m32 = t_m32;
	m33 = t_m33;
}


/// <summary>
/// Addition overload of plus operator
/// </summary>
/// <param name="t_right">matrix on the right</param>
/// <returns>sum of both matrix</returns>
Matrix Matrix::operator+(Matrix  t_right) 
{
	Matrix result;
	result.m11 = m11 + t_right.m11;
	result.m12 = m12 + t_right.m12;
	result.m13 = m13 + t_right.m13;
	
	result.m21 = m21 + t_right.m21;
	result.m22 = m22 + t_right.m22;
	result.m23 = m23 + t_right.m23;

	result.m31 = m31 + t_right.m31;
	result.m32 = m32 + t_right.m32;
	result.m33 = m33 + t_right.m33;


	return result;
}

/// <summary>
/// subtraction
/// </summary>
/// <param name="t_right"></param>
/// <returns></returns>
Matrix Matrix::operator-(Matrix t_right)
{
	Matrix result;
	result.m11 = m11 - t_right.m11;
	result.m12 = m12 - t_right.m12;
	result.m13 = m13 - t_right.m13;

	result.m21 = m21 - t_right.m21;
	result.m22 = m22 - t_right.m22;
	result.m23 = m23 - t_right.m23;

	result.m31 = m31 - t_right.m31;
	result.m32 = m32 - t_right.m32;
	result.m33 = m33 - t_right.m33;


	return result;
}



Matrix Matrix::operator*(int t_scale)
{
	float floatValue = static_cast<float>(t_scale);
	Matrix result = this->operator*(floatValue);
	return result;	
}

Matrix Matrix::operator*(float t_scale)
{
	Matrix result{
		m11 * t_scale,
		m12 * t_scale,
		m13 * t_scale,
		m21 * t_scale,
		m22 * t_scale,
		m23 * t_scale,
		m31 * t_scale,
		m32 * t_scale,
		m33 * t_scale };
	return result;
}

Matrix Matrix::operator*(double t_scale)
{
	float floatValue = static_cast<float>(t_scale);
	Matrix result = this->operator*(floatValue);
	return result;
}


Matrix Matrix::operator*(Matrix t_right)
{
	return Matrix();
} 

bool Matrix::operator==(Matrix t_right)
{
	bool result{ false };
	return result;
}

bool Matrix::operator!=(Matrix t_right)
{
	bool result{ false };
	result = (this->operator==(t_right));
	return result;
}

Matrix Matrix::randomIntPositive(int t_max)
{
	return Matrix();
}

Matrix Matrix::randomInt(int t_max)
{
	return Matrix();
}

Matrix Matrix::randomFloatPositive(int t_max)
{
	return Matrix();
}

Matrix Matrix::randomFloat(int t_max)
{
	return Matrix();
}

Matrix Matrix::getTranspose() const
{
	return Matrix();
}

void Matrix::transpose()
{
}
