#include "Matrix.h"

istream& operator >> (istream& in, Matrix& a)
{
	for (int i = 0; i < a.getR(); i++)
	{
		for (int k = 0; k < a.getC(); k++)
		{
			cin >> a[i][k];
		}
		cout << endl;
	}
	return in;
}

ostream& operator << (ostream& out, Matrix& a)
{
	out << string(a);
	return out;
}

Matrix::operator string() const
{
	stringstream str;
	for (int i = 0; i < getR(); i++)
	{
		for (int k = 0; k < getC(); k++)
		{
			str << m[i][k] << " ";
		}
		str << endl;
	}
	return str.str();
}

int Matrix::Max()
{
	int max = m[0][0];
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			if (max < m[i][j])
				max = m[i][j];
	return max;
}

int Matrix::Min()
{
	int min = m[0][0];
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			if (min > m[i][j])
				min = m[i][j];
	return min;
}

int Matrix::Norma(int max, int min) 
{
	int result = 0;
	result = abs(max - min);
	return result;
}

void operator * (Matrix& q, int a)
{
	for (int i = 0; i < q.R; i++)
		for (int j = 0; j < q.C; j++)
			q[i][j] *= a;
}

bool Matrix::operator == (Matrix& a)
{
	for (int i = 0; i < R; i++)
		for (int j = 0; j < C; j++)
			if (m[i][j] == a.m[i][j])
				return true;
			else
				return false;
}

Matrix& Matrix::operator = (Matrix& r)
{
	m = r.m;
	return *this;
}