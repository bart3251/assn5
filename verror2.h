#ifndef VERROR2_H
#define VERROR2_H
#include <vector>
#include "vnorm2.h"

using namespace std;

double verror2(vector<double> x, vector<double> y){
        if(x.size() != y.size()){return -1;}
        return vnorm2(x-y);
}
#endif
