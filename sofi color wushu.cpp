#include <iostream>
#include<graphics.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
		initwindow(600,600,"sofi");
		setcolor(2);
	circle(200,200,100);
	setcolor(4);
	arc(200,150,90,270,50);
	arc(200,250,270,90,50);
	setcolor(1);
	circle(200,160,10);
	setcolor(5);
	circle(200,250,10);
	getch();
	return 0;
}
