#include <iostream>
using namespace std;
class Shape
{
public:
	int x, y;
	float scale;
	Shape(int cx, int cy, float _scale)
	{
		x = cx;
		y = cy;
		scale = _scale;
	};
	virtual void showShape() = 0;
	virtual void moveShape(int mx, int my) = 0;
	virtual void eraseShape() = 0;
};
int main()
{
	return 0;
}