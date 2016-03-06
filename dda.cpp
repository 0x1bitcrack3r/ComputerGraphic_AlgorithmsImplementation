
#include <graphics.h>

int main( )
{
    initwindow(400, 300, "First Sample");
int x1=5,y1=5,x2=32,y2=54;
int dx=x2-x1,dy=y2-y1,steps;
int x,y;
if(dx>dy){
	steps=abs(dx);
}
else{
	steps=abs(dy);
}
int xinc,yinc;
xinc=dx/(float)steps;
yinc=dy/(float)steps;
for(int i=0;i<=steps;i++){
	x=xinc+x;
	y=yinc+y;
	putpixel(x,y,WHITE);
}
    
    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}




