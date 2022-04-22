#include<stdio.h>

int sedan();
int sedan(){
    int car_no,no_of_days,total; 
    char *a; 
    printf("\n----------------------------------------------");
    printf("\nAvailable Sedans:");
    printf("\n1.Honda Civic\n2.Maruti Dzire \n3.Skoda Slavia \n4.Hyundai Verna \n5.Honda Amaze");
    printf("\nEnter Your Choice (1-5): ");
    scanf("%d",&car_no);
    printf("\n---------------------------------------------\n");
    printf("\nPlease enter the number of days the car is required for : ");
            scanf("%d",&no_of_days);
    switch(car_no){
        case 1:
            a="Honda Civic";
            break;
            
        case 2:
            a="Maruti Dzire";
            break;
            
        case 3:
            a="Skoda Slavia";
            break;
        case 4:
            a="Hyundai Verna";
            break;
            
        case 5:
            a="Honda Amaze";
            break;
            
        default:
            printf("Enter the correct number!");
            printf(sedan());
    }
    //printing Bill
    printf("\n-----------------------------------------");
    printf("\n|***********Goku's Car Rental***********|");
    printf("\n-----------------------------------------");
    printf("\n-BOOKING SUCCESSFULL!");
    printf("\n-Car Booked: %s",a);
    printf("\n-No.of Days Rented For:%d",no_of_days);
    printf("\n-Total Amount: Rs.%d",total=no_of_days*5000);
    printf("\n-----------------------------------------");
    printf("\nThankYou For Renting From Us");
}

int SUV();
int SUV(){
    int car_no,no_of_days,total;
    char *a;
    printf("\n----------------------------------------------");
    printf("\nAvailable SUVs:");
    printf("\n1.Tata Toyata \n2.Tata Nexon \n3.Mahindra Bolero \n4.4.Mahindra XUV500 \n5.Mahindra Scorpio");
    printf("\nEnter Your Choice (1-5): ");
    scanf("%d",&car_no);
    printf("\n----------------------------------------\n");
    printf("Please enter the number of days the car is required for : ");
    scanf("%d",&no_of_days);
    switch(car_no){
        case 1:
            a="Tata Toyata";
            break;
            
        case 2:
            a="Tata Nexon";
            break;
            
        case 3:
            a="Mahindra Bolero";
            break;
        case 4:
            a="Mahindra XUV500";
            break;
            
        case 5:
            a="Mahindra Socrpio";
            break;
            
        default:
            printf("Enter the correct number!");
            printf(SUV());
    }
    printf("\n-----------------------------------------");
    printf("\n|***********Goku's Car Rental***********|");
    printf("\n-----------------------------------------");
    printf("\n-BOOKING SUCCESSFULL!");
    printf("\n-Car Booked: %s",a);
    printf("\n-No.of Days Rented For:%d",no_of_days);
    printf("\n-Total Amount: Rs.%d",total=no_of_days*8000);
    printf("\n-----------------------------------------");
    printf("\nThankYou For Renting From Us");
}


int hback();
int hback(){
    int car_no,no_of_days,total;
    char *a;
    printf("\n----------------------------------------------");
    printf("\nAvailable Hatchbacks:");
    printf("\n1.Hyundai i10\n\n2.Maruti WagonR \n3.Tata Tiago \n4.Maruti Swift \n5.Volkswagen Polo");
    printf("\nEnter Your Choice (1-5): ");
    scanf("%d",&car_no);
    printf("\n----------------------------------------------\n");
    printf("Please enter the number of days the car is required for : ");
    scanf("%d",&no_of_days);
    switch(car_no){
        case 1:
            a="Hyundai i10";
            break;    
        case 2:
            a="Maruti WagonR";
            break;
            
        case 3:
            a="Tata Tiago";
            break;
        case 4:
            a="Maruti Swift";
            break;    
        case 5:
            a="Volkswagen Polo";
            break;     
        default:
            printf("Enter the correct number!");
            printf(hback());
    }
    printf("\n-----------------------------------------");
    printf("\n|***********Goku's Car Rental***********|");
    printf("\n-----------------------------------------");
    printf("\n-BOOKING SUCCESSFULL!");
    printf("\n-Car Booked: %s",a);
    printf("\n-No.of Days Rented For:%d",no_of_days);
    printf("\n-Total Amount: Rs.%d",total=no_of_days*2000);
    printf("\n-----------------------------------------");
    printf("\nThankYou For Renting From Us");
}


int main(){
    int user_choice,model_choice;
    
    printf("\n----------------------------------------");
    printf("\n|*****Welcome To Goku's Car Rental*****|");
    printf("\n----------------------------------------");
    printf("\nWhat type of car would you like to rent?");
    printf("\n1.Sedan----->(Rs.5000/day)");
    printf("\n2.SUV------>(Rs.8000/day)");
    printf("\n3.Hatchback------>(Rs.2000/day) ");
    printf("\n*Fine of Rs.1000/Extra Hour if car not returned on time*");
    printf("\nEnter Your Choice (1-3): ");
    scanf("%d",&user_choice);
    
    

    if(user_choice==1){
        sedan();
    }
    else if(user_choice==2){
        SUV();
    }
    else if(user_choice==3){
        hback();
    }
    else{
        printf("\n----------------------------------------------");
        printf("\n***Input Error-Please Enter Again***");
        printf(main());
    }


    return 0;
}