#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void displayboard();
void entermove();
int a[3][3]={1,2,3,4,5,6,7,8,9};
int main()
{
     displayboard();
    return 0;
}
void displayboard()
{
     cout<<"\t\t\t\t\t\t\t\t\t\t\tTic Tac Toe by sanket pathak\n";
    cout<<"\n\n\n\n\n\n";
    //int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==0)
                cout<<"\t\t\t\t\t\t\t\t\t";
            if(j==2)
            {
                cout<<"\t"<<a[i][j];
                continue;
                //cout<<a[i][j]<<"\t";
            }
            cout<<"\t"<<a[i][j]<<"\t|";
        }
        cout<<"\n\t\t\t\t\t\t\t\t\t\t----------------------------------";
        cout<<endl;
    }
}
int iswin()
{
    if(a[0][0]==a[0][1] && a[0][1]==a[0][2])
        return 1;
    if(a[1][0]==a[1][1] && a[1][1]==a[1][2])
        return 1;
    if(a[2][0]==a[2][1] && a[2][1]==a[2][2])
        return 1;
    if(a[0][1]==a[1][1] && a[1][1]==a[2][1])
        return 1;
    if(a[0][2]==a[1][2] && a[1][2]==a[1][3])
        return 1;
    if(a[0][3]==a[1][3] && a[1][3]==a[2][3])
        return 1;
    if(a[0][0]==a[1][1] && a[1][1]==a[2][2])
        return 1;
    if(a[2][0]==a[1][1] && a[1][1]==a[0][2])
        return 1;

    return 0;
}
void entermove()
{

}
