#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){//a->dividend b->divisor
      if(b==0) return a;
      return gcd(b,a%b);
}
int main(){
    int a=13,b=10;
    cout<<gcd(a,b);

    return 0;
}