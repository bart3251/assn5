#ifndef MSCALE_H
#define MSCALE_H
#include <vector>
using namespace std;

vector<vector<double> > mscale(vector<vector<double> > x, double s){
        vector<vector<double> > z;
        vector<double> temp;
	if(x.empty()){z.clear(); return z;}
        for(int i =0; i< x.size(); i++){
                if(x[i].empty()){z.clear(); return z;}
                for(int j=0; j<x[i].size(); j++){
                        temp.push_back(x[i][j]*s);
                }
                z.push_back(temp);
                temp.clear();
        }
        return z;
}
#endif
