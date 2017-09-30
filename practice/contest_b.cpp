#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
string s;
struct d
{
    int id,p,c,f,t;
};
 bool cmp(d a,d pp)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='P'&&a.p!=pp.p)return a.p>pp.p;
            if(s[i]=='p'&&a.p!=pp.p)return a.p<pp.p;
            if(s[i]=='C'&&a.c!=pp.c)return a.c>pp.c;
            if(s[i]=='c'&&a.c!=pp.c)return a.c<pp.c;
            if(s[i]=='F'&&a.f!=pp.f)return a.f>pp.f;
            if(s[i]=='f'&&a.f!=pp.f)return a.f<pp.f;
            if(s[i]=='T'&&a.t!=pp.t)return a.t>pp.t;
            if(s[i]=='t'&&a.t!=pp.t)return a.t<pp.t;
        }
        return a.id<pp.id;
    }
vector<d>st;
class HealthFood {
public:
	vector <int> selectMeals(vector <int> protein, vector <int> carbs, vector <int> fat, vector <string> dietPlans) {
		int len=protein.size();
		vector<int>res;
		for(int i=0;i<len;i++)
        {
         st.push_back({i,protein[i],carbs[i],fat[i],(protein[i]+carbs[i])*5+fat[i]*9});
        }
        for(int i=0;i<dietPlans.size();i++)
        {
            s=dietPlans[i];
            sort(st.begin(),st.end(),cmp);
            res.push_back(st[0].id);
        }
        return res;
	}
};
