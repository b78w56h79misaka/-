#include<stdio.h>
#include<math.h>
class point
{
	double x, y;
public:
	point(double xl, double yl) 
	{
		x = xl;
		y = yl;
	};
	~point() {}
	double distance(point& i)
	{
		double a = x - i.x;
		double b = y - i.y;
		
		return sqrt(a * a + b * b);
	};
};

int main()
{
	double n;
	point b(0, 0);
	point a(3, 4);
	n = a.distance(b);
	printf("¾àÀëÎª%.2lf", n);

	return 0;
}