#ifndef MSUB_H
#define MSUB_H
#include <vector>
using namespace std;

vector<vector<double> > msub(vector<vector<double> > x, vector<vector<double> > y){
        vector<vector<double> > z;
        vector<double> temp;
        if(x.size() != y.size()){z.clear(); return z;}
        for(int i =0; i< x.size(); i++){
                if(x[i].size() != y[i].size()){z.clear(); return z;}
                for(int j=0; j<x[i].size(); j++){
                        temp.push_back(x[i][j]-y[i][j]);
                }
                z.push_back(temp);
                temp.clear();
        }
        return z;
}
#endif
