#include<bits/stdc++.h>
using namespace std;
const int numlen=100;
struct bign{
    int len,s[numlen] ;
    bign(){
        memset(s,0,sizeof s);
        len = 1;
    }
    bign(int num){*this = num;}
    bign(const char *num){*this = num;}
    bign operator = (const int num){
        char s[numlen];
        sprintf(s,"%d",num);
        *this = s;
        return *this;
    }
    bign operator = (const char *num){
        len = strlen(num);
        while(len > 1 && num[0] == '0') num++,len--;
        for(int i = 0 ; i < len ;i++) s[i] = num[len-i-1] - '0';
        return *this;
    }
    void deal(){
        while(len > 1 &&!s[len-1]) len--;
    }
    bign operator + (const bign &a) const {
        bign ret;
        ret.len = 0;
        int top = max(len,a.len),add = 0;
        for(int i = 0 ; add || i < top; i++){
            int now = add;
            if(i < len) now += s[i];
            if(i < a.len) now += a.s[i];
            ret.s[ret.len++] = now %10;
            add = now /10;
            }
        return ret;
    }
        bign operator *(const bign &a) const {
            bign ret;
            ret.len = len + a.len;
            for(int i = 0 ; i < len ;i++){
                for(int j = 0 ; j < a.len ;j++)
                    ret.s[i+j] += s[i] * a.s[j];
            }
            for(int i = 0 ; i < ret.len; i++){
                ret.s[i+1] += ret.s[i]/10;
                ret.s[i] %= 10;
            }
            ret.deal();
            return ret;
        }
        string str() const {
            string ret = "";
            for(int i = 0 ; i <len ; i++)
                ret = char(s[i] + '0') +ret;
            return ret;
        }
};
istream& operator >> (istream &in,bign &x){
    string s;
    in >> s;
    x = s.c_str();
    return in;
}
ostream& operator << (ostream &out,const  bign &x){
    out << x.str();
    return out;
}
int main()
{



    return 0;
}
