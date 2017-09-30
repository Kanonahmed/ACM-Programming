#include<bits/stdc++.h>
using namespace std;
#define xx              first
#define yy              second
#define pb              push_back;
#define mp              make_pair
#define LL              long long
#define PI              acos(-1.0)
#define AND(a,b)        ((a) & (b))
#define OR(a,b)         ((a)|(b))
#define XOR(a,b)        ((a) ^ (b))
#define f1(i,n)         for(int i=1;i<=n;i++)
#define f0(i,n)         for(int i=0;i<n;i++)
#define meminf(B)       memset(B,126,sizeof B)
#define all(a)          a.begin(),a.end()
#define DEG_to_REDI(X) (X*PI/180)
#define REDI_to_DEG(X) (180*X/(PI))
#define UB(a,x) (upper_bound(all(a),x)-a.begin())
#define LB(a,x) (lower_bound(all(a),x)-a.begin())
#define countbit(x) __builtin_popcountll((LL)x)
#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)
template <class T> inline T bigmod(T p,T e,T M){
    LL ret = 1;
    for(; e > 0; e >>= 1){
        if(e & 1) ret = (ret * p) % M;
        p = (p * p) % M;
    } return (T)ret;
}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}

/*    ----------------------------------------
     |         Scratch where itches           |
      ----------------------------------------   */

int Set(int N,int pos){ return N=N | (1<<pos);}
int Reset(int N,int pos){return N= N & ~(1<<pos);}
bool Chkbit(int N,int pos){return (bool)(N & (1<<pos));}
int month[]={-1,31,28,31,30,31,30,31,31,30,31,30,31};  //Not Leap Year
int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={-1,-1,+0,+1,+1,+0};int dy[]={-1,+1,+2,+1,-1,-2}; //Hexagonal Direction

const double eps=1e-6;
struct Node{
   int value;
   Node* left;
   Node* right;
};
Node* CreateNode(int x)
{
    Node* node=new Node;
    node->value=x;
    node->left=NULL;
    node->right=NULL;
    return node;
}
void InsertNode(Node* node, int x,int y,string pos){
    Node* newNode=new Node;
    newNode->value=x;
    newNode->left=NULL;
    newNode->right=NULL;
        if(node->value==y){
                if(pos=="left")
                  node->left=newNode;
                else
                    node->right=newNode;
            return;
        }
        if(node->left)
        InsertNode(node->left,x,y,pos);
        if(node->right)
        InsertNode(node->right,x,y,pos);

   return ;
}
void display(Node* p)
{
    if(p==NULL)return;

    display(p->left);
    cout<<p->value<<endl;
    display(p->right);

}
int main()
{
   Node* root=CreateNode(15);
   InsertNode(root,13,15,"left");
   InsertNode(root,14,15,"right");
   InsertNode(root,12,13,"left");
   InsertNode(root,11,13,"right");
   InsertNode(root,10,14,"left");
   InsertNode(root,9,14,"right");
   InsertNode(root,7,9,"left");
   InsertNode(root,8,9,"right");
   InsertNode(root,5,10,"left");
   InsertNode(root,6,10,"right");
   InsertNode(root,3,11,"left");
   InsertNode(root,4,11,"right");
   InsertNode(root,1,12,"left");
   InsertNode(root,2,12,"right");

   display(root);
   //cout<<root<<endl;

    return 0;
}

