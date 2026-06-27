#include <iostream>
using namespace std;

int main()
{
    char ans;
    int score = 0;

    cout << "1. What is the capital of UP?" << endl;
    cout << "\nA. Lucknow\nB. Allahabad\nC. Jaunpur\nD. Kamalnagar\n";
    cout << "Ans : ";
    cin >> ans;
    if (ans == 'A' || ans == 'a')
    {
        score++;
    }
    cout << "2. What is the capital of India?" << endl;
    cout << "\nA. Lucknow\nB. Allahabad\nC. NewDelhi\nD. Kamalnagar\n";
    cout << "Ans : ";
    cin >> ans;
    if (ans == 'c' || ans == 'C')
    {
        score++;
    }
    cout << "3. Who is the founder of Telegram?" << endl;
    cout << "\nA. Pavel Durov\nB. Mark Zuckerberg\nC. Aman\nD. Michael jai white\n";
    cout << "Ans : ";
    cin >> ans;
    if (ans == 'A' || ans == 'a')
    {
        score++;
    }
    cout << "4. What is the chemical formula of water?" << endl;
    cout << "\nA. CaCl2\nB. SiO2\nC. H2O\nD. P2O5\n";
    cout << "Ans : ";
    cin >> ans;
    if (ans == 'C' || ans == 'c')
    {
        score++;
    }
    cout << "5. What is the capital of Andhra Pradesh?" << endl;
    cout << "\nA. Lucknow\nB. Amrawati\nC. Jaipur\nD. Kamalnagar\n";
    cout << "Ans : ";
    cin >> ans;
    if (ans == 'B' || ans == 'b')
    {
        score++;
    }
    cout << "6. Who is the founder of facebook?" << endl;
    cout << "\nA. Mark Zuckerberg\nB. Tim Cook \nC. Sunder Pichhai\nD. Elon Musk\n";
    cout << "Ans : ";
    cin >> ans;
    if (ans == 'A' || ans == 'a')
    {
        score++;
    }
    cout << "7. What is the capital of Rajasthan?" << endl;
    cout << "\nA. Lucknow\nB. Allahabad\nC. Jaipur\nD. Kamalnagar\n";
    cout << "Ans : ";
    cin >> ans;
    if (ans == 'C' || ans == 'c')
    {
        score++;
    }

    cout << "*** Result ***\n";
    cout << "Your score: " << score << "out of 7" << endl;

    if (score == 7)
    {
        cout << "Congraulation! You got all correct" << endl;
    }
    else if (score <= 5)
    {
        cout << "Good Job!" << score << endl;
    }
    else
    {
        cout << "Keep Practicing.";
    }
    return 0;
}