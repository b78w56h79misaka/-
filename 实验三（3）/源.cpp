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
	friend double distance(point& a,point&b)
	{
		double i = a.x - b.x;
		double l = a.y - b.y;

		return sqrt(i * i + l * l);
	};
};

int main()
{
	double n;
	point b(0, 0);
	point a(3, 4);
	n = distance(a,b);
	printf("¾àÀëÎª%.2lf", n);

	return 0;
}
