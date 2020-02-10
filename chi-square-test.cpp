// Program for Uniformity Test using Chi-Square Method

#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

class kstest{
    int O[10],E[10],N;
    float diff[10];
    float chisquare,chitab;
    public:
    void getdata(int n){
        int temp,i;
        for(i=0;i<n;i++){
            cout<<"Enter frequency of "<<i<<"th value:";
            cin>>O[i];
        }
        N=0;
        for(i=0;i<n;i++){
          N+=O[i]; 
        }
        temp=N/n;
        for(i=0;i<n;i++){
            E[i]=temp;
        }
    }
   
    void calculatechi(int n){
       int i;
       cout<<"\nCalculated differences:";
      for(i=0;i<n;i++){
        diff[i]=(pow((O[i]-E[i]),2))/E[i];
        cout<<"\n"<<diff[i];     
      }
      chisquare=0;
      for(i=0;i<n;i++){
        chisquare+=diff[i];
      }
    }
    void decide(float chi){
        cout<<"\nObtained chi square value:"<<chisquare;
        if(chitab>chisquare){
            cout<<"\nAccepted :The given distributions are uniform";
          }
          else{
            cout<<"\nRejected:The given distributions are not uniform";
          }
    }
};
int main(){
    kstest calc;
    float n,chitab;
   
    cout<<"Enter the number of classes or values:";
    cin>>n;
    cout<<"Enter the Tabulated value of chi:";
    cin>>chitab;
    calc.getdata(n);
    calc.calculatechi(n);
    calc.decide(chitab);
    return 0;
}
