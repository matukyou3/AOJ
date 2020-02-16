#include<iostream>
#include<cmath>
#include<iomanip>
#include <utility>

using namespace std;

//using Point = pair<double,double>;

void koch(int n,pair<double,double> P1,pair<double,double> P2)
{
    if(n==0) return;
    double th = M_PI * 60 / 180;
    double s_x = P1.first * 2 / 3 + P2.first * 1 / 3;
    double s_y = P1.second * 2 /3 + P2.second * 1 / 3;
    double t_x = P1.first * 1 / 3 + P2.first * 2 / 3;
    double t_y = P1.second * 1 / 3 + P2.second * 2 / 3;
    double u_x = (t_x - s_x) *cos(th) - (t_y - s_y) * sin(th) + s_x;
    double u_y = (t_x - s_x) *sin(th) + (t_y - s_y) * cos(th) + s_y;

    pair<double,double> S = make_pair(s_x,s_y);
    pair<double,double> T = make_pair(t_x,t_y);
    pair<double,double> U = make_pair(u_x,u_y);

    koch(n-1,P1,S);
    cout << S.first << " " << S.second <<endl;
    koch(n-1,S,U);
    cout << U.first << " " << U.second << endl;
    koch(n-1,U,T);
    cout << T.first << " " << T.second << endl;
    koch(n-1,T,P2); 
}
int main()
{
    int n;cin >>n;
    
    pair<double,double>P1 = make_pair(0.0,0.0);
    pair<double,double>P2 = make_pair(100.0,0.0);
    cout<<fixed;
    cout << setprecision(8);

    cout << P1.first << " " <<P1.second <<endl;
    koch(n,P1,P2);
    cout << P2.first << " " << P2.second<<endl;
    return 0;
    
}