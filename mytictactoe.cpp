#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void displayboard();
void entermove(int );
int iswin();
char a[3][3] = {'1','2','3','4','5','6','7','8','9'};
int main()
{
     int cnt=0;
     int gcnt=0,flg=0;
     displayboard();
     while(!iswin())
     {
         entermove(cnt);
         system("CLS");
         displayboard();
         cnt++;
         gcnt++;
         if(gcnt==9)
         {
             flg=1;
             break;
         }
     }
     if(cnt%2==0)
        cout<<"player 2 wins";
     else
     {
         if(flg==1)
            cout<<"\ngame tied why don't you guys have another one run this code again";
         else
            cout<<"player 1 wins";
     }
    return 0;
}
void displayboard()
{
    system("Color 7C");
    //textcolor(RED);
     cout<<"\t\t\t\t\t\t\t\t\t\t\tTic Tac Toe by sanket pathak\n";
    cout<<"\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\tfirst one is circle and second is cross\n";
    int i,j;
    //cout<<"\t\t\t";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==0)
                cout<<"\t\t\t\t\t\t\t\t\t";
            if(j!=2)
                cout<<"\t"<<a[i][j]<<"\t|";
            else
                cout<<"\t"<<a[i][j]<<"\t";
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
    if(a[2][0]==a[2][1] && a[2][1]==a[2][2])//horizontal check
        return 1;
    if(a[0][1]==a[1][1] && a[1][1]==a[2][1])
        return 1;
    if(a[0][2]==a[1][2] && a[1][2]==a[2][2])
        return 1;
    if(a[0][0]==a[1][0] && a[1][0]==a[2][0])
        return 1;
    if(a[0][0]==a[1][1] && a[1][1]==a[2][2])
        return 1;
    if(a[2][0]==a[1][1] && a[1][1]==a[0][2])
        return 1;

    return 0;
}
void entermove(int i)
{
	char no;

	if (i % 2 == 0)
	{
	    	while(1)
        	{
            		cout<<"player 1 enter the block number between 1 to 9";
            		cin >> no;
            		if(no<48 && no>57)
                		continue;
            		break;


        	}
		for (int i = 0; i < 3; i++)
        	{
            		for(int j=0;j<3;j++)
            		{
                		if(no==a[i][j])
                    			a[i][j]='O';
            		}
        	}
	}
	if (i % 2 == 1)
	{
	    	while(1)
        	{
            		cout<<"player 2 enter the block number between 1 to 9";
            		cin >> no;
            		if(no<48 && no>57)
                		continue;
            		break;


        	}
		for (int i = 0; i < 3; i++)
        	{
            		for(int j=0;j<3;j++)
            		{
                		if(no==a[i][j])
                    			a[i][j]='X';
	            	}
        	}
	}
}
