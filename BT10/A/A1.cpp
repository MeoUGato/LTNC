#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<=b;i++)

struct Point{
   double x,y;
   Point(double x_, double y_){
      x = x_;
      y = y_;
   }
};

void print(Point p){
   cout << '(' << p.x << ',' << p.y << ')';
}

int main(){
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("ouput.txt","w",stdout);
#endif
   
  Point d(2.3,7.6);
  print(d);
}