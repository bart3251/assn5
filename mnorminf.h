#ifndef MNORMINF_H
#define MNORMINF_H
#include <cmath>
#include <vector>
#include "vnorminf.h"
using namespace std;

double mnorminf(vector<vector<double> > m){
        //A is m x n s.t. a[m][n]
	double norm;
	vector<double> n;
        if(m.empty()){return -1;}
        for(int i = 0; i<m.size(); i++){
                norm=0;
                if(m[i].empty()){return -1;}
                for(int j=0; j<m[i].size(); j++){
                        norm+=abs(m[i][j]);
                }
		n.push_back(norm);
        }
        return vnorminf(n);
}
#endif
