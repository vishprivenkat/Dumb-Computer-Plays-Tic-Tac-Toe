#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
     int counttotal,count=0;

    char charuser='@',charcomp='#',posi;

int choose[9]={2,9,8,5,6,7,1,4,3},size=9;

char sq1='1',sq2='2',sq3='3',sq4='4',sq5='5',sq6='6',sq7='7',sq8='8',sq9='9';







void board()
   {  clrscr();
      cout<<"              TIC TAC TOE\n";
 cout<<"\nusers character -  @    computer s character - #\n";
	cout<<"\n";
       cout<<"\t\t\t"<<sq1<<"   |"<<sq2<<"   |"<<sq3<<"\n";
       cout<<"\t\t\t____|____|____\n";
       cout<<"\t\t\t"<<sq4<<"   |"<<sq5<<"   |"<<sq6<<"\n";
       cout<<"\t\t\t____|____|____ \n";
	cout<<"\t\t\t"<<sq7<<"   |"<<sq8<<"   |"<<sq9<<"\n";
	cout<<"\t\t\t    |    |  \n";
	cout<<"\t        ENTER POSITION\n";
 }
int checkwin()
{  if( sq1==sq2&&sq2==sq3)
   { posi=sq1;	 return 1; }
else if( sq4==sq5&&sq5==sq6)
{ posi=sq4;return 1;    }
else if( sq7==sq8&&sq8==sq9)
{ posi=sq7;return 1;    }
else if( sq1==sq5&&sq5==sq9)
{ posi=sq1;return 1;    }
else if(sq3==sq5&&sq5==sq7)
{ posi=sq3;return 1;  }
else if(sq1==sq4&&sq4==sq7)
{ posi=sq1;return 1;   }
else if(sq2==sq5&&sq5==sq8)
{ posi=sq2;return 1;   }

else if(sq3==sq6&&sq6==sq9)
{ posi=sq3;return 	1;     }
return -1;}


void del(int*p,int&n,int i)
{ for(int f=0;f<n;++f)
if(p[f]==i)
break;
for( int h=f;h<n;h++)
p[h]=p[h+1];
n--;}


void main()
  { clrscr();


// printing the grid for the game

void board();
int count;
int checkwin();


int poscomp; int  position ;
	for(int h=1;h<=9;h++)
	{     board();
		cin>> position;count++;
	  switch(position)
		{ case 1: sq1=charuser;break;
			case 2:sq2=charuser;break;
		case 3:sq3=charuser;break;
			case 4: sq4=charuser;break;
		case 5: sq5=charuser;break;
			case 6: sq6=charuser;break;
		 case  7: sq7=charuser;break;
			case 8: sq8=charuser;break;
		case 9: sq9=charuser;break;
     }          count++;
	 del(choose,size,position);

		 board();
getch();
  counttotal=checkwin();
if(counttotal==1||count==9)
break;



     randomize();
		poscomp= random(size);
			switch(choose[poscomp])
				{ case 1:sq1=charcomp;break;
				case 2:sq2=charcomp;break;
				case 3:sq3=charcomp;break;
				case 4:sq4=charcomp;break;
				case 5:sq5=charcomp;break;
				case 6:sq6=charcomp;break;
				case 7:sq7=charcomp;break;
				case 8:sq8=charcomp;break;
				case 9:sq9=charcomp;break;}    count++;
del(choose,size,choose[poscomp]);


		       board();
		    counttotal=   checkwin();
if(counttotal==1)
break;


}
   if(h==10||count==9)
cout<<" IT's A DRAW "<<(char)1;
else if(posi==charuser)
cout<<" USER WINS "<<(char)1;
else if(posi==charcomp)
cout<<"COMPUTER WINS "<<(char)1;

 getch();    }





