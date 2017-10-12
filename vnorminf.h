#ifndef VNORMINF_H
#define VNORMINF_H
#include <cmath>
#include <vector>
using namespace std;

double vnorminf(vector <double> v){
        double norm=0;
	if(v.empty()){return -1;}
        for(int i = 0; i<v.size(); i++){
                if(abs(v[i])>norm){norm=abs(v[i]);}
        }
        return norm;
}
#endif
