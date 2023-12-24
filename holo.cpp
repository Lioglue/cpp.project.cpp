#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
	initwindow(600*2,400*2,"boss");
	int pag =0;
	{
		while(true){
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				setcolor(j+150);
			rectangle(300-j,100-j,300+400+j,100+400+j);	
			}
		setactivepage(pag);
		setvisualpage(1-pag);
				readimagefile("Capture.gif",0,0,600*2,400*2);
	readimagefile("00u.gif",300,100,300+400,100+400);
				//outtext("this is moo which is builted by fkremaryam mekonnin thanks fore watching this vedio please subscribe");
				readimagefile("yoya.gif",320,120,320+100,120+100);
				if(i==5||i==10||i==3){
					readimagefile("moo.gif",320+25,120-20,320+100-25,120+100-60);
				}
				readimagefile("yoya.gif",320+125,120,320+100+125,120+100);
				readimagefile("yoya.gif",320+250,120,320+100+250,120+100);
				//////////////////////row//////////////////////////
				readimagefile("yoya.gif",320,120+125,320+100,120+100+125);
				if(i==4||i==9||i==2){
					readimagefile("plant.gif",320+25,120+125-20,320+100-25,120+100+125-60);
				}
				readimagefile("yoya.gif",320+125,120+250,320+100+125,120+100+250);
				readimagefile("yoya.gif",320+250,120+250,320+100+250,120+100+250);
				//////////////////////row//////////////////////////
				readimagefile("yoya.gif",320,120+250,320+100,120+100+250);
				readimagefile("yoya.gif",320+125,120+125,320+100+125,120+100+125);
				readimagefile("yoya.gif",320+250,120+125,320+100+250,120+100+125);
				//////////////////////row//////////////////////////
				if(i==14){
					outtext("                                game over");
					cout<<"\a";
				}
				delay(500);
				pag=1-pag;
			}
			
		}
		}
	getch();
	closegraph();
	return 0;
}
