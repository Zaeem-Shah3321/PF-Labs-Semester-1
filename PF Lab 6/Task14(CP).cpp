#include <iostream>
using namespace std;
string calculateCost (float , string , int);
main (){
    float budget;
    cout << "Enter the budget: ";
    cin >> budget;
    string category;
    cout << "Enter the category (VIP/Normal): ";
    cin >> category;
    int people;
    cout << "Enter the number of people in the group: ";
    cin >> people;
    cout << calculateCost (budget , category , people);
}
string calculateCost (float budget, string category, int numPeople)
{
    string ans;
    float cost;
    float final_cost;
    if (numPeople >=1 && numPeople <=4)
    {
        budget = budget - (budget * 0.75);
    }
    if (numPeople >= 5 && numPeople <= 9)
    {
        budget = budget - (budget * 0.60);
    }
    if (numPeople >= 10 && numPeople <= 24)
    {
        budget = budget - (budget * 0.50);
    }
    if (numPeople >= 25 && numPeople <= 49)
    {
        budget = budget - (budget * 0.40);
    }
    if (numPeople > 50)
    {
        budget = budget - (budget * 0.25);
    }
    if (category == "VIP")
    {
        cost = 499.99 * numPeople;
    }
    else
    {
        cost = 249.99 * numPeople;
    }
    final_cost = (budget - cost) + 0.000005 ;
    if (final_cost > 0.0)
    {
        ans = "Yes! You have " + to_string (final_cost) + " leva left."; 
        return ans;
    }
    else 
    {
        ans = "Not enough money! You need " + to_string (-final_cost) + " leva.";
        return ans;
    }
}
