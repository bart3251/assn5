#include <iostream>
#include <vector>
#include <cstdlib>
#include "vnorm1.h"
#include "vnorm2.h"
#include "vnorminf.h"
#include "mnorm1.h"
#include "mnorminf.h"
#include "madd.h"
#include "msub.h"
#include "mscale.h"
#include "dot.h"
using namespace std;

int main(){
	vector<vector<double> > m;
	vector<double> v;
	for(int i=0; i<5; i++){
		for(int j=0; j<4; j++){
			cout<<i+j<<" ";
			v.push_back(i+j);
		}
		m.push_back(v);
		v.clear();
		cout<<endl;
	}cout<<endl;
	m = mscale(m,10);
	for(int i=0; i<5; i++){
                v.push_back(i);
		for(int j=0; j<4; j++){
                        //cout<<m[i][j]<<" ";
                }
                cout<<endl;
        }
	cout<<dot(v,v)<<endl;
	return 0;
}
