/* 
Brigido Valdovinos
03/23/2017
This program is to create a billing formula for ia cell phone company according to how
their customers data rates and cell phone types are set up. It will use if/else and 
appropriate conditions      */

#include <iostream>
using namespace std;
 
 
 
 
 int main() {

     int phoneType1;
     int phoneType2;
     int phoneType3;
     int phoneType4;
     int phoneType5;
     int deviceQuantity;
     int dataNeeded;
     int famDiscount;
     int bestPlan;
     int corpDiscount;
     int totalAmount;
     int phonePrice;
     double planPrice;
     double Total;

//Type and number of phones.
   cout<<"How many phones would you like?"<<endl;
   cin>> deviceQuantity;

if (deviceQuantity == 1){
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType1;    
}


if (deviceQuantity == 2) {
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType1;
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType2;     
}




if (deviceQuantity == 3) {
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType1;
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType2;
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType3;     
}


if (deviceQuantity == 4) {
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType1;
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType2;
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType3;
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType4;
}




if (deviceQuantity >= 5) {
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType1;
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType2;
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType3;
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType4;
   cout<<"For dumb phone, enter 1. For smart phone, enter 2. For tablet, enter 3."<<endl;
   cin>> phoneType5;
}


//Corporate Discount
cout<< "If you recieve a corporate discount enter 1, if you don't enter 2. "<<endl;
cin>> corpDiscount;

//Data break up.
   cout<< "How many GBs of data will you need per line? "<<endl;
   cin>> dataNeeded;

if (dataNeeded == 0){
    planPrice = 30;
      if (corpDiscount == 1){
 planPrice = planPrice * .9;  }
      if (deviceQuantity >=2){
   planPrice = planPrice - 3;  }
   
   cout<<"Best plan is unlimited talk and text. You will pay $"<<planPrice<<" per month on each line. "<<endl;
   
}
else if (dataNeeded >=1 && dataNeeded <=5){
    planPrice = 30 + 5 + ((dataNeeded - 1) * .75);
      if (corpDiscount == 1){
 planPrice = planPrice * .9;  }
       if (deviceQuantity >=2){
   planPrice = planPrice - 3;  }

   cout<< "Best plan is the Pay-Per-Data plan. You will pay $"<<planPrice<<" per month on each line."<<endl;
   
}
else if(dataNeeded >=5 && dataNeeded <=10){
    planPrice = 70;
      if (corpDiscount == 1){
 planPrice = planPrice * .9;  }
        if (deviceQuantity >=2){
   planPrice = planPrice - 3;  }

    cout<< "Best plan is the Unlimited plan. You will pay $"<<planPrice<<" per month om each line. "<<endl;
}
else if (dataNeeded > 10){
    planPrice = 70 + ((dataNeeded - 10) * 1.5);
      if (corpDiscount == 1){
 planPrice = planPrice * .9;  }
        if (deviceQuantity >=2){
   planPrice = planPrice - 3;  }
   cout<<"Best plan is the Unlimited plan. You will pay $"<<planPrice<<" per month on each line. "<<endl;
}


     Total = planPrice * deviceQuantity;
     cout<< "Total is: " << Total<<endl;

if (phoneType1 == 2){
 cout<< "Plus $5 for the smartphone. "<<endl;  }
else if (phoneType1 == 3){
 cout<< "Plus $10 for the tablet. "<<endl;   }


if (phoneType2 == 2){
 cout<< "Plus $5 for the smartphone. "<<endl;  }
else if (phoneType2 == 3){
 cout<< "Plus $10 for the tablet. "<<endl;   }


if (phoneType3 == 2){
 cout<< "Plus $5 for the smartphone. "<<endl;  }
else if (phoneType3 == 3){
 cout<< "Plus $10 for the tablet. "<<endl;   }
 
if (phoneType4 == 2){
 cout<< "Plus $5 for the smartphone. "<<endl;  }
else if (phoneType3 == 3){
 cout<< "Plus $10 for the tablet. "<<endl;   }
 
if (phoneType5 == 2){
 cout<< "Plus $5 for the smartphone. "<<endl;  }
else if (phoneType3 == 3){
 cout<< "Plus $10 for the tablet. "<<endl;   }

     
     

     
     
 }