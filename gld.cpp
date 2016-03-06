
#include <graphics.h>

int main( )
{
    initwindow(400, 300, "First Sample");
int x1=5,y1=5,x2=32,y2=54;
double slope;
slope=(y2-y1)/(x2-x1);
float c=y1-slope*x1;

for (int i=x1;i<=x2;i++){
	int j;
	j=slope*i+c;
	putpixel(i,j,WHITE);
}
    
    while (!kbhit( ))
    {
        delay(200);
    }
    return 0;
}








