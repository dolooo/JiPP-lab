#ifndef matrix_h
#define matrix_h
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Matrix
{
public:
	int wiersze, kolumny;
	double **macierz;
	Matrix(int w, int k);
	Matrix(int wk);
	void set(int n, int m, double val);
	double get(int n, int m);
	Matrix add(Matrix m2);
	Matrix subtract(Matrix m2);
	Matrix multiply(Matrix m2);
	int cols();
	int rows();
	void print();
	void store(string filename, string path);
	Matrix(string filename, string path);

	Matrix operator+ (Matrix m2);
	Matrix operator- (Matrix m2);
	Matrix operator* (Matrix m2);
};
#endif