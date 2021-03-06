// Multigrid.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <vector>
#include <iostream>
#include <fstream>

using std::cerr;
using namespace std;
 class Grid
{
private:
	 const size_t l;
	 const long height;
	 const long width;
	 vector<double> u;

	 vector<double> get_u() const
	 {
		 return u;
	 }

public:
	//Constructor with level
	Grid(const size_t& i = 1)
		: l(i), height(pow(2, i) + 1), width(pow(2, i) + 1)
	{
		vector<double> temp(height * width, 0);
		u = temp;
	}

	//Constructor with width and height
	Grid(const long& i, const long& j) : l(0), height(i), width(j)
	{
		vector<double> temp(height * width, 0);
		u = temp;
	}
	/*
	//Copy constructor
	Grid(const Grid &source) : l(source.get_level()), height(source.get_height()), width(source.get_width())
	{
		u = source.get_u();
	} */
};


 class MGsolve
 {

 };


 int main(int argc, char* argv[])
{
	if (argc != 3) {
		cerr << "Illegal call" << endl;
		cerr << "Required: ./mgsolve level num_of_cycles " << endl;
		return -1;
	}

}

