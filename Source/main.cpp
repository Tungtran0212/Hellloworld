// #include "docgia.hpp"
#include "../Include/library.hpp"
using namespace std;
int main()
{
	library *x = new library;
	x->input();
	delete x;
	return 0;
}