#ifndef VNORM2_H
#define VNORM2_H
#include <cmath>
#include <vector>
using namespace std;

double vnorm2(vector <double> v){
        double norm=0;
        if(v.empty()){return -1;}
        for(int i = 0; i<v.size(); i++){
                norm+=pow(v[i],2);
        }
        return sqrt(norm);
}
#endif
