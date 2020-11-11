#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define  PI 3.14159
void print_menu()
{
    printf("\nMaths Half Yearly Question Paper.\n");
    printf("1.Perimeter of square\n");
    printf("2.What will be the area of the circle.\n");
    printf("3.Pythagoras theorem problem.\n");
    printf("4.Shadow length problems.\n");
    printf("5.Volume of cube problems.\n");
    printf("6.Perimeter of rectangle problems.\n");
    printf("7.Surface area of cube problems.\n");
    printf("8.Average of seven numbers.\n");
    printf("9.Area of rectangle problems.\n");
    printf("10.Area of square problems.\n");

}
int take_input()
{
    int input;
    printf("\n Enter your input: ");
    scanf("%d",&input);
    return input;
}
void print_Perimeter_of_square()
{
    int side;
    printf("Enter the side I will tell you it's perimeter.\n");
    scanf("%d",&side);
    printf("Ans: %d",side*4);

}
void print_What_will_be_the_area_of_the_circle()
{
    int radius;
    printf("Enter the measure of radius I will show you it's area.\n");
    scanf("%d",&radius);
    printf("Ans: %d",22/7*radius*radius);
}
void print_Pythagoras_theorem_problem()
{
    int height,breadth;
   printf("Enter the height and breadth respectively, I will show the hypotenuse square\n");
   scanf("%d",&height);
   scanf("%d",&breadth);
   printf("Ans: %d",height*height+breadth*breadth);
}
void print_Shadow_length_problems()
{
    int ratio,shadow_length;
   printf("Enter the ratio of real length and the shadow length.\n");
   printf("Now enter the measure of the shadow length whose real length you want to see.\n");
   scanf("%d",&ratio);
   scanf("%d",&shadow_length);
   printf("Ans: %d",ratio*shadow_length);

}
void print_Volume_of_cube_problems()
{
    int side;
    printf("Enter the length of the side.\n");
    scanf("%d",&side);
    printf("Ans: %d",side*side*side);
}
void print_Perimeter_of_rectangle_problems()
{
    int length,breadth;
    printf("Enter the length and breadth simultaneously.\n");
    scanf("%d",&length);
    scanf("%d",&breadth);
    printf("Ans: %d",2*length+2*breadth);

}
void print_Surface_area_of_cube_problems()
{

    int side;
    printf("Enter the side length.\n");
    scanf("%d",&side);
    printf("Ans: %d",6*side*side);
}
void print_Average_of_seven_numbers()
{

    int a,b,c,d,e,f,g;
    printf("Enter 7 numbers I will tell you it's average.\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&f);
    scanf("%d",&g);
    printf("Ans: %d",(a+b+c+d+e+f+g)/7);
}
void print_Area_of_rectangle_problems()
{

    int length,breadth;
    printf("Enter the length and breadth I will show you it's area.\n");
    scanf("%d",&length);
    scanf("%d",&breadth);
    printf("Ans: %d",length*breadth);
}
void print_Area_of_square_problems()
{

    int side;
    printf("Enter the side length.\n");
    scanf("%d",&side);
    printf("Ans: %d",side*side);
}
int main()
{
    int user_input;
    while(1)
    {
        print_menu();
        user_input=take_input();
        switch(user_input)
        {
        case 1:
            print_Perimeter_of_square();
            break;
        case 2:
            print_What_will_be_the_area_of_the_circle();
            break;
        case 3:
            print_Pythagoras_theorem_problem();
            break;
        case 4:
            print_Shadow_length_problems();
            break;
        case 5:
            print_Volume_of_cube_problems();
            break;
        case 6:
            print_Perimeter_of_rectangle_problems();
            break;
        case 7:
            print_Surface_area_of_cube_problems();
            break;
        case 8:
            print_Average_of_seven_numbers();
            break;
        case 9:
            print_Area_of_rectangle_problems();
            break;
        case 10:
            print_Area_of_square_problems();
            break;
        default:
            printf("\n exiting.....");
            return 0;
        }

    }
    return 1;
}



