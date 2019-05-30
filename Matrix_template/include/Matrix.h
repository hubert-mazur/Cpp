//
// Created by hubert on 30.05.19.
//

#ifndef LAB08_MATRIX_H
#define LAB08_MATRIX_H

#include <iostream>

template<typename T, int x, int y>
class Matrix {

public:
	Matrix ()
	{
		matrix = new T *[x];

		for (unsigned i = 0; i < x; i++)
			matrix[i] = new T[y];

		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				matrix[i][j] = 0;
			}
		}
	}

	~Matrix ()
	{
		for (int i = 0; i < x; i++)
			delete[] matrix[i];
		delete[] matrix;
	}

	void reset (double value)
	{
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
				matrix[i][j] = value;
		}
	}

	template<typename T1>
	void add (const Matrix<T1, x, y> &object)
	{
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				matrix[i][j] += object.getMatrix ()[i][j];
			}
		}
	}

	template<int row, int col>
	T &at ()
	{
		return matrix[row][col];
	}

	T **getMatrix () const
	{
		return matrix;
	}

private:
	T **matrix;

};

template<typename T, int x, int y>
std::ostream &operator<< (std::ostream &ostr, const Matrix<T, x, y> &object)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
			ostr << object.getMatrix ()[i][j] << " ";
		ostr << std::endl;
	}
	return ostr;
}


#endif //LAB08_MATRIX_H
