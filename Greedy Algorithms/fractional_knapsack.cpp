#include <iostream>
#include <conio.h>
#include <bits/stdc++.h>
using namespace std;

struct Item
{
    int value, weight;

    Item(int value, int weight)
    {
        this->value = value;
        this->weight = weight;
    }
};

bool compare_ratio(struct Item a, struct Item b)
{
    double r1 = (double)a.value / (double)a.weight;
    double r2 = (double)b.value / (double)b.weight;
    return r1 > r2;
}

double fractional_knapsack(int weight, struct Item arr[], int n)
{
    sort(arr, arr + n, compare_ratio);
    int curr_weight = 0;
    double final_value = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (curr_weight + arr[i].weight < weight)
        {
            curr_weight += arr[i].weight;
            final_value += arr[i].value;
        }
        else
        {
            int remain = weight - curr_weight;
            final_value += arr[i].value * ((double)remain / (double)arr[i].weight);
            break;
        }
    }
    return final_value;
}

int main()
{
    int weight = 60;
    Item arr[] = {{280, 40}, {100, 10}, {120, 20}, {120, 24}};
    
    
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum Profit is " << fractional_knapsack(weight, arr, n);
}