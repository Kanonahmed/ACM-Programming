#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int left=0,right=0,has=0,last;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')left++;
        else if(s[i]==')')right++;
        else has++,last=i;
    }
    if(has+right>left)
    {
        cout<<-1<<endl;
        return 0;
    }

    int total=left-right;
    int total1=total;
    left=0,right=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')left++;
        else if(s[i]==')')
        {
            right++;
            if(right>left)
            {
                cout<< -1 <<endl;
                return 0;
                //break;
            }
        }
        else
        {
            if(i== last)right+=total;
            else
            {
                right++;
                total--;
            }

            if(right>left)
            {
                cout<< -1 <<endl;
                return 0;
                //break;
            }
        }
    }
    for(int i=0; i<has; i++)
    {
        if(i==has-1)cout<<total1<<endl;
        else
        {
            cout<< 1 <<endl;
            total1--;
        }
    }


    return 0;
}
