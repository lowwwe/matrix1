#include "Matrix.h"
// author 
// date


Matrix::Matrix()
{	
}


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
}


Matrix Matrix::operator+(Matrix t_right)
{
	Matrix result;
	return result;
}

Matrix Matrix::operator-(Matrix t_right)
{
	Matrix result;
	return result;
}

Matrix Matrix::operator*(Matrix t_right)
{
	Matrix result;
	return result;
}

/// <summary>
/// this uses scale by flaot
/// </summary>
/// <param name="t_scale">integer scalar</param>
/// <returns>scaled matrix</returns>
Matrix Matrix::operator*(int t_scale)
{
	float floatValue = static_cast<float>(t_scale);
	Matrix result = this->operator*(floatValue);
	return result;	
}

Matrix Matrix::operator*(float t_scale)
{
	Matrix result;
	return result;
}

/// <summary>
/// this uses scale by flaot
/// </summary>
/// <param name="t_scale">double scaler</param>
/// <returns>scaled matrix</returns>
Matrix Matrix::operator*(double t_scale)
{
	float floatValue = static_cast<float>(t_scale);
	Matrix result = this->operator*(floatValue);
	return result;
}

bool Matrix::operator==(Matrix t_right)
{
	bool result{ false };
	return result;
}


/// <summary>
/// this uses the opposite of equality
/// </summary>
/// <param name="t_right">matric on right of  != sign</param>
/// <returns>true if not equal</returns>
bool Matrix::operator!=(Matrix t_right)
{
	bool result{ false };
	result = !(this->operator==(t_right));
	return result;
}



Matrix Matrix::randomIntPositive(int t_max)
{
	// Pete says we must use a helper method to set the values
	// and cannot call std::rand from inside this method
	Matrix result;
	return result;
}

Matrix Matrix::randomInt(int t_max)
{
	// Pete says we must use a helper method to set the values
	// and cannot call std::rand from inside this method
	Matrix result;
	return result;
}

Matrix Matrix::randomFloatPositive(int t_max)
{
	// Pete says we must use a helper method to set the values
	// and cannot call std::rand from inside this method
	Matrix result;
	return result;
}

Matrix Matrix::randomFloat(int t_max)
{
	// Pete says we must use a helper method to set the values
	// and cannot call std::rand from inside this method
	Matrix result;
	return result;
}
