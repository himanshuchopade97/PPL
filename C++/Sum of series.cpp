#include<iostream>
using namespace std;

class SumSeries 
{
    private:
        int n;
        float sum;
    public:        
        SumSeries()
        {
            n = 0;
            sum = 0;
        }
        SumSeries(int num) 
        {
            n = num;
            sum = 0;
        }
        SumSeries(int arr[], int num) 
        {
            n = num;
            sum = 0;
            for (int i = 0; i < n; ++i) 
            {
                sum += arr[i];
            }
        }

        // Function to display the sum of the series
        void displaySum() {
            cout << "Sum of the series: " << sum << endl;
        }
};

int main() {
    int n, num = 0;
    cout << "Enter the number of elements in the series: ";
    cin >> n;
    int series[100];
    for (int i = 0; i < n; i++) {
        num = num * 10 + 9; 
        series[i] = num;
    }

    SumSeries sumObject1; 
    SumSeries sumObject2(n); 
    SumSeries sumObject3(series, n); 

    sumObject3.displaySum();

    return 0;
}
