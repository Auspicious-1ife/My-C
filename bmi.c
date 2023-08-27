#include <stdio.h>

int main(void)
{
    char name[100];
    /** This is a program that helps to calculate your BMI collecting two parameters such as your height in m and weight in kg.*/
    printf("Hello friend!\n");//greets the user
    printf("What is your name?: ");// requests the user's name
    scanf("%s", name);// accepts the user's input for name
    printf("Nice to meet you %s!\n", name);// prints the user's name 
    printf("This is a program to assist you in checking your BMI using your height and weight values\n I hope you are excited to find out what your BMI is!\n");
    
    // This calculates BMI based on the values
    float weight, height, BMI;
    // These are the values used in the calculation
   {
    printf("Please, input your weight in kilogram(kg): \n");
    scanf("%f", &weight);
}
{
    printf("Please, input your height in meters(m): \n");
    scanf("%f", &height);
}
// The formula to calculate the BMI is
BMI=weight/(height*height);
//This evaluates the values for weight and divides it by height square
if (BMI<=18.5)
//This checks if the BMI is at the set value or below
{
printf("%.2f Yo! you are underweight\n", BMI);
} 
// this gives the output that the user is underweight based on the value
else if (BMI <= 24.9) 
// checks if the value is within this range
{
    printf("%.2f Aww nice! you are normal weight\n", BMI);
} 
//prints the output that the user is normal weight based on the value
else if (BMI <= 29.9) 
// checks if the result of value is within this range
{
    printf("%.2f Not nice, you are overweight\n", BMI);
}
// gives the above output to the user
else 
// checks if the result of the user's input is not within any of the range above
{
    printf("%.2f Hmm, may I suggest you try some exercises or diet plans to manage the obesity\n", BMI);
}
// prints that the user should seek support as the result is under the range of obesity
    return 0;
}
