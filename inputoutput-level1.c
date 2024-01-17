/*
1)On one bectutiful Sunday Selvan went to Aaron's house for exam preparation
They have decided to study Mathematics subject because they have exams by coming Monday, Aaran is a master in Mathematics but Selvan is not as good in Mathematics so James trained with Selvan for getting a high score In the exam
After teaching some problems to Selvan. Aaron have given some tasks to Solvan to solvo
The problem is to convert input float into a double. Can you help Selvan in finding the solution

Constraints:
1.00 num1 100.00
1.00 s num2 100.00
1.00 resnum 14 100.00 1.00 ≤ resnum2 100.00
Input Format:
The first and second line of the input represents two different input value of type float.
Output Format
The first and second line of the output represents outputs al first and second line of input of type double.

INPUT 
48.18   
17.77
EXPECTED OUTPUT
48.180000 
17.770000

*/

******************************************************CODE**********************************************************************************************************************************
#include <stdio.h>

int main()
{
    float num1,num2;
    double resnum1,resnum2;
    scanf("%f",&num1);
    scanf("%f",&num2);
    resnum1=(double)num1;
    resnum2=(double)num2;
    printf("%lf\n",resnum1);
    printf("%lf",resnum2);
	return 0;
}

*/
********************************************************************************************************************************************************************************************
2)Nancy bought apples from the fruit shop.
The shopkaspar specified the bill amount. Nancy also gave some amount to the shopkeeper for paying the bill
But she likes to know the quotient and remainder oftar dividing the amount given by har by the bill amount specified by the shopkeeper
Can you help nancy in finding ite

Input Format
First Line: Integer value of amigiven representing the amount given by nancy
Second Line: Integer value of billamt representing the amount specified by the shop keeper
Output Format
First Line: Print the Quotient in integer format.
Second Line: Print the Remainder in integer format

INPUT (STDIN)
600
520
EXPECTED OUTPUT
Quotient:1
Remainder:80

*******************************************************************************CODE*********************************************************************************************************
*/
#include<stdio.h>
int main()
{
    int billamt,amtgiven;
    scanf("%i",&billamt);
    scanf("%i",&amtgiven);
    int a=billamt / amtgiven;
    int b =billamt %amtgiven;
    printf("Quotient:%i\n",a);
    printf("Remainder:%i",b);
    return 0;
}

/*
********************************************************************************************************************************************************************************************
3)Professor JD has lots of options. Bottles containing all types of potions are stacked on shalves which cover the entire wall from floor to cailing.
Professor JD has broken his bones several times while climbing the top shelf for retrieving a potion. He decided to get a ladder for him.
But he has no time to visit Charu. So he instructed Bargav to make a ladder for him. Professor ID specifically wants a step ladder that looks like an inverted "V' from a side view
Professor just mentioned two things before vanishing
B-separation between lelt side (LS) und right side (RS) on the ground
15-the length of left side
What should be the length of RS3 At one extreme 15 can be vertical and as other RS can be vertical
Problem
Bargov is angry and confused.
Can you help him find the minimum and maximum length of RS.

Input Format:
Only line of input contains2 integers roprosenting IB and US respectively.
Output Format:
The only line of output contains minimum value of RS and maximum value of RS, separated by space.
The orower (RS) will be considered correct if it has relative and obsolute error less them 10-2

INPUT (STDIN)
17 21
EXPECTED OUTPUT
12.32883 27.01851

**********************************************************CODE******************************************************************************************************************************
*/
#include <stdio.h>
#include<math.h>
int main()
{
    float b,ls,rs1,rs2;
    scanf("%f %f",&b,&ls);
    rs1=sqrt(pow(ls,2)-pow(b,2));
    rs2=sqrt(pow(b,2)+pow(ls,2));
    printf("%.5f %.5f",rs1,rs2);

	return 0;
}
/*
********************************************************************************************************************************************************************************************
4)Binita was travelling from Chennai to Delhi in Rajdhani Express
The train have arrived at the destination ister than the estimated time.
So, Binito wants to know the total number of hours and minutes the train was delayed.
Problem
Can you help Binita in finding the exact hour and time Rajdhani Express was delay on the day of Binita's journey?

Input Format:
The only line of inpui has single value of variable tot mins of type integer representing total minutes.
Output Format
Print the Number of Hours and Minutes in a single line.

INPUT (STDIN)
546
EXPECTED OUTPUT
9 Hours and 6 Minutes

**********************************************************************CODE******************************************************************************************************************
*/
#include <stdio.h>
int main()
{
    int tot_mins,hrs,mins;
    scanf("%d",&tot_mins);
    hrs=tot_mins/60;
    mins=tot_mins%60;
    printf("%i Hours and %i Minutes",hrs,mins);

	return 0;
}

/*
********************************************************************************************************************************************************************************************
5)The Electricity Officer has mentioned the total counts of unit and amount. The officer inform the customer the bill amount in a unique format.
The format given by electricity officer as follow:
But customers are finding the difficult to find the exact amount that needs to be paid.
Can you help the customers?
Functional Description
Total Bill Amount unitoconsimad coatperunit

Input Format
The first line of input represents the integer value of unilaonsumed The second line of input repwawnts the integer value of costpecunil
Output Format
Prinil the total Bill amicunt in single line.

INPUT (STDIN)
23
3
EXPECTED OUTPUT
12167

******************************************************************************CODE**********************************************************************************************************
*/
#include <stdio.h>
#include<math.h>
int main()
{
    int unitconsumed,costperunit;
    scanf("%i",&unitconsumed);
    scanf("%i",&costperunit);
    int a =pow(unitconsumed, costperunit);
    printf("%i",a);
	return 0;
}