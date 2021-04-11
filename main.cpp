#include<iostream>
using namespace std;

void PrintMenu(){
     cout << "Please enter an option to add to your total: " << endl;
     cout << "1 -- Used plastic bottles" << endl;
     cout << "2 -- Used aluminum cans" << endl;
     cout << "3 -- Used plastic bags" << endl;
     cout << "4 -- Drove a car" << endl;
     cout << "5 -- Used reciepts" << endl;
     cout << "6 -- Took a long shower" << endl;
     cout << "7 -- Kept lights on during the day" << endl;
     cout << "8 -- End day" << endl;
}

int Bottles(){ // produces 82.2g or 3 oz of CO2
     int numBot;
     int returnVal1;
     cout << "How many plastic bottles would you like to add? ";
     cin >> numBot;
     cout << endl;
     returnVal1 = numBot * 82.2;
     return returnVal1;
}

int Cans(){ // produces 33.8g of CO2
     int numCans;
     int returnVal2;
     cout << "How many aluminum cans would you like to add? ";
     cin >> numCans;
     cout << endl;
     returnVal2 = 33.8 * numCans;
     return returnVal2;
}

int Bags(){ // produces 6g of CO2 for every gram
    string bagType;
    int bagWeight;
    int returnVal3;
    int numBags;
    cout << "Did you use a grocery bag or snack bag?" << endl;
    cin >> bagType;
    cout << endl;
     if(bagType == "grocery"){
          bagWeight = 60;
     }
     else{
          bagWeight = 8;
     }
     cout << "How many bags did you use? ";
     cin >> numBags;
     returnVal3 = (bagWeight * 6 * numBags);
     return returnVal3;
}

int Car(){ // produces 114g of CO2 per mile
     int miles;
     int returnVal4;
     cout << "How far did you drive in miles? ";
     cin >> miles;
     cout << endl;
     returnVal4 = miles*114;
     return returnVal4;
}

int Reciepts(){
    
}

int Showers(){
    
}

int Light(){
    
}

int main(){
    cout << "Welcome to your week!" << endl;
    cout << "You will track how much waste you consume every day and check out your impact on the environment at the end of the week." << endl;
    
    int dayNum = 1;
    int carbonPoints = 0;
    
    while(dayNum < 8){
        cout << "Welcome to day " << dayNum << "!" << endl;
        PrintMenu();
        
        
        dayNum++;
    }
    
    return 0;
}
