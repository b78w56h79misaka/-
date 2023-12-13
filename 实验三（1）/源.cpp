#include<stdio.h>
class Rec
{
public:
	Rec()
	{
		float lenth,width;
	}
	float area(float lenth, float width);

};
float Rec::area(float lenth, float width)
{
	return lenth * width;
};
int main()
{
	float n;
	Rec aa;
	n=aa.area(3.0,5.0);
	printf("Ãæ»ýÎª%.2f", n);

	return 0;
}
