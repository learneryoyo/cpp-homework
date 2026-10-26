#include<iostream>
using namespace std;
/*
int main()
{
    cout<<"Please enter the profit:"<<endl;
    int profit;
    float bonus;
    cin>>profit;
    if(0<profit<=100000){
        cout<<"The bonus is"<<profit*0.1<<endl;
    } else if(profit>100000 && profit<=200000){
        bonus=100000*0.1+(profit-100000)*0.075;
        cout<<"The bonus is"<<bonus<<endl;
    } else if(profit>200000 && profit<=400000){
        bonus=100000*0.1+100000*0.075+(profit-200000)*0.05;
        cout<<"The bonus is"<<bonus<<endl;
    } else if(profit>400000 && profit<=600000){
        bonus=100000*0.1+100000*0.075+200000*0.05+(profit-400000)*0.03;
        cout<<"The bonus is"<<bonus<<endl;
    } else if(profit>600000 && profit<=1000000){
        bonus=100000*0.1+100000*0.075+200000*0.05+400000*0.03+(profit-600000)*0.015;
        cout<<"The bonus is"<<bonus<<endl;
    } else if(profit>1000000){
        bonus=100000*0.1+100000*0.075+200000*0.05+400000*0.03+400000*0.015+(profit-1000000)*0.01;
        cout<<"The bonus is"<<bonus<<endl;
    }
    return 0;
}*/


/*
int main(){
    cout<<"Please enter the score(1-10):"<<endl;
    int score;
    cin>>score;
    switch(score){
        case 10:
        case 9:
            cout<<"classic"<<endl;
            break;
        case 8:
        case 7:
            cout<<"excellent"<<endl;
            break;
        case 6:
        case 5:
            cout<<"so-so"<<endl;
            break;
        default:
            cout<<"bad"<<endl;
    }
    return 0;
}*/

/*
int main(){
    cout<<"Please enter a number:"<<endl;
    int num,temp=0;
    cin>>num;
    int initial=num;
    int s=1;
    while(num>=10){
        temp+=(num%10)*s;
        num/=10;
        s*=10;
    }
    temp+=(num)*s;
    if(initial==temp){
        cout<<"The number is a palindrome."<<endl;
    } else {
        cout<<"The number is not a palindrome."<<endl;
    }
        return 0;
}*/

/*
int main(){
    cout<<"Please enter a number between 100 and 999:"<<endl;
    int num,a,s=0,initial;
    cin>>num;
    initial=num;
    for(int i=0;i<3;i++){
        a=num%10;
        num/=10;
        s+=a*a*a;
    }
    if(initial==s){
        cout<<"The number is an Armstrong number."<<endl;
    } else {
        cout<<"The number is not an Armstrong number."<<endl;
    }
    for(int i=100;i<1000;i++){
        initial=i;
        num=i;
        s=0;
        for(int j=0;j<3;j++){
           a=num%10;
           num/=10;
           s+=a*a*a;
    }
    if(initial==s){
        cout<<initial<<" is an Armstrong number."<<endl;
    }
        
    }
    return 0;
}*/


/*
int main(){
    cout<<"Please enter two numbers:"<<endl;
    int n,a,s=1;
    cin>>n>>a;
    int b=0,total=0;
    for(int i=0;i<n;i++){
        b+=a*s;
        s*=10;
        total+=b;
        cout<<b<<",";
    }
    cout<<"The sum is "<<total<<endl;
    return 0;
}*/

/*
int main(){
    for(int i=1;i<=9;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"*"<<i<<"="<<i*j<<"\t";
        }
        cout<<endl;
    }
    return 0;
}*/

/*
int main(){
    int a=1,b=1;
    cout<<"Please enter the number of months:"<<endl;
    int n,temp;
    cin>>n;
    cout<<"month 1: 1"<<endl;
    cout<<"month 2: 1"<<endl;
    for(int i=0;i<n;i++){
        temp=b;
        b=a+b;
        a=temp;
        cout<<"month "<<i+3<<": "<<b<<endl;

    }
    cout<<"The number of rabbits is "<<b<<endl;
    return 0;
}*/

int main(){
    int a=1;
    for(int i=0;i<9;i++){
        a=(a+1)*2;
        
    }
    cout<<"The number of peaches is "<<a<<endl;
    return 0;
}