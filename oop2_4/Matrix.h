#pragma once
#include <iostream>
#include <cmath>
#include <sstream>
#include <Windows.h>

using namespace std;

class Matrix
{
	class Row;
	int R, C;
	Row* m;

	class Row
	{
	public:
		int* v;
		Row(int C = 1)
		{
			v = new int[C];
				for (int j = 0; j < C; j++)
					v[j] = 0;
		}
		int& operator [] (int j) { return v[j]; }
	};

public:
	Matrix(int R = 1, int C = 1)
	{
		this->R = R < 1 ? 1 : R;
		this->C = C < 1 ? 1 : C;
		m = new Row[this->R];
		for (int i = 0; i < this->R; i++)
		{
			m[i] = Row(this->C);
		}
	}
	~Matrix()
	{
		for (int i = 0; i < R; i++)
		{
			if (m[i].v != nullptr)
				delete[](m[i].v);
		}
		if (m != nullptr)
			delete[] m;
	}

	Row& operator [] (int i) { return m[i]; }
	friend istream& operator >> (istream&, Matrix&);
	friend ostream& operator << (ostream&, Matrix&);
	operator string() const;
	friend void operator * (Matrix&, int a);
	bool operator == (Matrix&);
	Matrix& operator = (Matrix&);
	int Max();
	int Min();
	int Norma(int max, int min);
	int getC() const { return C; }
	int getR() const { return R; }
};