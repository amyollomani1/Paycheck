#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
    double hourlySalary = 0;
    double weeklyTime = 0;
    double employeeNumber =0 ;

    printf("Welcome to \"TEMPLE HUMAN RESOURCES\" \n");
    printf("\n");
    printf("\tEnter Employee number: ");
    scanf("%lf", &employeeNumber);

    double intpart=0;
    if (employeeNumber <=0||( modf(employeeNumber, &intpart) !=0)){
          printf("\n\tThis is not a valid Employee Number.\n\tPlease run the program again");
    printf("\n\nThank you for using \"TEMPLE HUMAN RESOURCES\"");
     exit(1);
    }
    
    
    printf("\tEnter Hourly Salary: ");
    scanf("%lf", &hourlySalary);
    if(hourlySalary <=0){
            printf("\n\tThis is not a valid hourly salary amount.\n\tPlease run the program again");
    printf("\n\nThank you for using \"TEMPLE HUMAN RESOURCES\"");
            exit(1);
    }
    printf("\tEnter Weekly Time: ");
    scanf("%lf", &weeklyTime);
    if(weeklyTime <=0){
            printf("\n\tThis is not a weekly time.\n\tPlease run the program again");
    printf("\n\nThank you for using \"TEMPLE HUMAN RESOURCES\"");
            exit(1);
    }

    
    double overtime = 0;  
    double regularTime = 0;
    if(weeklyTime >40){
            overtime = weeklyTime - 40;
            regularTime = weeklyTime - overtime;
         
    }else regularTime = weeklyTime;
    
    double regularPay = regularTime * hourlySalary;
    double overtimePay = overtime * 1.5 * hourlySalary;

    double netPay = regularPay + overtimePay;
    printf("\t==============================");
    printf("\n\tEmployee #: %0.0lf\n", employeeNumber);
    printf("\tHourly Salary: $%0.1lf\n", hourlySalary);
    printf("\tWeekly Time: %0.1lf\n", weeklyTime);
    printf("\tRegular Pay: $%0.1lf\n", regularPay);
    printf("\tOvertime Pay: $%0.1lf\n", overtimePay);
    printf("\tNet Pay: $%0.1lf\n", netPay);
    printf("\t==============================");
    printf("\nThank you for using \"TEMPLE HUMAN RESOURCES\" \n");
return 0;

}
/*
 * Hourly salries are doubles
 * Weekly time can't be zero
 *printf("Value of d = %f\n",d);
 */
