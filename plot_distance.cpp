#include<bits/stdc++.h>
#include<cmath>
using namespace std;
struct Plot{
    int a;
    int b;
};
double getDistion(Plot p1,Plot p2){
    double dx=p1.a-p2.a;
    double dy=p1.b-p2.b;
    return sqrt(dx*dx+dy*dy);
}
int main(){
    Plot p1,p2;
    char c;//用来代表括号，逗号这些字符
    cin>>c>>p1.a>>c>>p1.b>>c>>c>>c>>p2.a>>c>>p2.b>>c;
    double dis=getDistion(p1,p2);
    cout<<fixed<<setprecision(3)<<dis<<endl;

    return 0;
}
