#ifndef VERROR1_H
#define VERROR1_H
#include <vector>
#include "vnorm1.h"

using namespace std;

double verror1(vector<double> x, vector<double> y){
	if(x.size() != y.size()){return -1;}
	return vnorm1(x-y);
}
#endif
