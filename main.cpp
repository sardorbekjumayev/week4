#include <iostream>
#include <random>

using namespace std;


void printNumber(string text, int number) {
    cout << text << number << endl;
}

void printText(string text) {
    cout << text << endl;
}


//Project 1
// int main() {
//  int n;
//     cout << "enter number: ";
//     cin >> n;

//     if (n > 0){
//         cout << "Number is positive"<< endl;
//     }
//     else{
//         cout << "Number is negative"<<endl;
//     }

//     retrun 0;
// }


//Project 2
// int main(){
//     int n;
//     cout << "enter number: ";
//     cin >> n;

//     if (n % 2 == 0)
//     {
//         cout << "Even number" << endl;
//     }else
//     {
//         cout << "Odd number" << endl;
//     }

//     return 0;

// }


//Project 3
// int main(){
//
//     int num1, num2;
//
//     cout << "Enter first number: ";
//     cin >> num1;
//
//     cout << "Enter second number: ";
//     cin >> num2;
//
//     if (num1 > num2)
//     {
//         cout << "max number is " << num1 << endl;
//     }
//     else
//     {
//         cout << "max number is " << num2 << endl;
//     }
//
//     return 0;
// }

//Project 4
// int main() {
//
//     int num1, num2, num3;
//
//     cout << "Enter numbers: ";
//     cin >> num1 >> num2 >> num3;
//
//     if (num1 > num2 and num1 > num3) {
//         printNumber("largest number is ", num1);
//     }else if (num2 > num1 and num2 > num3) {
//         printNumber("largest number is ", num2);
//     }else {
//         printNumber("largest number is ", num3);
//     }
//
//     return 0;
// }


//Project 5

// int main() {
//
//     int year;
//
//     printText("Enter year: ");
//
//     cin >> year;
//
//     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//         printText("This is a leap year.");
//     }else {
//         printText("This is not a leap year.");
//     }
//
//     return 0;
//
// }

//Project 6


// int main() {
//     int mark;
//
//     printText("Enter the mark: ");
//     cin >> mark;
//
//     if (mark >= 50) {
//         printText("Pass");
//     }else {
//         printText("Fail");
//     }
//
//     return 0;
// }

//Project 7

// int main() {
//
//
//     int num;
//
//     printText("Enter a number: ");
//     cin >> num;
//
//     if (num == 0) {
//         printText("Zero");
//     }else if(num >=1) {
//         printText("positive number");
//     }else {
//         printText("negative number");
//     }
//
//     return 0;
// }

//Project 8

// int main() {
//
//     int num;
//
//     printText("Enter a number: ");
//     cin >> num;
//
//     (num > 0) ? cout << num << endl : cout << -num << endl;
//
//     return 0;
// }

//Project 12

// int main() {
//     int mark;
//
//     printText("Enter the mark: ");
//     cin >> mark;
//
//     if (mark >= 90 and mark <= 100) {
//         printText("A");
//     }else if (mark >= 80 and mark <= 89) {
//         printText("B");
//     }else if (mark >= 70 and mark <= 79) {
//         printText("C");
//     }else if (mark >= 60 and mark <= 69) {
//         printText("D");
//     }else {
//         printText("F");
//     }
//
//     return 0;
// }

//Projecct 16
//
// int main() {
//     int num;
//
//     printText("Enter a number: ");
//     cin >> num;
//
//     if (num % 3 == 0 and num % 5 == 0) {
//         printText("Divisible by both");
//     }else {
//         printText("Not Divisible by both");
//     }
//
//     return 0;
// }

int main() {

    int num1, num2, remain;

    printText("Enter first number: ");
    cin >> num1;

    printText("Enter second number: ");
    cin >> num2;

    remain = num1 % num2;

    (num1 % num2 != 0) ? printNumber("Remainder is ", remain) : printText("Remainder is Zero");

    return 0;
}