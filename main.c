/* This program allows the user to calculate the
 * sum, average, lowest  and highest value in the array.
 * 
 * Author: Hugo Aguirre
 * Date: october 15th, 2018
 * */

#include <stdio.h>


double sum(double *num, int n){   // adding function
    double t=0;
    for(int i=0;i<n;i++){
        t+=num[i];
    }
    return t;
}


double avg(double *num, int n){ //avg function
    return sum(num, n)/n;
}


void low(double *num, int n){
    double g=num[0];               //lowest value and position function
    int pos=0;
    for(int i=1;i<n;i++){
        if(num[i]<g){
            g=num[i];
            pos=i;
        }
    }
    printf("The lowest value is in position:  %d", pos);
    printf("The lowest value is: %lf\n", g);
}


void hgh(double *num, int n){       //highest value and position function
    double h=num[0];
    int pos=0;
    for(int i=1;i<n;i++){
        if(num[i]>h){
            h=num[i];
            pos=i;
        }
    }
    printf("The highest value is in position: %d", pos);
    printf("The highest value is: %lf\n", h);
}

int main(void) {

    // Variable declaration
    int a;
    int b;
    printf("define the size of the array: ");
    scanf("%i", &a);

    double num[a];



    for(int i=0;i<a;i++){
        printf("Give me the element:");    //ask for the elements in the array
        scanf("%lf",&num[i]);
    }

    do{
        printf("\nselect a choice.\n");
        printf("1. Lowest\n");
        printf("2. Highest\n");        //option menu
        printf("3. Sum.\n");
        printf("4. Average\n");
        printf("5. Exit\n");

        scanf("%i", &b);

        //cases according to the choice
        switch (b){
            case 1:
                low(num, a);
                printf("Your answer is above");
                break;
            case 2:
                hgh(num, a);
                printf("Your answer is above");
                break;
            case 3:
                printf("the sum is: %lf", sum(num, a));
                break;
            case 4:
                printf("the average is: %lf", avg(num, a));
                break;
            case 5:
                printf("adiu");
                break;
            default:
                printf("select an option based in the menu. \n");
        }
    } while (b<=5&&b>=0);

    return 0;
}