# Assignment 5
## Shaun Bartschi
All Software Manual entries are implemented in the Software manual on github, userid bart3251
Problem 1- Vector Norm1 implemented in C++:

```C++
#include <cmath>
#include <vector>
using namespace std;

double vnorm1(vector <double> v){
        double norm=0;
        if(v.empty()){return -1;}
        for(int i = 0; i<v.size(); i++){
                norm+=abs(v[i]);
        }
        return norm;
}
```

2) Vector Norm2 implemented in C++:

```C++
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
```

3)Vector Norm Infinite implemented in C++:

```C++
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
```

4) Matrix Norm1 implemented in C++:

```C++
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
```
5) Matrix Norm Infinite implemented in C++:

```C++
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
```

6) Vector Error 1 implemented in C++:

```C++
#include <vector>
#include "vnorm1.h"

using namespace std;

double verror1(vector<double> x, vector<double> y){
        if(x.size() != y.size()){return -1;}
        return vnorm1(x-y);
}
``` 
7) Vector Error 2 implemented in C++:

```C++
#include <vector>
#include "vnorm2.h"

using namespace std;

double verror2(vector<double> x, vector<double> y){
        if(x.size() != y.size()){return -1;}
        return vnorm2(x-y);
}
```

8) Vector Error Infinite implemented in C++:

```C++
#include <vector>
#include "vnorminf.h"

using namespace std;

double verrorinf(vector<double> x, vector<double> y){
        if(x.size() != y.size()){return -1;}
        return vnorminf(x-y);
}
```

9) Matrix Addition implemented in C++:

```C++
#include <vector>
using namespace std;

vector<vector<double> > madd(vector<vector<double> > x, vector<vector<double> > y){
        vector<vector<double> > z;
        vector<double> temp;
        if(x.size() != y.size()){z.clear(); return z;}
        for(int i =0; i< x.size(); i++){
                if(x[i].size() != y[i].size()){z.clear(); return z;}
                for(int j=0; j<x[i].size(); j++){
                        temp.push_back(x[i][j]+y[i][j]);
                }
                z.push_back(temp);
                temp.clear();
        }
        return z;
}
```

10) Matrix Subtraction implemented in C++:

```C++
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
```

11) Matrix-Vector Product implemented in C++:

```C++
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
```

12) Matrix-Matrix Product implemented in C++:

```C++
#include <vector>
#include "dot.h"
using namespace std;
vector<vector<double> > mmp(vector<vector<double> > m1,vector<vector<double> > m2){
        vector<vector<double> > p;
        vector<double> c;
        vector<double> temp;
        if(m1.size() != m2[0].size()){p.clear(); return p;}
        vector<vector<double> > m = t(m2);
        for(int i = 0; i<m1.size(); i++){
                for(int j = 0; j<m1[i].size(); j++){
                        temp.push_back(dot(m1[i],m[j]));
                }
        }
        return p;
}

vector<vector<double> > t(vector<vector<double> > m){
        vector<vector<double> > trans;
        trans.resize(m[0].size());
        for(int i = 0; i<m.size(); i++){
                trans[i].resize(m.size());
                for(int j = 0; j<m[i].size(); j++){
                        trans[i][j] = m[j][i];
                }
        }
        return trans;
}

```
