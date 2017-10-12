#ifndef MNORM1_H
#define MNORM1_H
#include <cmath>
#include <vector>
#include "vnorminf.h"
using namespace std;

double mnorm1(vector<vector<double> > m){
        //A is m x n s.t. a[m][n]
	int i=0,j=0;
	double norm;
	vector<double> n;
        if(m.empty()){return -1;}
        for(i;i<m[0].size(); i++){
		norm=0;
		j=0;
                if(m[i].empty()){return -1;}
                for(j;j<m.size(); j++){
                        norm+=abs(m[j][i]);
                }
		n.push_back(norm);
        }
        return vnorminf(n);
}
#endif
