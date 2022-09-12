#ifndef POINT_H
#define POINT_H

typedef struct Point{
	double x;
	double y;
}Point;

/**
 * initilize and return a point struct value.
 */
Point Point_value(double x, double y);

/**
 * Print a representation of a Point to stdout
 */
void Point_print(Point *self);

#endif