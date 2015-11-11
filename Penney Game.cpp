#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int p;cin>>p;
    int n[p];string coins[p];
    for(int i=0;i<p;i++){
        int ttt=0,tth=0,tht=0,thh=0,htt=0,hth=0,hht=0,hhh=0;
        cin>>n[i];cin>>coins[i];
        for(int j=0;j<=38;j++)
        {
            if(coins[i].substr(j,3)=="TTT")ttt++;
            if(coins[i].substr(j,3)=="TTH")tth++;
            if(coins[i].substr(j,3)=="THT")tht++;
            if(coins[i].substr(j,3)=="THH")thh++;
            if(coins[i].substr(j,3)=="HTT")htt++;
            if(coins[i].substr(j,3)=="HTH")hth++;
            if(coins[i].substr(j,3)=="HHT")hht++;
            if(coins[i].substr(j,3)=="HHH")hhh++;
        }
            printf("%d %d %d %d %d %d %d %d %d\n",i+1,ttt,tth,tht,thh,htt,hth,hht,hhh);
        }
    return 0;
}
