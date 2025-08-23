#include <iostream>
using namespace std;

void knapsack(int n, float weight[], float profit[], float capacity)
{
    float x[20], tp = 0;
    float u = capacity;

    for (int i = 0; i < n; i++)
        x[i] = 0.0;

    for (int i = 0; i < n; i++)
    {
        if (weight[i] <= u)
        {
            x[i] = 1.0;
            tp += profit[i];
            u -= weight[i];
        }
        else
        {
            x[i] = u / weight[i];
            tp += x[i] * profit[i];
            break;
        }
    }

    cout << "\nThe result vector is:\n";
    for (int i = 0; i < n; i++)
        cout << x[i] << "\t";

    cout << "\nMaximum profit is: " << tp << endl;
}

int main()
{
    float weight[20], profit[20], capacity;
    int num;
    float ratio[20], temp;

    cout << "Enter the number of objects: ";
    cin >> num;

    cout << "\nEnter the weights and profits of each object:\n";
    for (int i = 0; i < num; i++)
    {
        cin >> weight[i] >> profit[i];
    }

    cout << "\nEnter the capacity of the knapsack: ";
    cin >> capacity;

    for (int i = 0; i < num; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (ratio[i] < ratio[j])
            {

                temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;

                temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;
            }
        }
    }

    knapsack(num, weight, profit, capacity);
    return 0;
}
