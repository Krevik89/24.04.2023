#pragma once
#include <iostream>
using namespace std;

class Functor
{
	int delta;
	int current;
	//Functor(const Functor& f) = delete; // ���� �������
public:
	Functor(int d, int c = 0) :delta{ d }, current{ c } {}
	int operator()() {
		return current += delta;
	}
};

