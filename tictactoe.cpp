#include<iostream>
using namespace std;
char a[10]={'0','1','2','3','4','5','6','7','8','9'};
  int win();
  void board();
int main()
{
  int i,j,c,p=1;
  char w;
  do{
    board();
    p=(p%2) ? 1 : 2;
    cout<<"player"<<" "<<p<<" "<<"enter";
    cin>>c;
    w=(p==1) ? 'x' :'o';
    if(c==1 && a[1]=='1')
    a[1]=w;
    else if(c==2 && a[2]=='2')
    a[2]=w;
    else if(c==3 && a[3]=='3')
    a[3]=w;
    else if(c==4 && a[4]=='4')
    a[4]=w;
    else if(c==4 && a[4]=='4')
    a[4]=w;
    else if(c==5 && a[5]=='5')
    a[5]=w;
    else if(c==6 && a[6]=='6')
    a[6]=w;
    else if(c==7 && a[7]=='7')
    a[7]=w;
    else if(c==8 && a[8]=='8')
    a[8]=w;
    else if(c==9 && a[9]=='9')
    a[9]=w;
    i=win();
    p++;
  }while(i==-1);
  board();
    if(i==1)
    cout<<"player"<<--p<<"win";
    else
    cout<<"draw";
}
void board()
{
  
  cout<<a[1]<<" "<<" "<<a[2]<<" "<<" "<<a[3]<<endl;
  cout<<a[4]<<" "<<" "<<a[5]<<" "<<" "<<a[6]<<endl;
  cout<<a[7]<<" "<<" "<<a[8]<<" "<<" "<<a[9]<<endl;
}
int win()
{
  if(a[1]==a[2] && a[2]==a[3])
  return 1;
  else if(a[1]==a[4] && a[4]==a[7])
  return 1;
  else if(a[1]==a[5] && a[5]==a[9])
  return 1;
  else if(a[3]==a[5] && a[5]==a[7])
  return 1;
  else if(a[4]==a[5] && a[5]==a[6])
  return 1;
  else if(a[7]==a[8] && a[8]==a[9])
  return 1;
  else if(a[2]==a[5] && a[5]==a[8])
  return 1;
  else if(a[3]==a[6] && a[6]==a[9])
  return 1;
  else if(a[1]!='1' && a[2]!='2' && a[3]!='3' && a[4]!='4' && a[5]!='5' && a[6]!='6' && a[7]!='7' && a[8]!='8' && a[9]!='9')
  return 0;
  else 
  return -1;
}
