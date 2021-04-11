#include<iostream>
using namespace std;

void PrintMenu(){
     cout << "Please enter an option to add to your total: " << endl;
     cout << "1 -- Used plastic bottles" << endl;
     cout << "2 -- Used aluminum cans" << endl;
     cout << "3 -- Used plastic bags" << endl;
     cout << "4 -- Used cardboard" << endl;
     cout << "5 -- Used reciepts" << endl;
     cout << "6 -- Took a long shower" << endl;
     cout << "7 -- Kept lights on during the day" << endl;
     cout << "8 -- End day" << endl;
}

void Bottles(){
    
}

void Cans(){
    
}

void Bags(){
    
}

void Cardboard(){
    
}

void Reciepts(){
    
}

void Showers(){
    
}

void Light(){
    
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
