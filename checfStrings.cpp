#include <iostream>
#include <math.h>
using namespace std;

  int findStringSkipRequired(  int number1,  int number2){
      int mod(  int);
      if(number1==number2){
          return 0;
      }
    return mod(number2-number1) -1;
}
  int mod( int number){
    if(number<0){
        return abs(number);//-1*number;
    }else{
        return abs(number);
    }
}


int main(){
    int t,n;
    cin>>t;
    while(t>0){
        t--;
         long int sum = 0;

        cin>>n;
          int currentInp,previousInp;
        cin>>currentInp>>previousInp;
        sum = sum + findStringSkipRequired(currentInp,previousInp);
        n = n-2;
        while(n>0){
            n--;
            cin>>currentInp;
            sum = sum + findStringSkipRequired(previousInp,currentInp);
            previousInp = currentInp;
   
        }
        cout<<sum<<endl;
    }
}

