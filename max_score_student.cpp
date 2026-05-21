#include<bits/stdc++.h>
using namespace std;
struct Student{
    string name;
    int ch;
    int ma;
    int en;
    int tot;
    Student(string a,int c1,int c2,int c3){
        name=a,ch=c1,ma=c2,en=c3,tot=c1+c2+c3;
    }
    Student()=default;
//重定义比较运算符，找出得分最高的学生
    bool operator > (const Student& x) const{
        return tot>x.tot;
    }
}A[2000];

string a;
int b,c,d;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c>>d;
        A[i]=Student(a,b,c,d);
    }
    Student ans=A[1];
    for(int i=2;i<=n;i++){
        if(A[i]>ans){
            ans=A[i];
        }
    }
    cout<<ans.name<<" "<<ans.ch<<" "<<ans.ma<<" "<<ans.en<<endl;
}
