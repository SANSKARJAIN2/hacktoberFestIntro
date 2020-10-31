#include<iostream>
using namespace std;

long int findSumOfDigits(long int number){
        long int sum = 0;
        long int digit=0, prevDigit=0;
        //cout<<"finding sum of numeber = "<<number;
        for (long int i = 10; (number*10%i)!=(number*10); i = i*10)
        {//cout<<"digti = "<<((number%i)-prevDigit)/(i/10);
            
            sum = sum + ((number%i)-prevDigit)/(i/10);
            prevDigit = ((number%i)-prevDigit)/(i/10);
           // cout<<"sum = "<< sum<<"  i="<<i<<endl;

        }
        
        
        return sum;
}

void findWinner(long int pointA, long int pointB){
    if(pointA==pointB){
        cout<<2<<" "<<pointB<<endl;
    }else
    {
        if(pointA>pointB){
            cout<<0<<" "<<pointA<<endl;
        }else
        {
            cout<<1<<" "<<pointB<<endl;
        }
        
    }
    
}

int main(){
int t;
cin>>t;
while (t-- >0)
{
    int n;
    long int pointsA=0,pointsB=0;
    cin>>n;

    while(n-->0){
        long int numberA,numberB,sodA=0,sodB=0;
        cin>>numberA>>numberB;
        sodA = findSumOfDigits(numberA);
        sodB = findSumOfDigits(numberB);
        if(sodA==sodB){
            pointsA++;pointsB++;
        }else{
            if (sodA>sodB){
                pointsA++;
            }else{
                pointsB++;
            }
            
            
        }
    }
    findWinner(pointsA,pointsB);
}

}