#include<bits/stdc++.h>
using namespace std;
struct inf
{
    string s;
    int year,month,day,c;
    int syear,smonth,sday;
};
inf fst,snd;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {

        cin>>fst.s>>fst.year;
        getchar();
        cin>>fst.month;
        getchar();
        cin>>fst.day;
        // cout<<fst.s<<" "<<fst.year<<" "<<fst.month<<" "<<fst.day;
        cin>>fst.syear;
        getchar();
        cin>>fst.smonth;
        getchar();
        cin>>fst.sday;
        cin>>fst.c;
        if(fst.year>=2010)cout<<fst.s<<" "<<"eligible"<<endl;
        else if(fst.syear>=1991)cout<<fst.s<<" "<<"eligible"<<endl;
        else if(fst.c>=41)cout<<fst.s<<" "<<"ineligible"<<endl;
        else cout<<fst.s<<" "<<"coach petitions"<<endl;
    }



    return 0;
}
