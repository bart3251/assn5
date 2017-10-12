#ifndef VNORM1_H
#define VNORM1_H
#include <vector>
#include "dot.h"
using namespace std;
vector<double> mvp(vector<vector<double> > m,vector <double> v){
        vector<double> p;
        if(m[0].size != v.size()){p.clear(); return p;}
        for(int i = 0; i<m.size(); i++){
        	p.push_back(dot(m[i],v));
        }
        return p;
}
#endif
