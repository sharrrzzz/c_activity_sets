typedef struct _triangle 
{
	float base, altitude, area;
} 

Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);