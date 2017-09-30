#include<bits/stdc++.h>
using namespace std;
pair<int,int>go(vector<int>v,int ds)
{
    if(ds==1)
    {
        int mx=-1,cnt=0,ch=-1;
        for(int i=0;i<v.size();i++)mx=max(mx,v[i]);
        for(int i=0;i<v.size();i++)
        {
            if(mx==v[i])
            {
                if(ch==-1){ch=i;cnt++;}
                else cnt++;
            }
        }
        return {cnt,ch};
    }
    else
    {

        int mn=1000000,cnt=0,ch=-1;
        for(int i=0;i<v.size();i++)mn=min(mn,v[i]);
        for(int i=0;i<v.size();i++)
        {
            if(mn==v[i])
            {
                if(ch==-1){ch=i;cnt++;}
                else cnt++;
            }
        }
        return {cnt,ch};
    }
}

int  main()
{
    int n;
    vector<int>protein,carbs,fat;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        //cin>>protein[i]>>carbs[i]>>fat[i];
        int x,y,z;
        cin>>x>>y>>z;
        protein.push_back(x);
        carbs.push_back(y);
        fat.push_back(z);
    }
    int m;
    cin>>m;
    vector<string>dietPlans[1000];
    for(int i=0;i<m;i++){
            string s;
        dietPlans[i].push_back(s);}
        vector<int>st,prmx;
		for(int i=0;i<protein.size();i++)
        {
            int mx=protein[i]*5+carbs[i]*5+fat[i]*9;
            prmx.push_back(mx);
        }

		for(int i=0;i<dietPlans.size();i++)
        {
               vector<int>ind;
               int hh=0;
            for(int j=0;j<dietPlans[i].size();j++)
            {
                char a=dietPlans[i][j];
                if(a=='P'||a=='p')
                {
                    pair<int,int>res;
                    if(a=='P')
                    {
                        res=go(protein,1);
                        if(res.first==1){st.push_back(res.second);hh=1;break;}
                        else ind.push_back(res.second);
                    }
                    else
                    {
                        res=go(protein,0);
                        if(res.first==1){st.push_back(res.second);hh=1;break;}
                        else ind.push_back(res.second);
                    }
                }
                if(a=='C'||a=='c')
                {
                    pair<int,int>res;
                    if(a=='C')
                    {
                        res=go(carbs,1);
                        if(res.first==1){st.push_back(res.second);hh=1;break;}
                        else ind.push_back(res.second);
                    }
                    else
                    {
                        res=go(carbs,0);
                        if(res.first==1){st.push_back(res.second);hh=1;break;}
                        else ind.push_back(res.second);
                    }
                }
                if(a=='F'||a=='f')
                {
                    pair<int,int>res;
                    if(a=='F')
                    {
                        res=go(fat,1);
                        if(res.first==1){st.push_back(res.second);hh=1;break;}
                        else ind.push_back(res.second);
                    }
                    else
                    {
                        res=go(fat,0);
                        if(res.first==1){st.push_back(res.second);hh=1;break;}
                        else ind.push_back(res.second);
                    }
                }
                if(a=='T'||a=='t')
                {
                    pair<int,int>res;
                    if(a=='T')
                    {
                        res=go(prmx,1);
                        if(res.first==1){st.push_back(res.second);hh=1;break;}
                        else ind.push_back(res.second);
                    }
                    else
                    {
                        res=go(prmx,0);
                        if(res.first==1){st.push_back(res.second);hh=1;break;}
                        else ind.push_back(res.second);
                    }
                }
            }
            if(hh==0)
            {
                sort(ind.begin(),ind.end());
                st.push_back(ind[0]);
            }
            cout<<st[st.size()-1]<<endl;
        }




}
