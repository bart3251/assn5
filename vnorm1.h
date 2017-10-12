#ifndef VNORM1_H
#define VNORM1_H
#include <cmath>
#include <vector>
using namespace std;

double vnorm1(vector <double> v){
	double norm=0;
        if(v.empty()){return -1;}
	for(int i = 0; i<v.size(); i++){
		norm+=abs(v[i]);
	}
	return norm;
}
#endif
