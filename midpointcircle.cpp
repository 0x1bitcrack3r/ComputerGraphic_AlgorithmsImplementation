
#include <graphics.h>

int main( )
{
    initwindow(400, 300, "First Sample");
  int xc = 320, yc = 240; //co-ordinates
	int r = 30; // radius
	int p = 1 - r; //initial decision
	int y = r;
	for(int x = 0; x <= y; x++) {
		if(p <= 0) {
			p = p + 2 * x + 3;
		}
		else {
			y = y - 1;
			p = p + 2 * (x - y) + 5;
		}
		putpixel(xc+x,yc-y,1);
		putpixel(xc-x,yc-y,2);
		putpixel(xc+x,yc+y,3);
		putpixel(xc-x,yc+y,4);
		putpixel(xc+y,yc-x,5);
		putpixel(xc-y,yc-x,6);
		putpixel(xc+y,yc+x,7);
		putpixel(xc-y,yc+x,8);
	}
    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}










