/*
   (o_o)
   <) )>
    / \
   AUTHOR  : Peeyush Yadav
   Problem : https://www.hackerrank.com/challenges/botclean
*/
#include<bits/stdc++.h>
using namespace std; typedef long long ll; typedef pair<int,int> grp;
inline ll power(ll a,ll b)     { ll r=1; while(b){ if(b&1) r=r*a    ; a=a*a    ; b>>=1;} return r;}
inline ll power(ll a,ll b,ll m){ ll r=1; while(b){ if(b&1) r=(r*a)%m; a=(a*a)%m; b>>=1;} return r;}
void fast(){	
	#ifdef Megamind
		freopen("inp.txt","r",stdin);
		//freopen("out.txt","w",stdout);
		#define trace(x)            cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<endl;
		#define trace2(x,y)         cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<" | "#y" = "<<y<<endl;
		#define trace3(x,y,z)       cerr<<__FUNCTION__<<":"<<__LINE__<<": "#x" = "<<x<<" | "#y" = "<<y<<" | "#z" = "<<z<<endl;
	#else
		#define trace(x)
		#define trace2(x,y)
		#define trace3(x,y,z)
	#endif
	
	#define fi						first
	#define se						second
	#define mp						make_pair
	#define pb(x)					push_back(x)
	#define s(x)					scanf("%d",&x);
	#define sl(x)					scanf("%lld",&x);
	#define p(x)					printf("%d\n",x);
	#define f(a,b,c)				for(int a=b;a<c;a++)
	//#define r(a,b,c)				for(int a=b;a>c;a--)
	#define p2(x,y)					printf("%d %d\n",x,y);
	#define pl(x)					printf("%lld\n",x);
	#define pl2(x,y)				printf("%lld %lld\n",x,y);
	#define p1d(a,n)				for(int ix=0;ix<n;ix++) printf("%d ",a[ix]); printf("\n");
	#define p2d(a,n,m)				for(int ix=0;ix<n;ix++){ for(int jx=0;jx<m;jx++) printf("%d ",a[ix][jx]); printf("\n");}
	#define TimeElapsed				(double)clock()/CLOCKS_PER_SEC
}
/*................................................END OF TEMPLATES............................................................*/


void next_move(int posr, int posc, vector <string> board) {
    int min_dst = 20,x,y,temp;
    if(board[posr][posc] == 'd') cout<<"CLEAN";
    else{
        for(int i=0;i<5;i++) 
            for(int j=0;j<5;j++) {
               if(board[i][j] == 'd'){
                   temp = abs(i-posr) + abs(j- posc);
                   if(temp < min_dst){
                       min_dst = temp;
                       x = i;
                       y = j;
                   }
               }
        }
        
        if(x > posr)		cout<<"DOWN";
        else if(x < posr)	cout<<"UP";
        else if(y > posc)	cout<<"RIGHT";
        else if(y < posc)	cout<<"LEFT";
        
    }
}

int main(){
	fast(); 
 
 	int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);

	trace(TimeElapsed)
	
}   
