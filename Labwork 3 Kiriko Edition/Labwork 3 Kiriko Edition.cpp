// Labwork 3 Kiriko Edition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>

using namespace std;
int main() {
    //Making a switch case wrapped in a loop as the menu for tasks, instead of whatever horrible beast i had last time.
    //Should hopefully cause less headaches for everyone involved... =w=
    int control = 1;
    while (control > 0) {
        cout << endl << "Task control menu. \n Input 0 to stop program. \n Input numbers 1-3 to run the related task.\n";
        cin >> control;
        //Varible a and s as user input for task 1
        float a, s;
        switch (control) {
        case 0:
            cout << "Ending program\n Goodnight! >w<\n";
            break;
        case 1:
            /*1. Створити програму згідно свого варіанта. Виконати завдання двома способами:
            А) з використанням скороченої форми оператора розгалуження if
            Б) з використанням повної форми оператора розгалуження if ... else або за
            необхідностівкладення if...else if*/
            //7.Задані цілі числа a,s. Обчислити:   
            cout << "Running Task 1!\n";
            cout << "Input A and S:\n";
            cin >> a >> s;
            // Doing the assignment with just the if checks
            if (s<0) {
                cout << "Branch 1 output: " << (2*s)+(a*pow(s, 2)) << endl;
            }
            if (s > 0) {
                cout << "Branch 3 output: " << 12 - (s / (2 * a - 4)) << endl;
            }
            //This function gives out an error if input of a is less than 15.
            if (s == 0) {
                cout << "Branch 2 output: " << sqrt(s + a - 15) + (8 * s * a) << endl;
            }
            //Now doing if else if checks for more efficient code.
            if (s < 0) {
                cout << "Branch 1 mirrored output: " << (2 * s) + (a * pow(s, 2)) << endl;
            } 
            else if (s > 0) {
                cout << "Branch 2 mirrored output: " << 12 - (s / (2 * a - 4)) << endl;
            } 
            else cout << "Branch 3 mirrored output: " << sqrt(s + a - 15) + (8 * s * a) << endl;
            break;


        case 2:
            /*Створити програму згідно свого варіанта. Використати if ... else або за
            необхідності вкладення if...else if*/
            /*7. Відомо радіус круга та довжину сторони квадрата. Визначити, чи поміститься круг у
            квадраті, порівнявши їх площі.*/
            cout << "Runnung Task 2!\n";
            float rad;
            float side;
            cout << "Enter the radius of the circle: \n";
            cin >> rad;
            cout << "Enter the length of the side of the square: \n";
            cin >> side;
            if ((rad * 2) <= side) {
                cout << "It fits! Yayy! ^w^\n";

            }
            else
                cout << "No! It wont fit... >n<\n";
            break;
        case 3:
            /*3. Створити програму згідно свого варіанта. Використати конструкцію switch...case*/
            /*7. Написати програму, яка в залежності від порядкового номера кольору у спектрі (1,2,...7)
            виводить його назву (червоний, помаранчевий, жовтий, зелений, блакитний, синій, фіолетовий)*/
            cout << "Running Task 3\n";
            cout << "Enter number from 1-7 to get a pretty color!\n";
            int pretty;
            cin >> pretty;
            switch (pretty) {
            case 1:
                cout << "Violet!\n";
                break;
            case 2:
                cout << "Blue!\n";
                break;
            case 3:
                cout << "Light blue...?! ;w;\n";
                break;
            case 4:
                cout << "Green!!!\n";
                break;
            case 5:
                cout << "Yellowwwwwwwwwww\n";
                break;
            case 6:
                cout << "Orange! Like the fruit!\n";
                break;
            case 7:
                cout << "Red! The prettiest color of them all!\n";
                break;
            default:
                cout << "Thats not the right number, silly!\n";
                break;
            }
            break;
        default:
            cout << "Wrong value entered, try again!\n";
            break;
        }
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
