// C program to measure the amount of rainfall and its types
#include <stdio.h>
void main(){
    float rainfall;
    printf("==Program to display the measure of rainfall and its types==\n");
    printf("Enter the measure of rainfall in mm:\n");
    scanf("%f",&rainfall);
    //Check rainfall type
    if (rainfall<0){
        printf("Inavlid input!Rainfall cannot be negative.\n");
    }
    else if(rainfall>=0 && rainfall<=2.5){
        printf("Light Rainfall.\n");
        printf("Suggestions: Carry an umbrella or raincoat if going outdoors.\n Roads maybe slightly slippery-walk carefully.\n Drive with headlights on for better visibility.\n");
    }
    else if (rainfall>2.5 && rainfall<=7.6){
        printf("Moderate Rainfall.\n");
        printf("Suggestions: Keep an umbrella/raincoat ready.\n Avoid unnecessary outdoor activities for long durations.\n Drive slowly to prevent accidents due to wet roads.\n Watch for waterlogging in low-lying areas.");
    }
    else if(rainfall>7.6 && rainfall<=50){
        printf("Heavy Rainfall.\n");
        printf("Suggestions: Prefer to stay indoors unless necessary.\n Avoid walking or driving through flooded roads.\n Keep a small emergency kit(torch,power bank,first-aid) with you.\n Stay updated with local weather alerts.\n ");
        }
        else if(rainfall>50){
            printf("Violent Rainfall.\n");
            printf("Suggestions: Strictly stay indoors and avoid travel.\n Move to higher ground if your area is prone to flooding.\n Keep emergency contacts handy.\n Store drinking water, dry food,and necessary medicines.\n Follow official instructions from disaster management authorities.\n");
        }
        
}
