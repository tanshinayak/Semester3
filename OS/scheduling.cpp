#include <iostream>
#include <cstdlib>
using namespace std;

void FCFS()
{
    int n;
    double avgwt = 0, avgtat = 0;
    
    cout << "\nEnter total number of processes:";
    cin >> n;
    
    int bt[n], wt[n], tat[n];
    
    cout << "\nEnter Process Burst Time\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P[" << i + 1 << "]:";
        cin >> bt[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        wt[i] = 0;
        for (int j = 0; j < i; j++)
            wt[i] += bt[j];
    }
    
    cout << "\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";
    for (int i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
        avgwt += wt[i];
        avgtat += tat[i];
        cout << "\nP[" << i + 1 << "]"
             << "\t\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i];
    }
    
    avgwt /= n;
    avgtat /= n;
    cout << "\n\nAverage Waiting Time:" << avgwt;
    cout << "\nAverage Turnaround Time:" << avgtat;
}

void priority()
{
    int n;
    double avgwt = 0, avgtat = 0;
    cout << "\nEnter total number of processes:";
    cin >> n;
    int pr[n], bt[n], wt[n], tat[n];
    cout << "\nEnter Process Burst Time\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P[" << i + 1 << "]:";
        cin >> bt[i];
    }
    cout << "\nEnter Priority\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P[" << i + 1 << "]:";
        cin >> pr[i];
    }
}

int main()
{
    while (true)
    {
        cout << "\nChoose the scheduling method :\n";
        cout << "0.Exit\n";
        cout << "1.FCFS\n";
        cout << "2.Priority\n";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 0:
            exit(0);
        case 1:
            FCFS();
            break;
        case 2:
            priority();
            break;
        default:
            cout << "\n Invalid Choice";
        }
    }
    return 0;
}