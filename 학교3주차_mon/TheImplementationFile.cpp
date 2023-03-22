# include "circle.h"
Circle::Circle(double rds)
	:radius(rds)
{
	if (radius < 0.0)
		assert(false);
}