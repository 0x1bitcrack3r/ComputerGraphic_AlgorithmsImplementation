
#include <graphics.h>

int main( )
{
    initwindow(400, 300, "First Sample");
   int xc=300,yc=400,x,y;
   int rx=150,ry=80;
    x=0;
	y=ry;
    int p1=ry*ry-rx*rx*ry+(ry*ry)/4;
    for(x=0;(2*ry*ry*x)-(2*rx*rx*y)<0;x++){
    	if(p1<0){
    		p1+=2*ry*ry*x+ry*ry;
		}
		else{
			y--;
			p1+=2*ry*ry*x+ry*ry-2*rx*rx*y;
		}
		putpixel(xc+x,yc+y,5);
		putpixel(xc-x,yc+y,5);
		putpixel(xc+x,yc-y,5);
		putpixel(xc-x,yc-y,5);
	
	}
	int p2=(int)(ry*ry*(x+0.5)*(x+0.5))+(rx*rx*(y-1)*(y-1))-(rx*rx*ry*ry);
	for(y=y;y>=0;y--){
		if(p2>0){
			p2+=rx*rx-2*rx*rx*y;
			
		}
		else{
			x++;
			p2+=rx*rx-2*rx*rx*y+2*ry*ry*x;
		}
			putpixel(xc+x,yc+y,5);
		putpixel(xc-x,yc+y,5);
		putpixel(xc+x,yc-y,5);
		putpixel(xc-x,yc-y,5);
	
	}
    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}











