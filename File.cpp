//Tic Tac Toe GAME
//Password : nahi pta

#include <iostream.h>
#include <conio.h>
#include<process.h>
#include<stdlib.h>
char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
int checkwin();//FUNTION FOR RESULT//
void board();//FUNCTION TO DRAW THE BOARD//
void guide();//FUNCTION FOR USER GUIDE//
main()
{
 clrscr();
if(-999)
{
char ch[20],sank;
int j=0,o=0;
char a,c,b,d;
cout<<"Enter the password within a trial period of 4 times:";
sam:
ch[j]=getch();
cout<<"*";
j++;
if(j<8)
{goto sam;}
else
{}
if (ch[0]=='n'&&ch[1]=='a'&&ch[2]=='h'&&ch[3]=='i' &&ch[4]==' '&&ch[5]=='p'&&ch[6]=='t'&&ch[7]=='a')
{
cout<<"\a\nACESS GRANTED";

}
else
{
cout<<"\a\nACESS DENIED ";
o++;
j=0;
if(o<4)
goto sam;
}
if(o>=4)
{cout<<"\nYou have entered the wrong password 4 times";
return-999;
}
       }
	int player = 1,i,choice,option;
	char mark,choice1;
	clrscr();
       do
       {    clrscr();
	cout<<"1.ENTER THE GAME "<<endl<<"2.USER GUIDE"<<endl<<"3.EXIT";
	cin>>option;
	switch(option)
	{
	case 1:
	      do
		 {
		board();
		player=(player%2)?1:2;
		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;
		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')
			square[1] = mark;
		else if (choice == 2 && square[2] == '2')
			square[2] = mark;
		else if (choice == 3 && square[3] == '3')
			square[3] = mark;
		else if (choice == 4 && square[4] == '4')
			square[4] = mark;
		else if (choice == 5 && square[5] == '5')
			square[5] = mark;
		else if (choice == 6 && square[6] == '6')
			square[6] = mark;
		else if (choice == 7 && square[7] == '7')
			square[7] = mark;
		else if (choice == 8 && square[8] == '8')
			square[8] = mark;
		else if (choice == 9 && square[9] == '9')
			square[9] = mark;
		else
		{
			cout<<"Invalid move ";
			player--;
			getch();
		}
		i=checkwin();
		player++;
	}while(i==-1);
	board();
	if(i==1)
		cout<<"==>\aPlayer "<<--player<<" win ";
	else

		cout<<"==>\aGame draw";break;
case 2:guide();
	break;

case 3:exit(0);break;
default:cout<<"Wrong Choice";
}
cout<<"\nDo you want to continue";
cin>>choice1;
}while(choice1=='y'||choice1=='Y');
	getch();
	return 0;
}
