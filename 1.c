#include<stdio.h>
#include<math.h>

#define PI 3.14159265

int main() {
	
	float theta,hypotenuse,base,perpendicular,radius,areaT,areaS,areaC,finalArea;
	char buffer[1024];
	
	while(1) {
	
		printf("Enter values of x : ");
		if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
	    	
			if (sscanf(buffer, "%f", &hypotenuse) == 1) {
	    		
				printf("Enter values of theta angle : ");
	    		
				if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
	    			
					if (sscanf(buffer, "%f", &theta) == 1 && (theta == 30.0 || theta == 45.0 || theta == 60.0)) {
		    			
						// calculating base of triangle
						base = cos(theta * PI / 180.0) * hypotenuse;
						
						//calculating area of triangle
						perpendicular = tan(theta * PI / 180.0) * base;
						areaT = 0.5*base*perpendicular;
						
						//calculating area of square
						areaS = pow(base,2);
						
						//calculating area of circle
						radius = base/2.0;
						areaC = PI*radius*radius;
						
						//area of shaded region
						finalArea = areaT + (areaS - areaC);
						
						printf("Area of the shaded region is: %.4f cm square.", finalArea);
						
						return 0;
					} else {
						printf("Please enter integer only! Accepted values:(30,45,60)\n\n");
					}
				} else {
					printf("NULL input not accepted!\n");
				}
			} else {
				printf("Please enter integer only! Accepted values:[1,100]\n");
			}
		} else {
			printf("NULL input not accepted!\n");
		}
	}
}
