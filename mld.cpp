
#include <graphics.h>

int main( )
{
    initwindow(400, 300, "First Sample");
    int x0=50, y0=50, x1=150, y1=150;
int dx = x1-x0, dy = y1-y0;
 	int d = 2*dy-dx;
 	int diff1 = 2*dy, diff2 = 2*(dy-dx);
 	int x=x0, y=y0;
 	putpixel(x, y, 15);
 	while(x<x1){
             	if(d<=0){
            	          d+=diff1;
                      	x++;
                      	}
             	else{
                  	d+=diff2;
                  	x++;
                  	y++;
                  	}
             	putpixel(x, y, 15);
   	          delay(200);
             	}
    
    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}











