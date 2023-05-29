#include <iostream>
//#include <vector>

using namespace std;

// Function to count the number of divisors of a given number
int countDivisors(int num) {
    int count = 0;
    for (int i = 1; i *i <= num; i++) {
        if (num % i == 0) {
            // Counting both divisors i and num/i
            if (i * i == num)
                count++;
            else
                count += 2;
        }
    }
    return count;
}

// Function to find the frequency of numbers between l and r with exactly k divisors
int findFrequency(int l, int r, int k) {
    int frequency = 0;
    for (int i = l; i <= r; i++) {
        int divisors = countDivisors(i);
        if (divisors == k)
            frequency++;
    }
    return frequency;
}

int main() {
    int T;
    cin >> T;

    for (int testCase = 1; testCase <= T; testCase++) {
        int l, r, k;
        cin >> l >> r >> k;

        int frequency = findFrequency(l, r, k);

        cout << "Case " << testCase << ": " << frequency << endl;
    }

    return 0;
}

