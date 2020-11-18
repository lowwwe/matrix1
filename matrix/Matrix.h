#ifndef MATRIX
#define MATRIX
// author 
// date



struct Matrix
{
	float m11;
	float m12;
	float m13;
	float m21;
	float m22;
	float m23;
	float m31;
	float m32;
	float m33;

	Matrix();

	Matrix( float t_m11,
			float t_m12,
			float t_m13,
			float t_m21,
			float t_m22,
			float t_m23,
			float t_m31,
			float t_m32,
			float t_m33 );


	Matrix operator + (Matrix t_right);
	Matrix operator - (Matrix t_right);
	Matrix operator * (Matrix t_right);
	Matrix operator * (int t_scale);
	Matrix operator * (float t_scale);
	Matrix operator * (double t_scale);

	bool operator == (Matrix t_right);
	bool operator != (Matrix t_right);

	Matrix randomIntPositive(int t_max);
	Matrix randomInt(int t_max);
	Matrix randomFloatPositive(int t_max);
	Matrix randomFloat(int t_max);

};

#endif // !MATRIX