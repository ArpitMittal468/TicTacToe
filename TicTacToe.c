#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"windows.h"
#include"time.h"
#include"unistd.h"
#define clear system("cls"); // to clear output screen
void TicTacToeLogo(); // logo declairation
int main()
{
  // console Resizer
  HWND wh = GetConsoleWindow();
  MoveWindow(wh, 500, 300, 340, 370, TRUE);
  system("title Tic Tac Toe");

  short c=0,s=32,x=88,o=48,dp=186,csp=206,sp=205,nav[4],nevq[2];
  short navigator,color,m,finalexit,navigation=1,arrow=175,exitnev=1;
  char p1[10],p2[10];
  // Main menu
  nav[0]=175;
  nav[1]=32;
  nav[2]=32;
  nav[3]=32;

  system("color 8f"); // GREY
  clear;
  printf("\n\n\n\n");
  TicTacToeLogo();
  printf("\e[?25l"); // To hide cursor in console window
  printf("\n\n\n\n          Made By Arpit Mittal" );
  sleep(1);
  system("color cf"); // RED
  sleep(1);
  system("color 3f"); // BLUE
  sleep(1);
  system("color 8f"); // GREY
  mainmenu:
  clear;
  printf("\e[?25l"); // To hide cursor in console window
  printf("\n\n\n\n\n");
  printf("            %c Play\n",nav[0]);
  printf("            %c See Instructions\n",nav[1]);
  printf("            %c Change Theme \n",nav[2]);
  printf("            %c Quit\n",nav[3]);
  navigator=getch();
{
  if(navigator==75 || navigator==72)
  navigation--;
  else if (navigator==80 || navigator==77)
  navigation++;
  if(navigation<1)
  navigation=4;
  if(navigation>4)
  navigation=1;
  if(navigation==1)
  {
    m=49;
    nav[0]=175;
    nav[1]=32;
    nav[2]=32;
    nav[3]=32;
  }
  else if(navigation==2)
  {
    m=50;
    nav[0]=32;
    nav[1]=175;
    nav[2]=32;
    nav[3]=32;
  }
  else if(navigation==3)
  {
    m=51;
    nav[0]=32;
    nav[1]=32;
    nav[2]=175;
    nav[3]=32;
  }
  else if(navigation==4)
  {
    m=52;
    nav[0]=32;
    nav[1]=32;
    nav[2]=32;
    nav[3]=175;
  }
  if(navigator!=13)
  goto mainmenu;
}
  if(m==50) // Instruction  menu
{
  // Position Input format
  clear;
  TicTacToeLogo();
  printf("        Position Input Format:");
  printf("\n\n");
  printf("\t      %c7%c%c%c8%c%c%c9%c\n",s,s,dp,s,s,dp,s,s);
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",sp,sp,sp,csp,sp,sp,sp,csp,sp,sp,sp);
  printf("\t      %c4%c%c%c5%c%c%c6%c\n",s,s,dp,s,s,dp,s,s);
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",sp,sp,sp,csp,sp,sp,sp,csp,sp,sp,sp);
  printf("\t      %c1%c%c%c2%c%c%c3%c\n",s,s,dp,s,s,dp,s,s);
  printf("\n      You can input X and 0 using \n");
  printf("   Numpad corresponding to this format\n\n" );
  printf("\n        Press any key to go");
  printf("\n        back to main menu...  ");
  getch();
  goto mainmenu;
}
  else if(m==49) // main game
{
  clear;
  printf("\e[?25h"); // To unhide cursor in console window
  printf("\n\n\n\n\n");
  printf("\n\n");
  printf("       Enter Your Names\n");
  printf("       Player 1: ");
  scanf(" %s",&p1);
  printf("       Player 2: ");
  scanf(" %s",&p2);
  printf("\e[?25l"); // To hide cursor in console window
  while(1)
{
  short a[9]={32,32,32,32,32,32,32,32,32},n[9],x1=0,o1=0;
  short choise,Invalid;
  // For inputing Position in TicTacToe
  for(int i=0;i<9;i++)
{
  wronginput:
  clear;
  printf("\n\n\n\n\n");
  printf("\n");
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",s,a[0],s,dp,s,a[1],s,dp,s,a[2],s);
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",sp,sp,sp,csp,sp,sp,sp,csp,sp,sp,sp);
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",s,a[3],s,dp,s,a[4],s,dp,s,a[5],s);
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",sp,sp,sp,csp,sp,sp,sp,csp,sp,sp,sp);
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",s,a[6],s,dp,s,a[7],s,dp,s,a[8],s);
  printf("\n\n");
  if(c==0)
  printf("           %s\'s Chance (X)\n",p1);
  else if(c==1)
  printf("           %s\'s Chance (0)\n",p2);
  if(Invalid==1)
  printf("           Invalid choice...\n           Choose Again");
  Invalid=0;
  n[i]=getch();
  // X symbol assingment conditions
  if(c==0)
{
  if(n[i]==55 && a[0]==32 )
  a[0]=88;
  else if(n[i]==56 && a[1]==32 )
  a[1]=88;
  else if(n[i]==57 && a[2]==32 )
  a[2]=88;
  else if(n[i]==52 && a[3]==32 )
  a[3]=88;
  else if(n[i]==53 && a[4]==32 )
  a[4]=88;
  else if(n[i]==54 && a[5]==32 )
  a[5]=88;
  else if(n[i]==49 && a[6]==32 )
  a[6]=88;
  else if(n[i]==50 && a[7]==32 )
  a[7]=88;
  else if(n[i]==51 && a[8]==32 )
  a[8]=88;
  else if(n[i]==27||n[i]==8)
  goto mainmenu;
  else
{
  Invalid=1;
  goto wronginput;
}
}
  // 0 symbol assingment conditions
  else if(c==1)
{
  if(n[i]==55 && a[0]==32)
  a[0]=48;
  else if(n[i]==56 && a[1]==32)
  a[1]=48;
  else if(n[i]==57 && a[2]==32)
  a[2]=48;
  else if(n[i]==52 && a[3]==32)
  a[3]=48;
  else if(n[i]==53 && a[4]==32)
  a[4]=48;
  else if(n[i]==54 && a[5]==32)
  a[5]=48;
  else if(n[i]==49 && a[6]==32)
  a[6]=48;
  else if(n[i]==50 && a[7]==32)
  a[7]=48;
  else if(n[i]==51 && a[8]==32)
  a[8]=48;
  else if(n[i]==27||n[i]==8)
  goto mainmenu;
  else
{
  Invalid=1;
  goto wronginput;
}
}
  // Win conditions incrimenters
  if(a[0]==a[1] && a[1]==a[2])
{
  if(a[0]==88)
  x1++;
  else if(a[0]==48)
  o1++;
}
  if(a[3]==a[4]&& a[4]==a[5])
{
  if(a[3]==88)
  x1++;
  else if(a[3]==48)
  o1++;
}
  if(a[6]==a[7]&& a[7]==a[8])
{
  if(a[6]==88)
  x1++;
  else if(a[6]==48)
  o1++;
}
  if(a[0]==a[3]&& a[3]==a[6])
{
  if(a[0]==88)
  x1++;
  else if(a[0]==48)
  o1++;
}
  if(a[4]==a[1]&& a[1]==a[7])
{
  if(a[4]==88)
  x1++;
  else if(a[4]==48)
  o1++;
}
  if(a[5]==a[8]&& a[8]==a[2])
{
  if(a[5]==88)
  x1++;
  else if(a[5]==48)
  o1++;
}
  if(a[6]==a[4]&& a[4]==a[2])
{
  if(a[6]==88)
  x1++;
  if(a[6]==48)
  o1++;
}
  if(a[0]==a[4]&& a[4]==a[8])
{
  if(a[0]==88)
  x1++;
  if(a[0]==48)
  o1++;
}
  if(c==0)
  c=1;
  else if(c==1)
  c=0;

  // Stops game when any Player is about to win
  if(x1>o1)
  break;
  else if(x1<o1)
  break;
}
  // Final image of winning
  finalimage:
  clear;
  printf("\n\n\n\n\n");
  printf("\n");
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",s,a[0],s,dp,s,a[1],s,dp,s,a[2],s);
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",sp,sp,sp,csp,sp,sp,sp,csp,sp,sp,sp);
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",s,a[3],s,dp,s,a[4],s,dp,s,a[5],s);
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",sp,sp,sp,csp,sp,sp,sp,csp,sp,sp,sp);
  printf("\t      %c%c%c%c%c%c%c%c%c%c%c\n",s,a[6],s,dp,s,a[7],s,dp,s,a[8],s);
  printf("\n\n");
  // Final Winnner
  if(x1>o1)
  printf("           %s Wins . . .\n",p1);
  else if(x1<o1)
  printf("           %s Wins . . .\n",p2);
  else
  printf("           Tie . . .\n");
  // Game Repeater
  printf("\n         Press 0 to Play Again ");
  choise=getch();
  if(choise==27||choise==8)
  break;
  else if(choise!=48)
  goto finalimage;

}
  // Back to main menu
//  getch();
  goto mainmenu;
}
 else if(m==51) //Color Change menu
{
  coloragain:
  clear;
  printf("\n\n\n\n\n");
  printf("\t       Press:\n\n");
  printf("              1 %c BLACK\n",arrow);
  printf("              2 %c WHITE\n",arrow);
  printf("              3 %c GREY\n",arrow);
  printf("              4 %c YELLOW\n",arrow);
  printf("              5 %c RED\n",arrow);
  printf("              6 %c BLUE\n",arrow);
  color=getch();
  if(color==49)
  system("color 0f"); // BLACK
  else if(color==50)
  system("color f0"); // WHITE
  else if(color==51)
  system("color 8f"); // GREY
  if(color==52)
  system("color e0"); // YELLOW
  else if(color==53)
  system("color cf"); // RED
  else if(color==54)
  system("color 3f"); // BLUE
  else if(color==27 || color==8)
  goto mainmenu;
  goto coloragain;
}
  else if(m==52) //Quit Menu, Ascii of ESC is 27
{
  exitnev=0;
  nevq[0]=32;
  nevq[1]=175;
  onceagain:
  clear;
  printf("\n\n\n\n\n\n\n\n");
  printf("       Are you sure you want to Exit:\n\n");
  printf("                %c Yes\n",nevq[0]);
  printf("                %c No",nevq[1]);
  finalexit=getch();
  if(finalexit==72 || finalexit==75)
  exitnev=1;
  else if(finalexit==80 || finalexit==77)
  exitnev=0;
  else if(finalexit==27)
  goto mainmenu;
  if(exitnev==1)
  {
    nevq[0]=175;
    nevq[1]=32;
  }
  else if(exitnev==0)
  {
    nevq[0]=32;
    nevq[1]=175;
  }
  if(finalexit!=13)
  goto  onceagain;
  if(exitnev==1)
  goto end;
  else
  goto mainmenu;
}

  end:
  clear;

}
void TicTacToeLogo()
{
  short b=247;
  printf("\n");
  printf("\n\t     %c%c%c%c%c%c%c%c%c%c%c%c%c",b,b,b,b,b,b,b,b,b,b,b,b,b);
  printf("\n\t       TicTacToe");
  printf("\n\t     %c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",b,b,b,b,b,b,b,b,b,b,b,b,b);
}
