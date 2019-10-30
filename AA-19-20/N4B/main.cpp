#include <iostream>

#define MIN_COST 100
#define COST_PER_HOUR 40

using namespace std;

int main() {
    int stuffCost, totalHours, totalCost;
    cin >> stuffCost >> totalHours;
    totalCost = stuffCost + totalHours * COST_PER_HOUR;
    if (totalCost < MIN_COST) {
        totalCost = MIN_COST;
    }
    cout << totalCost;
    return 0;
}