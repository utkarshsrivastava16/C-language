#include <stdio.h>

int main(){
    int i = 0;
    while (i!=5){
        printf("Press 1 to find area of rectangle\nPress 2 to find area of circle\nPress 3 to find area of triangle\nPress 3 to find area of square\nPress 5 to EXIT\n");
        printf("Press a no:");
        scanf("%d",&i);
        if(i==1){
            float length;
            float breath;
            printf("Enter the length of rectangle:");
            scanf("%f",&length);
            printf("Enter the breath of rectangle:");
            scanf("%f",&breath);
            float rec_area=(length*breath);
            printf("The area of rectangle = %.2f \n",rec_area);
        }
        else if(i==2){
            float radius;
            printf("Enter the radius of circle:");
            scanf("%f",&radius);
            float cir_area=3.14*radius*radius;
            printf("The area of circle = %.2f \n",cir_area);
        }
        else if (i==3){
            float up;
            float base;
            printf("Enter the height of triangle:");
            scanf("%f",&up);
            printf("Enter the base of triangle:");
            scanf("%f",&base);
            float tri_area=0.5*base*up;
            printf("The area of triangle = %.2f\n",tri_area);
        }
        else if (i==4){
            float side;
            printf("Enter the side of square ");
            scanf("%f",&side);
            float sq_area=side*side;
            printf("The area of sqaure = %.2f\n",sq_area);
        }
        else if(i==5){
            printf("Exit\n");
        }
        else{
            printf("Wrong input\nreenter the no");
        }  

    }
    return 0;
}