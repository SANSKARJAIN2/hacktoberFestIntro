#include<iostream>
#include<math.h>
using namespace std;
double attacks(double h,double p){
    double loss;
    loss = -p/(h-2*p);
    return (loss<=0?-1:log2(loss));
}

/*int main(){
    int t;cin>>t;
    while (t-- > 0)
    {
        double h,p;cin>>h>>p;
        (p/(2*attacks(h,p)))>=0?cout<<1<<endl:cout<<0<<endl;
    }
 return 0;   
}*/

int main(){
    int t = 1;
    cin>>t;
    while (t-- > 0)
    {
        int h,p;
//        h = 10;p=4;
        cin>>h>>p;
        while(h>0&&p>0){
            h = h -p;
            p = p/2;
        }
        p>=0?cout<<1<<endl:cout<<0<<endl;
    }
 return 0;   
}