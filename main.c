#include <stdio.h>
#include <string.h>
#include <conio.h>

//MADE BY AJAY SAINI AS A MINI PROJECT IN C AND C++ USING SOME HELP FROM INTERNET//

struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}p[10000];
int order_count = 0, served_count = 0, waiting_now = 0;

int order ()
{
    int NUMBER,ITEMCODE,QUANTITY;
    printf ("Please enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 10000+order_count;
    items();
    p[order_count].number_of_food = NUMBER;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;

    level:
    printf ("How many items you want to order? ");
    scanf ("%d", &NUMBER);

    getchar ();
    while (NUMBER--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &ITEMCODE);
        getchar();
        switch(ITEMCODE){
    case 101 : {
        printf ("Enter the size of burger: 1. 250gm  2. 350gm\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &QUANTITY);
        getchar();

        p[order_count].number_of_food +=QUANTITY;

        if (i==1) p[order_count].cost += (120*QUANTITY);

        else p[order_count].cost += (170*QUANTITY);


        break;
    }
    case 102 :{
        printf ("Enter the size of Chicken Pizza: 1. 14inch  2. 16inch  3. 20inch\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &QUANTITY);
        getchar();

        p[order_count].number_of_food +=QUANTITY;

        if (i==1) p[order_count].cost += (350*QUANTITY);

        else if (i==2) p[order_count].cost += (500*QUANTITY);

        else  p[order_count].cost += (750*QUANTITY);

        break;
    }
    case 103 :{
        printf ("Enter the amount of chicken: 1. 2 pcs  2. 6 pcs  3. 10 pcs\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &QUANTITY);
        getchar();

        p[order_count].number_of_food +=QUANTITY;

        if (i==1) p[order_count].cost += (90*QUANTITY);

        else if (i==2) p[order_count].cost += (270*QUANTITY);

        else  p[order_count].cost += (500*QUANTITY);

        break;
    }
    case 104 :{
        printf ("Enter the size of grilled chicken: 1. Quarter  2. Half  3. Full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &QUANTITY);
        getchar();

        p[order_count].number_of_food +=QUANTITY;

        if (i==1) p[order_count].cost += (80*QUANTITY);

        else if (i==2) p[order_count].cost += (150*QUANTITY);

        else  p[order_count].cost += (270*QUANTITY);

        break;
    }
    case 105 :{
        printf ("Enter the size of Noodles: 1. Half  2. Full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &QUANTITY);
        getchar();

        p[order_count].number_of_food +=QUANTITY;

        if (i==1) p[order_count].cost += (100*QUANTITY);

        else p[order_count].cost += (200*QUANTITY);

        break;
    }
    case 106 :{
        printf ("Enter the size of pasta: 1. Half  2. Full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &QUANTITY);
        getchar();

        p[order_count].number_of_food +=QUANTITY;

        if (i==1) p[order_count].cost += (130*QUANTITY);

        else p[order_count].cost += (260*QUANTITY);

        break;
    }
    case 107 : {
        printf ("200 mg of OREO SHAKE\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &QUANTITY);
        getchar();

        p[order_count].number_of_food +=QUANTITY;
        p[order_count].cost += (160*QUANTITY);
        break;
    }
    case 108 : {
        printf ("200 mg of Cold Coffee\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &QUANTITY);
        getchar();

        p[order_count].number_of_food +=QUANTITY;
        p[order_count].cost += (50*QUANTITY);
        break;
    }
    case 109 : {
        printf ("200 mg of Cappuccino\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &QUANTITY);
        getchar();

        p[order_count].number_of_food +=QUANTITY;
        p[order_count].cost += (80*QUANTITY);
        break;
    }
    case 110 :{
        printf ("Enter the size of Coke: 1. 250ml  2. 500ml\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &QUANTITY);
        getchar();

        p[order_count].number_of_food +=QUANTITY;

        if (i==1) p[order_count].cost += (30*QUANTITY);

        else p[order_count].cost += (50*QUANTITY);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        NUMBER++;
    }
        }
    }
    char temp;
    printf ("Do you want to order anything else?(y/n)\n ");
    scanf("%c", &temp);
    if (temp == 'y' || temp == 'Y')
        goto level;
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %d Rupees.\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
    system ("COLOR 3");
    printf("THANKS FOR ORDERING\n");
    order_count ++;
}
int receive ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("All order served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
void items ()
{
    printf("..................................MENU....................................\n");

    printf("Item Code#   Description-------------------Size--------------------Price(Rupees)\n");

    printf("[101]---------Burger---------------------250/350gm------------------120/170\n");
    printf("[102]---------Chicken Pizza--------------14/16/20inch---------------350/500/750\n");
    printf("[103]---------Fried Chicken--------------2/6/10 pcs-----------------90/270/500\n");
    printf("[104]---------Grilled Chicken------------quarter/half/full----------80/150/270\n");
    printf("[105]---------Noodles--------------------Half/Full------------------100/200\n");
    printf("[106]---------Pasta----------------------Half/Full------------------130/270\n");
    printf("[107]---------Oreo Shake-----------------200mg----------------------160\n");
    printf("[108]---------Cold Coffee----------------200mg----------------------50\n");
    printf("[109]---------Cappuccino-----------------200mg----------------------80\n");
    printf("[110]---------Coke-----------------------250/500ml------------------30/50\n\n");

}
int main ()
{
    printf ("\t\t     Welcome To Kings Cafe\n");
    while (1){
        printf ("\t\t1. Order\n\t\t2. Serve\n\t\t3. Display \n\t\t4. Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                system ("COLOR 9");
                printf ("We are closed come by again\n\n");
                printf ("Project submitted by AJAY SAINI\n\n");

                return 0;
            }
        }
    }
}

