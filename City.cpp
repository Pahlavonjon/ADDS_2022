#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <thread>
#include <chrono>
#include <ctime>
#include <random>
#include <fstream>
using namespace std;

double Bills(double shopping, double fuel, double car_insurance, double house_insurance, double water, double gas, double electricity, double mortgage, double rent, double council_fee, double wifi, double mobile_data, double gym_membership, double ausgehen, double* &Bills_Array, string* &Bills_names, string* &Rechnung_heisse){
    int length = 14;
    double* Bills_Amount = new double[length];
    *(Bills_Amount+0) = ((shopping)*(52));
    *(Bills_Amount+1) = ((fuel)*(1));
    *(Bills_Amount+2) = ((car_insurance)*(4));
    *(Bills_Amount+3) = ((house_insurance)*(4));
    *(Bills_Amount+4) = ((water)*(4));
    *(Bills_Amount+5) = ((gas)*(4));
    *(Bills_Amount+6) = ((electricity)*(4));
    *(Bills_Amount+7) = ((mortgage)*(12));
    *(Bills_Amount+8) = ((rent)*(12));
    *(Bills_Amount+9) = ((council_fee)*(4));
    *(Bills_Amount+10) = ((wifi)*(12));
    *(Bills_Amount+11) = ((mobile_data)*(12));
    *(Bills_Amount+12) = ((gym_membership)*(52));
    *(Bills_Amount+13) = ((ausgehen)*(52));
    // school fees
    // car finance
    // clothes
    // 

    double annual_expenditure = 0;
    for (int k = 0; k < length; k++){
        annual_expenditure += *(Bills_Amount+k);
    }
    Bills_Array = Bills_Amount;

    string* Bills_Names = new string[14];
    string* Rechnung_Heisse = new string[14];
    *(Bills_Names) = "Shopping"; 
    *(Bills_Names+1) = "Fuel";
    *(Bills_Names+2) = "Car insurance";
    *(Bills_Names+3) = "Home insurance";
    *(Bills_Names+4) = "Water bill";
    *(Bills_Names+5) = "Gas bill";
    *(Bills_Names+6) = "Electricity bill";
    *(Bills_Names+7) = "Mortgage";
    *(Bills_Names+8) = "Rent";
    *(Bills_Names+9) = "Council rate";
    *(Bills_Names+10) = "Home wifi";
    *(Bills_Names+11) = "Mobile data";
    *(Bills_Names+12) = "Gym-membership";
    *(Bills_Names+13) = "Ausgehen";

    *(Rechnung_Heisse) = "Einkaufen"; 
    *(Rechnung_Heisse+1) = "Benzin";
    *(Rechnung_Heisse+2) = "Auto-versicherung";
    *(Rechnung_Heisse+3) = "Haus-versicherung";
    *(Rechnung_Heisse+4) = "Wasser-rechnung";
    *(Rechnung_Heisse+5) = "Gas-rechnung";
    *(Rechnung_Heisse+6) = "Elektrizität-rechnung";
    *(Rechnung_Heisse+7) = "Pfand";
    *(Rechnung_Heisse+8) = "Miete";
    *(Rechnung_Heisse+9) = "Rat Preis";
    *(Rechnung_Heisse+10) = "Heim Internet";
    *(Rechnung_Heisse+11) = "Handy Internet";
    *(Rechnung_Heisse+12) = "Fitnesstudio-mitgliedschaft";
    *(Rechnung_Heisse+13) = "Ausgehen";

    Rechnung_heisse = Rechnung_Heisse;
    Bills_names = Bills_Names;
    return annual_expenditure;
}

double* Australian_Tax_Calculator___2021_2022(double user_income){
    double tax_percentage = 0;
    double income_tax;
    double user_savings;
    if (user_income < 1001 && user_income > 0){
        user_income *= (40*48);
    }
    if( user_income >= 0 && user_income < 18200){
        income_tax = 0;
        user_savings = user_income;
    }
    else if ( user_income >= 18200 && user_income < 45000){ 
        income_tax = ( user_income - 18200)*(0.19);
    }
    else if ( user_income >= 45000 && user_income < 120000){
        income_tax = ( user_income - 45000)*(0.325) + 5092;
    }
    else if (user_income >= 120000 && user_income < 180000){
        income_tax = (user_income - 120000)*(0.37) + 29467;
    } 
    else if ( user_income >= 180000){
        income_tax = (user_income - 180000)*(0.45) + 51667;
    }  
    user_savings = user_income - income_tax;
    tax_percentage = 100*(income_tax / user_income);
    double* Tax_array = new double[4];
    *(Tax_array) = tax_percentage;
    *(Tax_array+1) = income_tax;
    *(Tax_array+2) = user_savings;
    *(Tax_array+3) = user_income;
    return Tax_array;
}

void Calculate(double salary, double Annual_Expenditure ,double* Bills_Array, double* Tax_array, string* Bills_Names){
    cout << "\n\n";
    for (int k = 0; k < 14; k++){
        cout << " $"<<fixed<<setprecision(0)<<*(Bills_Array+k)<<"  "<<*(Bills_Names+k) <<endl;
    }
    cout << "\n\n";
    if (salary <= 1000)
        cout <<" Your Salary is: $"<<fixed<<setprecision(2)<< *(Tax_array+3)<<"\n\n";
    cout <<" Your taxable income is $"<<fixed<<setprecision(2)<< *(Tax_array+1);
    *(Tax_array+2) = *(Tax_array+3) - *(Tax_array+1);
    *(Tax_array) = 100*(*(Tax_array+1) / *(Tax_array+3));
    cout <<"   which is: "<<fixed<<setprecision(0)<<*(Tax_array)<<"% of your total salary\n\n";
    cout <<"  - annual income will be: $"<<fixed<<setprecision(0)<< *(Tax_array+2)<<"\n\n";
    cout <<"  - annual expediture will be: $"<<fixed<<setprecision(0)<<(Annual_Expenditure)<<"\n\n";
    cout <<"  - annual savings will be: $"<<fixed<<setprecision(0)<< (*(Tax_array+2)-(Annual_Expenditure));
    cout<<"\n\n";
}

void Bulking_Cost(){
    double chicken = 15; // 75
    double Spanakopita = 7; // 35
    double Pide = 11; // 55
    double total = chicken*2 + Spanakopita*3 + Pide*5;
    cout << " Weekly shopping must be $"<<fixed<<setprecision(0)<<total<<"\n\n";
}

void Melbourne(){

}

void Brisbane(){

}

int main(){
    // ofstream file_salary;
    // file_salary.open("data.txt");
    // file_salary <<;
    double salary = 0;
    double salary_reset = 0;
    cout <<"\n Enter salary: $";
    cin >> salary;
    if (cin.fail()){
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        salary = 0;
    }
    salary_reset = salary;
    cout<<"\n";
    double* Tax_array = Australian_Tax_Calculator___2021_2022(salary);
    double* Bills_Array;
    string* Bills_Names;  
    string* Rechnung_Heisse;      
    double* Bills_Array_2;
    double* Bills_Array_3;
    double* Bills_Array_4;
    double Annual_Expenditure = Bills(100,0,200,540,280,350,500,1250,0,190,110,30,11,30,(Bills_Array),(Bills_Names),(Rechnung_Heisse));
    double Annual_Expenditure_2 = Bills(100,3500,300,380,350,500,400,2000,0,190,110,30,11,50,(Bills_Array_2),(Bills_Names),(Rechnung_Heisse));
    double Annual_Expenditure_3 = Bills(200,3500,300,380,350,500,400,3000,0,190,110,40,11,50,(Bills_Array_3),(Bills_Names),(Rechnung_Heisse));
    double Annual_Expenditure_4 = Bills(300,3500,300,380,350,500,400,4000,0,190,110,40,11,150,(Bills_Array_4),(Bills_Names),(Rechnung_Heisse));
    Calculate(salary, Annual_Expenditure , Bills_Array, Tax_array, (Bills_Names));
    salary = salary_reset;
    Calculate(salary, Annual_Expenditure_2 , Bills_Array_2, Tax_array, (Bills_Names));
    salary = salary_reset;
    Calculate(salary, Annual_Expenditure_3 , Bills_Array_3, Tax_array, (Bills_Names));
    salary = salary_reset;
    Calculate(salary, Annual_Expenditure_4 , Bills_Array_4, Tax_array, (Rechnung_Heisse));

    Bulking_Cost();
    delete[] Tax_array;
    delete[] Bills_Names;
    delete[] Rechnung_Heisse;
    delete[] Bills_Array;
    delete[] Bills_Array_2;
    delete[] Bills_Array_3;
    delete[] Bills_Array_4;
    return 0;
}







