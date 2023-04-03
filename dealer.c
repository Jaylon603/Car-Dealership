/*  customer will enter their annual salary in the command line and the software program will output the cars affordable for the customer. 
    The customer will then be allowed to browse the available vehicles by manufacturer and make/model. 
    Once the customer makes a selection, the program displays the customer's selection along with the monthly payments. 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float funcA(float i){
    if(i >125,000){
        return .0479;
    } else if(i>80000 ){
        return 6.55;
    }else if(i>45000 ){
        return .0949;
    }else if(i>0 ){
        return .1328;
    }
} 

/*float funcB(struct vehicle v,float mp,float dp, float q){
    float temp;
    float p = (v.price-dp);
    temp = (p+(p*q*5))/(5*12);
    if(mp>temp){
        printf("%s %s is affordable", v.manufacture,v.model);
    }
} */
void afford(){

}

struct vehicle
{
   char manufacturer[15];
   char make[15];
   char model[22];
   double price;
};

int main(int argc, char *argv[]) {

    float downpayment;
    float salary = atof(argv[1]);
    float interest = funcA(salary);
    float mp;
    int choice1=0;
    int choice2=0;
    char manufacture[10];
    char model[10];
    float price[10];
    struct vehicle chosen[5];


struct vehicle arr_vehicle[51] = {
        {"Toyota","Toyota","Corolla",21550},
        {"Toyota","Toyota","Camry",25945},
        {"Toyota","Toyota","Avalon",36825},
        {"Toyota","Toyota","Mirai",49500},
        {"Toyota","Toyota","Sequoia",58300},
        {"Toyota","Toyota","Tacoma",27250},
        {"Toyota","Toyota","Tundra",36965},
        {"Toyota","Lexus","IS",40585},
        {"Toyota","Lexus","ES",42490},
        {"Toyota","Lexus","GX",57575},
        {"Chevrolet","Chevy","Trailblazer",22100},
        {"Chevrolet","Chevy","Camaro",26100},
        {"Chevrolet","Chevy","Equinox",26600},
        {"Chevrolet","Chevy","Traverse",34520},
        {"Chevrolet","Chevy","Tahoe",54200},
        {"Chevrolet","Chevy","Suburban",56900},
        {"Chevrolet","Chevy","Corvette",64500},
        {"Chevrolet","Chevy","Spark",13600},
        {"Chevrolet","Chevy","Trax",21700},
        {"Chevrolet","Chevy","Malibu",23400},
        {"Nissan","Nissan","Versa",18990},
        {"Nissan","Nissan","Sentra",22700},
        {"Nissan","Nissan","Altima",35385},
        {"Nissan","Nissan","Maxima",43300},
        {"Nissan","Nissan","Pathfinder",50660},
        {"Nissan","Nissan","Rogue",38640},
        {"Nissan","Infiniti","Q50",42650},
        {"Nissan","Infiniti","QX55",49150},
        {"Nissan","Infiniti","QX80",72700},
        {"BMW","BMW","2 Series Coupe",38050},
        {"BMW","BMW","3 Series Sedan",48220},
        {"BMW","BMW","4 Series Convertible",59320},
        {"BMW","BMW","5 Series Sedan",55175},
        {"BMW","BMW","7 Series Sedan",93400},
        {"BMW","BMW","X1",39700},
        {"BMW","BMW","X3",46050},
        {"BMW","BMW","X4",54050},
        {"BMW","BMW","X5",75400},
        {"BMW","BMW","X7",77850},
        {"Volkswagen","VW","Jetta",18995},
        {"Volkswagen","VW","Passat",23995},
        {"Volkswagen","VW","Arteon",36995},
        {"Volkswagen","Audi","Q5",43500},
        {"Volkswagen","Audi","Q3",38700},
        {"Volkswagen","Audi","S6",72700},
        {"Volkswagen","Audi","A6",55900},
        {"Volkswagen","Porsche","Panamera",132760},
        {"Volkswagen","Porsche","Macan",69480},
        {"Volkswagen","Porsche","Cayenne",92960}
                        };
    
    printf("Salary: $ %.2f \n", salary);
    printf("Down payment: ");
    scanf("%f",&downpayment);
    printf("Down payment is %.2f\n",downpayment); 
    mp = (salary/12*.15);
    printf("MP: %.2f \n", mp);
    printf("Available Manufactures: \n");
    printf("1) Toyota     2) Chevrolet     3)Nissan     4)VW Group     5) Nissan \n Select  Manufacture: ");
    
    scanf("%d",&choice1);
    char options[10][10][10][50];
    if(choice1 == 1){
        printf("You chose Toyota \n");
        //funcB(vehicle1,mp,downpayment, interest);
        float temp;
        float p;
        int count;
        
        for(int counter = 0; counter<9; counter++){
            if(mp>temp){
                p = (arr_vehicle[counter].price-downpayment);
                temp = (p+(p*interest*5))/(5*12);
                printf("%d)%s %s - $%.2f \n",count, arr_vehicle[counter].manufacturer,arr_vehicle[counter].model, arr_vehicle[counter].price);
                chosen[count]=arr_vehicle[counter];
                count++;
                
            }
        }
        
    } else if(choice1== 2){
        printf("You chose Chevrolet \n");
        float temp;
        float p;
        int count;
        
        for(int counter = 10; counter<19; counter++){
            if(mp>temp){
                p = (arr_vehicle[counter].price-downpayment);
                temp = (p+(p*interest*5))/(5*12);
                printf("%d)%s %s - $%.2f \n",count, arr_vehicle[counter].manufacturer,arr_vehicle[counter].model, arr_vehicle[counter].price);
                chosen[count]=arr_vehicle[counter];
                count++;
                
            }
        }
    } else if (choice1==3){
        printf("You chose Nissan Group \n");
        float temp;
        float p;
        int count;
        
        for(int counter = 20; counter<29; counter++){
            if(mp>temp){
                p = (arr_vehicle[counter].price-downpayment);
                temp = (p+(p*interest*5))/(5*12);
                printf("%d)%s %s - $%.2f \n",count, arr_vehicle[counter].manufacturer,arr_vehicle[counter].model, arr_vehicle[counter].price);
                chosen[count]=arr_vehicle[counter];
                count++;
                
            }
        }
    } else if (choice1 ==4){
        printf("You chose BMW \n");
        float temp;
        float p;
        int count;
        
        for(int counter = 30; counter<39; counter++){
            if(mp>temp){
                p = (arr_vehicle[counter].price-downpayment);
                temp = (p+(p*interest*5))/(5*12);
                printf("%d)%s %s - $%.2f \n",count, arr_vehicle[counter].manufacturer,arr_vehicle[counter].model, arr_vehicle[counter].price);
                chosen[count]=arr_vehicle[counter];
                count++;
                
            }
        }
    }else if (choice1 ==5){
        printf("You chose Volkswago \n");
        float temp;
        float p;
        int count;
        
        for(int counter = 40; counter<49; counter++){
            if(mp>temp){
                p = (arr_vehicle[counter].price-downpayment);
                temp = (p+(p*interest*5))/(5*12);
                printf("%d)%s %s - $%.2f \n",count, arr_vehicle[counter].manufacturer,arr_vehicle[counter].model, arr_vehicle[counter].price);
                chosen[count]=arr_vehicle[counter];
                count++;
            }
        }
    }  else {
        printf("Invalid Input");
    }
    
    printf("Select Make/Model: ");
    scanf("%d", &choice2);
    float x = (chosen[choice2].price-downpayment);
    float fin = (x+(x*interest*5))/(5*12);
    printf("You selected the %s %s. Your monthly payment is $%.2f. \n",chosen[choice2].make, chosen[choice2].model,fin);
    printf("%d",choice2);
    

    //funcB(choice1,mp);

    //printf("Print struct %s \n", vehicle1.model);

    return 0;

}