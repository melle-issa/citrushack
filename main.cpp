#include<iostream>
#include<string>
#include<vector>
using namespace std;

void PrintMenu(){
     cout << "Please enter an option to add to your total: " << endl;
     cout << "1 -- Used plastic bottles" << endl;
     cout << "2 -- Used aluminum cans" << endl;
     cout << "3 -- Used plastic bags" << endl;
     cout << "4 -- Drove a car" << endl;
     cout << "5 -- Called somone" << endl;
     cout << "6 -- Took a long shower" << endl;
     cout << "7 -- Looked something up online" << endl;
     cout << "8 -- End day" << endl;
     cout << "Choose a value:" << endl;
}

double Bottles(){ // produces 82.2g
     int numBot;
     double returnVal1;
     cout << "How many plastic bottles would you like to add? ";
     cin >> numBot;
     cout << endl;
     returnVal1 = 82.2 * numBot;
     return returnVal1;
}

double Cans(){ // produces 33.8g of CO2
     int numCans;
     double returnVal2;
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

int Calls(){ // produces 57g per minute on the phone
    int time;
    int returnVal5;
    cout << "How long was your call? ";
    cin >> time;
    cout << endl;
    returnVal5 = time * 57;
    return returnVal5;
}

int Showers(){ // produces 212g of CO2 per minute
    int minutes;
    int returnVal6;
    cout << "How long was your shower? ";
    cin >> minutes;
    cout << endl;
    returnVal6 = 212 * minutes;
    return returnVal6;
}

int Online(){ // produces roughly 20g per web page yielding 10 results
    int returnVal7;
    int items;
    cout << "How many items did you look up? ";
    cin >> items;
    returnVal7 = 20 * items;
     return returnVal7;
    
}



int main(){
    cout << "Welcome to your week!" << endl;
    cout << "You will track how many grams of carbon dioxide your daily habits produce every day." << endl;
    cout << "At the end of the week, check out your total impact on the environment!" << endl;
    
    int dayNum = 1;
    int carbonPoints = 0;
     
     int tot1 =0;
     int tot2 =0;
     int tot3 =0;
     int tot4 =0;
     int tot5 =0;
     int tot6 =0;
     int tot7 =0;
    
    while(dayNum < 8){
        int choice;
        
        cout << "Welcome to day " << dayNum << "!" << endl;
        PrintMenu();
        cin >> choice;
        while(choice != 8){
             int addPoints;
             if(choice == 1){
                addPoints = Bottles();
                tot1 = tot1 + addPoints;
                carbonPoints = carbonPoints + addPoints;
             }
             if(choice == 2){
                addPoints = Cans();
                tot2 = tot2 + addPoints;
                carbonPoints = carbonPoints + addPoints;
             }
             if(choice == 3){
                addPoints = Bags();
                tot3 = tot3 + addPoints;
                carbonPoints = carbonPoints + addPoints;
             }
             if(choice == 4){
                addPoints = Car();
                tot4 = tot4 + addPoints;
                carbonPoints = carbonPoints + addPoints;
             }
             if(choice == 5){
                addPoints = Calls();
                tot5 = tot5 + addPoints;
                carbonPoints = carbonPoints + addPoints;
             }
             if(choice == 6){
                addPoints = Showers();
                tot6 = tot6 + addPoints;
                carbonPoints = carbonPoints + addPoints;
             }
             if(choice == 7){
                addPoints = Online();
                tot7 = tot7 + addPoints;
                carbonPoints = carbonPoints + addPoints;
             }
             PrintMenu();
             cin >> choice;
        }
        cout << endl;
        dayNum++;
    }
     
     cout << "Your total carbon dioxide output for the week is " << carbonPoints << " grams." << endl;
     
     vector<int> totals;
     totals.push_back(tot1);
     totals.push_back(tot2);
     totals.push_back(tot3);
     totals.push_back(tot4);
     totals.push_back(tot5);
     totals.push_back(tot6);
     totals.push_back(tot7);
     
     int i;
     int max = totals.at(0);
     for(i = 0; i < totals.size(); i++){
          if(totals.at(i) > max){
           max = totals.at(i);    
          }
     }
     
     if(max == totals.at(0)){
      cout << "The thing that contributed most to your carbon dioxide output was plastic bottles." << endl;
     }
     else if(max == totals.at(1)){
      cout << "The thing that contributed most to your carbon dioxide output was: aluminum cans." << endl;
     }
     else if(max == totals.at(2)){ 
      cout << "The thing that contributed most to your carbon dioxide output was: plastic bags." << endl;
     }
     else if(max == totals.at(3)){ 
      cout << "The thing that contributed most to your carbon dioxide output was: driving your car." << endl;
     }
     else if(max == totals.at(4)){
      cout << "The thing that contributed most to your carbon dioxide output was: talking on the phone." << endl;
     }
     else if(max == totals.at(5)){
      cout << "The thing that contributed most to your carbon dioxide output was: taking showers." << endl;
     }
     else if(max == totals.at(6)){
      cout << "The thing that contributed most to your carbon dioxide output was: using the internet." << endl;
     }
    
    return 0;
}
