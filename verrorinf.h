#ifndef VERRORINF_H
#define VERRORINF_H
#include <vector>
#include "vnorminf.h"

using namespace std;

double verrorinf(vector<double> x, vector<double> y){
        if(x.size() != y.size()){return -1;}
        return vnorminf(x-y);
}
#endif
