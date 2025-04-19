#include <stdio.h>
struct result
{ 
char sub[20]; 
int marks;
};
void main()
{ 
struct result res[] = { {"Maths",100},{"Science",90},{"English",85}};
printf("%s ", res[1].sub); 
printf("%d", (*(res+2)).marks);
}
