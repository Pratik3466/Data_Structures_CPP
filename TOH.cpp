#include <bits/stdc++.h>
#include<math.h>
using namespace std;

// Complete the solve function below.
void solve(double meal_cost, double tip_percent, double tax_percent) {
 double tip,tax;
 tip = (meal_cost*(tip_percent/100));
  tax = (meal_cost*(tax_percent/100));
double total= meal_cost+tip+tax;
int n=(int)total;
if(abs(total-n)>=0.5)
{
total=(int)n;}
else{
total=(int)total;
}
cout<<total;
}

int main()
{
    double meal_cost;
    cin >> meal_cost;

    double tip_percent;
    cin >> tip_percent;

    double tax_percent;
    cin >> tax_percent;

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
