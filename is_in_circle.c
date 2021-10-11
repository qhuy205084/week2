/*
    Ho va ten: Do Quoc Huy
    MSSV: 20205084
    Ma lop hoc: 126901
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct point{
    double x;
    double y;
} point_t;
typedef struct circle{
    point_t center;
    double radius;
} circle_t;

int is_in_circle(point_t *p, circle_t *c)
{
    double x_dist, y_dist;
    x_dist = p->x - c->center.x;
    y_dist = p->y - c->center.y;
    return (x_dist * x_dist + y_dist * y_dist <= c->radius * c->radius);
}
int main(void)
{
    point_t p;
    circle_t c;
    printf("Enter point coordinates\n");
    scanf("%lf%lf", &p.x, &p.y);
    printf("Enter circle center coordinates\n");
    scanf("%lf%lf", &c.center.x, &c.center.y);
    printf("Enter circle radius\n");
    scanf("%lf", &c.radius);
    if (is_in_circle(&p, &c)) printf("point is in circle\n");
    else printf("point is out of circle\n");
    return 0;
}

/*
### Test case 1:
    Enter point coordinates
    4 6
    Enter circle center coordinates
    1 1
    Enter circle radius
    3
    point is out of circle
### Test case 2:
    Enter point coordinates
    0 1
    Enter circle center coordinates
    1 1
    Enter circle radius
    2
    point is in circle
### Test case 3:
    Enter point coordinates
    1 0
    Enter circle center coordinates
    0 0
    Enter circle radius
    1
    point is in circle
*/
