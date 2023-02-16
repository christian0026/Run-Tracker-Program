#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <stdio.h>
#include <conio.h>

using namespace std;

void menu();
void info();
void plan();
void plan1();
void plan2();
void plan3();
void exitProgram();

//code for menu
void menu()
{
    double dailyGoal, weeklyGoal, totalDistance = 0, height, weight, distance, time, dailytimeGoal;
    int age, week = 0, day = 0, mode, bar1 = 177, bar2 = 219, choice, pulse;
    string firstName, lastName, gender, trainingPlan, trainDistance, trainPace, goalChoice, specificPlan, quit;

    system ("cls");

    cout << "\n\n\n\n\n\n\n\n";
    cout << "\n\n\n\t\t\t\t\t\t\t\t\tLoading.....";
    cout << "\n\n\t\t\t\t\t\t\t\t\t";
 

    for (int i  = 0; i < 25; i++)
    cout << (char)bar1;
    cout << "\r";
    cout << "\t\t\t\t\t\t\t\t\t";
    for (int i  = 0; i < 25; i++)
    {
        cout << (char)bar2;
        Sleep(150);
    }

    system ("cls");

    cout << "\n\n\n\n\n\n\n\n";
    cout << setw(120) << "===========================================================\n";
    cout << setw(95) << "RUN TRACKER\n";
    cout << setw(120) << "===========================================================\n";
    cout << setw(117) << "Created by Gems | Xavier | Ailene | Irus | Christian\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n\n\n";
    cout << setw(115) << "================================================\n";
    cout << setw (103) << "Enter [1] to proceed\n";
    cout << setw(100) << "Enter [0] to Exit\n";
    cout << setw(115) << "================================================\n";
    cout << "\n\n";
    cout << setw(100) << "Please enter mode: ";
    cin >> mode;

    system ("cls");

    if (mode == 0)
    {
        exitProgram();
    }

    system ("cls");

    if (mode == 1)
    {
        mode == 1;
        info();
    }
    
    
}

//code for personal information
void info()
{
    double dailyGoal, weeklyGoal, totalDistance = 0, height, weight, distance, time, dailytimeGoal;
    int age, week = 0, day = 0, mode, bar1 = 177, bar2 = 219, choice, pulse;
    string firstName, lastName, gender, trainingPlan, trainDistance, trainPace, goalChoice, specificPlan, quit;

    cout << "\n\n\n";
    cout << setw(120) << "===========================================================\n";
    cout << setw(95) << "RUN TRACKER\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n";
    cout << setw(101) << "==Personal Information==" <<endl;
    cout << "\n\n";
    cout << setw(75) << "= FIRST NAME: ";
    cin >> firstName;
    cout << setw(74) << "= LAST NAME: ";
    cin >> lastName;
    cout << setw(103) << "= GENDER (Male/Female/Prefer not to say): ";
    cin >> gender;
    cout << setw(68) << "= AGE: ";
    cin >> age;
    cout << setw (75) << "= HEIGHT(cm): ";
    cin >> height;
    cout << setw (76) << "= WEIGHT (kg): ";
    cin >> weight;
    cout << "\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n\n\n";
    cout << setw(120) << "===========================================================\n";
    cout << setw(103) << "Enter [1] to choose a plan\n";
    cout << setw(94) << "Enter [0] to exit\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n\n";
    cout << setw(100) << "Please enter a number: ";
    cin >> trainingPlan;

    system ("cls");

    if (trainingPlan == "0")
    {
        exitProgram();
    }

    system ("cls");

    if (trainingPlan == "1")
    {
        trainingPlan == "1";
        plan();
    }
    
    
}

//code for choosing a specific plan
void plan()
{
    double dailyGoal, weeklyGoal, totalDistance = 0, height, weight, distance, time, dailytimeGoal;
    int age, week = 0, day = 0, mode, bar1 = 177, bar2 = 219, choice, pulse;
    string firstName, lastName, gender, trainingPlan, trainDistance, trainPace, goalChoice, specificPlan, quit;

    cout << "\n\n\n";
    cout << setw(120) << "===========================================================\n";
    cout << setw(95) << "RUN TRACKER\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n";
    cout << setw(101) << "==SELECT A TRAINING PLAN==" <<endl;
    cout << "\n\n";
    cout << setw(83) << "1. RUN TO LOSE WEIGHT\n";
    cout << setw(99) << "2. RACE PLAN / FULL MARATHON TRAINING\n";
    cout << setw(80) << "3. CREATE YOUR OWN\n";
    cout << setw(80) << "4. Go back to menu\n";
    cout << setw(82) << "5. Exit the program \n";
    cout << "\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n\n\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n\n";
    cout << setw(95) << "Your Choice: ";
    cin >> specificPlan;

    system ("cls");

    if (specificPlan == "1")
    {
        specificPlan == "1";
        plan1();
    }

    else if (specificPlan == "2")
    {
        specificPlan == "2";
        plan2();
    }
    
    else if (specificPlan == "3")
    {
        specificPlan == "3";
        plan3();
    }

    else if (specificPlan == "4")
    {
        specificPlan == "4";
        menu();
    }

    else if (specificPlan == "5")
    {
        specificPlan == "5";
        exitProgram();
    }

    else
    {
        cout << "\n\n\n\n\n\n\n\n";
        cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
        cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
        getch();
    }
    

}

//code for plan 1
void plan1()
{
    double dailyGoal, weeklyGoal, totalDistance = 0, height, weight, distance, time, dailytimeGoal;
    int age, week = 0, day = 0, mode, bar1 = 177, bar2 = 219, choice, pulse;
    string firstName, lastName, gender, trainingPlan, trainDistance, trainPace, goalChoice, specificPlan, quit;

    cout << "\n\n\n";
    cout << setw(120) << "===========================================================\n";
    cout << setw(95) << "RUN TRACKER\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n";
    cout << setw(108) << "==YOU SELECTED RUN TO LOSE WEIGHT==" <<endl;
    cout << "\n\n";
    cout << setw(117) << "DAILY GOAL: You must reach atleast 2km-5km run every day." <<endl;
    cout << setw(116) << "WEEKLY GOAL: You must reach atleast 15km run every week." <<endl;
    cout << setw(105) << "Time Rating: 30:00 minutes below = Excellent\n";
    cout << setw(100) << "Time Rating: 40:00 minutes above = Fair\n";
    cout << "\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n\n";
    dailyGoal = 2;
    weeklyGoal = 15;
    dailytimeGoal = 40;

    for (int i = 1; i <= 7; i++)
    {
      cout << setw(66) << "= Day " << i <<endl;
      cout << setw(108) << "Enter today's distance ran in km(or x to quit): ";
      cin >> quit;
      if (quit == "x")
      {
        break;
      }
      cout << setw(79) << "Time (in minutes): ";
      cin >> time;
      cout << setw(83) << "Enter your pulse rate: ";
      cin >> pulse;
      cout << "\n\n";
      cout << setw(120) << "===========================================================\n";
      cout << setw(98) << "==DAILY RESULTS==" <<endl;
      cout << "\n\n";     
      distance = stod(quit);
      if (distance >= dailyGoal)
      {
        cout << setw(107) << "= Congratulations! You completed today's goal!\n";
        cout << "\n";
      }
      else
      {
        cout << setw(115) << "= You didn't reach the daily goal, Try again tommorow.\n";
        cout << "\n";
      }
      //Time Computation
      if (time <= 40)
      {
        cout << setw(85) << "= Time Rating: Excellent\n"; 
        cout << "\n";
      }
      else if (time >= 41)
      {
      cout << setw(80) << "= Time Rating: Good\n";
      cout << "\n";
      }
      //Pulse computation
      if (pulse < 60 || pulse > 160)
      {
      cout << setw(137) << "= Your pulse rate is not in the normal range. Please consult to your doctor.\n";
      cout << "\n";
      cout << setw(120) << "===========================================================\n";
      cout << "\n";
      }
      else
      {
      cout << setw(102) << "= Your Pulse Rate is in the normal range.\n";
      cout << "\n";
      cout << setw(120) << "===========================================================\n";
      cout << "\n";
      }
      totalDistance += distance;
      day++;
      if (day == 7)
      {
      if (totalDistance >= weeklyGoal)
      {
        cout << setw(107) << "= Congratulations! Weekly goal is complete!\n";
      }
      else
      {
        cout << setw(107) << "= You didn't reach the weekly goal, Try again next week.\n";
      }
      
      }

    }

    system ("cls");

    if (totalDistance >= weeklyGoal)
    {
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(98) << "WEEKLY RESULT\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n";
        cout << setw(113) << "==CONGRATULATIONS! WEEKLY GOAL IS COMPLETE!==" <<endl;
        cout << "\n\n";
        cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << " km\n";
        cout << setw(80) << "= Rating: Excellent\n";
        cout << "\n\n"; 
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(107) << "Enter [1] to perform another run\n";
        cout << setw(107) << "Enter [2] to select another plan\n";
        cout << setw(108) << "Enter [3] to go back to main menu\n";
        cout << setw(104) << "Enter [4] to exit the program\n";

        cout << setw(120) << "===========================================================\n";
        cout << "\n\n";
        cout << setw(100) << "Please enter a number: ";
        cin >> choice;

        system ("cls");

        switch (choice)
        {
            case 1:
            plan1();
            break;

            case 2:
            plan();
            break;

            case 3:
            menu();
            break;
                        
            case 4:
            exitProgram();
            break;

            default:
            cout << "\n\n\n\n\n\n\n\n";
            cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
            cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
            getch();

        }

                      
    }
    else
    {
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(98) << "WEEKLY RESULT\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n";
        cout << setw(119) << "==YOU DIDN'T REACH THE WEEKLY GOAL, TRY AGAIN NEXT WEEEK.==" <<endl;
        cout << "\n\n";
        cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << "km\n";
        cout << setw(75) << "= Rating: Good\n";
        cout << "\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(107) << "Enter [1] to perform another run\n";
        cout << setw(107) << "Enter [2] to select another plan\n";
        cout << setw(108) << "Enter [3] to go back to main menu\n";
        cout << setw(104) << "Enter [4] to exit the program\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n";
        cout << setw(100) << "Please enter a number: ";
        cin >> choice;

        system ("cls");

        switch (choice)
        {
            case 1:
            plan1();
            break;

            case 2:
            plan();
            break;

            case 3:
            menu();
            break;

            case 4:
            exitProgram();
            break;

            default:
            cout << "\n\n\n\n\n\n\n\n";
            cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
            cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
            getch();

                        
        }
    }
}

//code for plan 2
void plan2()
{
    double dailyGoal, weeklyGoal, totalDistance = 0, height, weight, distance, time, dailytimeGoal;
    int age, week = 0, day = 0, mode, bar1 = 177, bar2 = 219, choice, pulse;
    string firstName, lastName, gender, trainingPlan, trainDistance, trainPace, goalChoice, specificPlan, quit;

    cout << "\n\n\n";
    cout << setw(120) << "===========================================================\n";
    cout << setw(95) << "RUN TRACKER\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n";
    cout << setw(111) << "==YOU SELECTED FULL MARATHON TRAINING==" <<endl;
    cout << "\n\n";
    cout << setw(109) << "DAILY GOAL: You must reach 18-20km run every day." <<endl;
    cout << setw(120) << "WEEKLY GOAL: You must reach atleast 80-100km run every week." <<endl;
    cout << setw(99) << "Time Rating: 2 hours below = Excellent\n";
    cout << setw(95) << "Time Rating: 13 hours above = Fair\n";
    cout << "\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n\n";
    dailyGoal = 18;
    weeklyGoal = 80;
    dailytimeGoal = 40;

    for (int i = 1; i <= 7; i++)
    {
        cout << setw(66) << "= Day " << i <<endl;
        cout << setw(108) << "Enter today's distance ran in km(or x to quit): ";
        cin >> quit;
        if (quit == "x")
        {
            break;
        }
        cout << setw(77) << "Time (in hours): ";
        cin >> time;
        cout << setw(83) << "Enter your pulse rate: ";
        cin >> pulse;
        cout << "\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(98) << "==DAILY RESULTS==" <<endl;
        cout << "\n\n";     
        distance = stod(quit);
        if (distance >= dailyGoal)
        {
            cout << setw(107) << "= Congratulations! You completed today's goal!\n";
            cout << "\n";
        }
        else
        {
            cout << setw(115) << "= You didn't reach the daily goal, Try again tommorow.\n";
            cout << "\n";
        }
        //Time Computation
        if (time <= 12)
        {
            cout << setw(85) << "= Time Rating: Excellent\n"; 
            cout << "\n";
        }
        else if (time >= 13)
        {
            cout << setw(80) << "= Time Rating: Good\n";
            cout << "\n";
        }
        //Pulse computation
        if (pulse < 60 || pulse > 160)
        {
            cout << setw(137) << "= Your pulse rate is not in the normal range. Please consult to your doctor.\n";
            cout << "\n";
            cout << setw(120) << "===========================================================\n";
            cout << "\n";
        }
        else
        {
            cout << setw(102) << "= Your Pulse Rate is in the normal range.\n";
            cout << "\n";
            cout << setw(120) << "===========================================================\n";
            cout << "\n";
        }
        totalDistance += distance;
        day++;
        if (day == 7)
        {
            if (totalDistance >= weeklyGoal)
            {
                cout << setw(107) << "= Congratulations! Weekly goal is complete!\n";
            }
            else
            {
                cout << setw(107) << "= You didn't reach the weekly goal, Try again next week.\n";
            }

        }

    }
    
    system ("cls");

    if (totalDistance >= weeklyGoal)
    {
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(98) << "WEEKLY RESULT\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n";
        cout << setw(113) << "==CONGRATULATIONS! WEEKLY GOAL IS COMPLETE!==" <<endl;
        cout << "\n\n";
        cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << " km\n";
        cout << setw(80) << "= Rating: Excellent\n";
        cout << "\n\n"; 
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(107) << "Enter [1] to perform another run\n";
        cout << setw(107) << "Enter [2] to select another plan\n";
        cout << setw(108) << "Enter [3] to go back to main menu\n";
        cout << setw(104) << "Enter [4] to exit the program\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n";
        cout << setw(100) << "Please enter a number: ";
        cin >> choice;

        system ("cls");

        switch (choice)
        {
            case 1:
            plan1();
            break;

            case 2:
            plan();
            break;

            case 3:
            menu();
            break;
                        
            case 4:
            exitProgram();
            break;

            default:
            cout << "\n\n\n\n\n\n\n\n";
            cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
            cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
            getch();
        }
                      
    }
    else
    {
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(98) << "WEEKLY RESULT\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n";
        cout << setw(119) << "==YOU DIDN'T REACH THE WEEKLY GOAL, TRY AGAIN NEXT WEEEK.==" <<endl;
        cout << "\n\n";
        cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << "km\n";
        cout << setw(75) << "= Rating: Good\n";
        cout << "\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(107) << "Enter [1] to perform another run\n";
        cout << setw(107) << "Enter [2] to select another plan\n";
        cout << setw(108) << "Enter [3] to go back to main menu\n";
        cout << setw(104) << "Enter [4] to exit the program\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n";
        cout << setw(100) << "Please enter a number: ";
        cin >> choice;

        system ("cls");

        switch (choice)
        {
            case 1:
            plan1();
            break;

            case 2:
            plan();
            break;

            case 3:
            menu();
            break;
                        
            case 4:
            exitProgram();
            break;

            default:
            cout << "\n\n\n\n\n\n\n\n";
            cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
            cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
            getch();

        }
    }
}

//code for plan 3
void plan3()
{
    double dailyGoal, weeklyGoal, totalDistance = 0, height, weight, distance, time, dailytimeGoal;
    int age, week = 0, day = 0, mode, bar1 = 177, bar2 = 219, choice, pulse;
    string firstName, lastName, gender, trainingPlan, trainDistance, trainPace, goalChoice, specificPlan, quit;

    cout << "\n\n\n";
    cout << setw(120) << "===========================================================\n";
    cout << setw(95) << "RUN TRACKER\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n";
    cout << setw(98) << "==CREATE YOUR OWN==" <<endl;
    cout << "\n\n";
    cout << setw(98) << "= Create your own daily goal (in km): ";
    cin >> dailyGoal;
    cout << setw(99) << "= Create your own weekly goal (in km): ";
    cin >> weeklyGoal;
    cout << "\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n\n";
    for (int i = 1; i <= 7; i++)
    {
        cout << setw(66) << "= Day " << i <<endl;
        cout << setw(108) << "Enter today's distance ran in km(or x to quit): ";
        cin >> quit;
        if (quit == "x")
        {
            break;
        }
            cout << setw(88) << "Time (in minutes or hours): ";
            cin >> time;
            cout << setw(83) << "Enter your pulse rate: ";
            cin >> pulse;
            cout << "\n\n";
            cout << setw(120) << "===========================================================\n";
            cout << setw(98) << "==DAILY RESULTS==" <<endl;
            cout << "\n\n";
            distance = stod(quit);
        if (distance >= dailyGoal)
        {
            cout << setw(107) << "= Congratulations! You completed today's goal!\n";
            cout << "\n";
        }
        else
        {
            cout << setw(115) << "= You didn't reach the daily goal, Try again tommorow.\n";
            cout << "\n";
        }
        //Time Computation
        if (time <= 12)
        {
            cout << setw(85) << "= Time Rating: Excellent\n"; 
            cout << "\n";
        }
        else if (time >= 13)
        {
            cout << setw(80) << "= Time Rating: Good\n";
            cout << "\n";
        }
        //Pulse computation
        if (pulse < 60 || pulse > 160)
        {
            cout << setw(137) << "= Your pulse rate is not in the normal range. Please consult to your doctor.\n";
            cout << "\n";
            cout << setw(120) << "===========================================================\n";
            cout << "\n";
        }
       else
       {
            cout << setw(102) << "= Your Pulse Rate is in the normal range.\n";
            cout << "\n";
            cout << setw(120) << "===========================================================\n";
            cout << "\n";
        }
        totalDistance += distance;
        day++;
        if (day == 7)
        {
            if (totalDistance >= weeklyGoal)
            {
                cout << setw(107) << "= Congratulations! Weekly goal is complete!\n";
            }
            else
            {
                cout << setw(107) << "= You didn't reach the weekly goal, Try again next week.\n";
            }

        }

    }
    system ("cls");

    string fullName = lastName + "," + firstName;

    if (totalDistance >= weeklyGoal)
    {
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(98) << "WEEKLY RESULT\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n";
        cout << setw(113) << "==CONGRATULATIONS! WEEKLY GOAL IS COMPLETE!==" <<endl;
        cout << "\n\n";
        cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << " km\n";
        cout << setw(80) << "= Rating: Excellent\n";
        cout << "\n\n"; 
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(107) << "Enter [1] to perform another run\n";
        cout << setw(107) << "Enter [2] to select another plan\n";
        cout << setw(108) << "Enter [3] to go back to main menu\n";
        cout << setw(104) << "Enter [4] to exit the program\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n";
        cout << setw(100) << "Please enter a number: ";
        cin >> choice;

        system ("cls");

        switch (choice)
        {
            case 1:
            plan3();
            break;

            case 2:
            plan();
            break;

            case 3:
            menu();
            break;
                        
            case 4:
            exitProgram();
            break;

            default:
            cout << "\n\n\n\n\n\n\n\n";
            cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
            cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
            getch();

        }
                      
    }
    else
    {
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(98) << "WEEKLY RESULT\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n";
        cout << setw(119) << "==YOU DIDN'T REACH THE WEEKLY GOAL, TRY AGAIN NEXT WEEEK.==" <<endl;
        cout << "\n\n";
        cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << "km\n";
        cout << setw(75) << "= Rating: Good\n";
        cout << "\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(107) << "Enter [1] to perform another run\n";
        cout << setw(107) << "Enter [2] to select another plan\n";
        cout << setw(108) << "Enter [3] to go back to main menu\n";
        cout << setw(104) << "Enter [4] to exit the program\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n";
        cout << setw(100) << "Please enter a number: ";
        cin >> choice;

        system ("cls");

        switch (choice)
        {
            case 1:
            plan3();
            break;

            case 2:
            plan();
            break;

            case 3:
            menu();
            break;
                        
            case 4:
            exitProgram();
            break;

            default:
            cout << "\n\n\n\n\n\n\n\n";
            cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
            cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
            getch();

        }
    }
}

//function for program exit
void exitProgram()
{
    int bar1 = 177, bar2 = 219;

    cout << "\n\n\n\n\n\n\n\n";
    cout << "\n\n\n\t\t\t\t\t\t\t\t\tPlease Wait.....";
    cout << "\n\n\t\t\t\t\t\t\t\t\t";
 

    for (int i  = 0; i < 25; i++)
    cout << (char)bar1;
    cout << "\r";
    cout << "\t\t\t\t\t\t\t\t\t";
    for (int i  = 0; i < 25; i++)
    {
        cout << (char)bar2;
        Sleep(150);
    }

    system ("cls");

    cout << "\n\n\n\n\n\n\n\n";
    cout << setw(95) << "THANK YOU FOR USING OUR PROGRAM :>\n";
    cout << setw(87) << "PRESS ANY KEY TO EXIT.....\n";
    getch();
}

//main body of the program
int main()
{
    system ("cls");

    double dailyGoal, weeklyGoal, totalDistance = 0, height, weight, distance, time, dailytimeGoal;
    int age, week = 0, day = 0, mode, bar1 = 177, bar2 = 219, choice, pulse;
    string firstName, lastName, gender, trainingPlan, trainDistance, trainPace, goalChoice, specificPlan, quit;
    
    cout << "\n\n\n\n\n\n\n\n";
    cout << "\n\n\n\t\t\t\t\t\t\t\t\tLoading.....";
    cout << "\n\n\t\t\t\t\t\t\t\t\t";
 

    for (int i  = 0; i < 25; i++)
    cout << (char)bar1;
    cout << "\r";
    cout << "\t\t\t\t\t\t\t\t\t";
    for (int i  = 0; i < 25; i++)
    {
        cout << (char)bar2;
        Sleep(150);
    }

    system ("cls");

    cout << "\n\n\n\n\n\n\n\n";
    cout << setw(120) << "===========================================================\n";
    cout << setw(95) << "RUN TRACKER\n";
    cout << setw(120) << "===========================================================\n";
    cout << setw(117) << "Created by Gems | Xavier | Ailene | Irus | Christian\n";
    cout << setw(120) << "===========================================================\n";
    cout << "\n\n\n";
    cout << setw(115) << "================================================\n";
    cout << setw (103) << "Enter [1] to proceed\n";
    cout << setw(100) << "Enter [0] to Exit\n";
    cout << setw(115) << "================================================\n";
    cout << "\n\n";
    cout << setw(100) << "Please enter mode: ";
    cin >> mode;

    system ("cls");

    if (mode == 0)
    {
        exitProgram();
        return 0;
    }

    system ("cls");

    if (mode == 1)
    {
        mode == 1;
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(95) << "RUN TRACKER\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n";
        cout << setw(101) << "==Personal Information==" <<endl;
        cout << "\n\n";
        cout << setw(75) << "= FIRST NAME: ";
        cin >> firstName;
        cout << setw(74) << "= LAST NAME: ";
        cin >> lastName;
        cout << setw(103) << "= GENDER (Male/Female/Prefer not to say): ";
        cin >> gender;
        cout << setw(68) << "= AGE: ";
        cin >> age;
        cout << setw (75) << "= HEIGHT(cm): ";
        cin >> height;
        cout << setw (76) << "= WEIGHT (kg): ";
        cin >> weight;
        cout << "\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n\n";
        cout << setw(120) << "===========================================================\n";
        cout << setw(103) << "Enter [1] to choose a plan\n";
        cout << setw(94) << "Enter [0] to exit\n";
        cout << setw(120) << "===========================================================\n";
        cout << "\n\n";
        cout << setw(100) << "Please enter a number: ";
        cin >> trainingPlan;

        system ("cls");

        if (trainingPlan == "0")
        {
            exitProgram();
            return 0;
        }
        
        
        system ("cls");

        if (trainingPlan == "1")
        {
            trainingPlan == "1";
            cout << "\n\n\n";
            cout << setw(120) << "===========================================================\n";
            cout << setw(95) << "RUN TRACKER\n";
            cout << setw(120) << "===========================================================\n";
            cout << "\n";
            cout << setw(101) << "==SELECT A TRAINING PLAN==" <<endl;
            cout << "\n\n";
            cout << setw(83) << "1. RUN TO LOSE WEIGHT\n";
            cout << setw(99) << "2. RACE PLAN / FULL MARATHON TRAINING\n";
            cout << setw(80) << "3. CREATE YOUR OWN\n";
            cout << setw(80) << "4. Go back to menu\n";
            cout << setw(82) << "5. Exit the program \n";
            cout << "\n";
            cout << setw(120) << "===========================================================\n";
            cout << "\n\n\n";
            cout << setw(120) << "===========================================================\n";
            cout << "\n\n";
            cout << setw(95) << "Your Choice: ";
            cin >> specificPlan;

            system ("cls");
        
            //code for run to lose weight plan
            if (specificPlan == "1")
            {
                specificPlan == "1";
                cout << "\n\n\n";
                cout << setw(120) << "===========================================================\n";
                cout << setw(95) << "RUN TRACKER\n";
                cout << setw(120) << "===========================================================\n";
                cout << "\n";
                cout << setw(108) << "==YOU SELECTED RUN TO LOSE WEIGHT==" <<endl;
                cout << "\n\n";
                cout << setw(117) << "DAILY GOAL: You must reach atleast 2km-5km run every day." <<endl;
                cout << setw(116) << "WEEKLY GOAL: You must reach atleast 15km run every week." <<endl;
                cout << setw(105) << "Time Rating: 30:00 minutes below = Excellent\n";
                cout << setw(100) << "Time Rating: 40:00 minutes above = Fair\n";
                cout << "\n";
                cout << setw(120) << "===========================================================\n";
                cout << "\n\n";
                dailyGoal = 2;
                weeklyGoal = 15;
                dailytimeGoal = 40;

                for (int i = 1; i <= 7; i++)
                {
                    cout << setw(66) << "= Day " << i <<endl;
                    cout << setw(108) << "Enter today's distance ran in km(or x to quit): ";
                    cin >> quit;
                    if (quit == "x")
                    {
                        break;
                    }
                    cout << setw(79) << "Time (in minutes): ";
                    cin >> time;
                    cout << setw(83) << "Enter your pulse rate: ";
                    cin >> pulse;
                    cout << "\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(98) << "==DAILY RESULTS==" <<endl;
                    cout << "\n\n";     
                    distance = stod(quit);
                    if (distance >= dailyGoal)
                    {
                        cout << setw(107) << "= Congratulations! You completed today's goal!\n";
                        cout << "\n";
                    }
                    else
                    {
                        cout << setw(115) << "= You didn't reach the daily goal, Try again tommorow.\n";
                        cout << "\n";
                    }
                    //Time Computation
                    if (time <= 40)
                    {
                        cout << setw(85) << "= Time Rating: Excellent\n"; 
                        cout << "\n";
                    }
                    else if (time >= 41)
                    {
                        cout << setw(80) << "= Time Rating: Good\n";
                        cout << "\n";
                    }
                    //Pulse computation
                    if (pulse < 60 || pulse > 160)
                    {
                        cout << setw(137) << "= Your pulse rate is not in the normal range. Please consult to your doctor.\n";
                        cout << "\n";
                        cout << setw(120) << "===========================================================\n";
                        cout << "\n";
                    }
                    else
                    {
                        cout << setw(102) << "= Your Pulse Rate is in the normal range.\n";
                        cout << "\n";
                        cout << setw(120) << "===========================================================\n";
                        cout << "\n";
                    }
                    totalDistance += distance;
                    day++;
                    if (day == 7)
                    {
                        if (totalDistance >= weeklyGoal)
                        {
                            cout << setw(107) << "= Congratulations! Weekly goal is complete!\n";
                        }
                        else
                        {
                            cout << setw(107) << "= You didn't reach the weekly goal, Try again next week.\n";
                        }

                    }

                }
                system ("cls");

                string fullName = lastName + "," + firstName;


                if (totalDistance >= weeklyGoal)
                {
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(98) << "WEEKLY RESULT\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n";
                    cout << setw(113) << "==CONGRATULATIONS! WEEKLY GOAL IS COMPLETE!==" <<endl;
                    cout << "\n\n";
                    cout << setw(73) << "= Full Name: " << fullName << endl;
                    cout << setw(67) << "= Age: " << age << " years old\n";
                    cout << setw (74) << "= HEIGHT(cm): " << height << " cm\n";
                    cout << setw (75) << "= WEIGHT (kg): " << weight << " kg\n";
                    cout << "\n";
                    cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << " km\n";
                    cout << setw(80) << "= Rating: Excellent\n";
                    cout << "\n\n"; 
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(107) << "Enter [1] to perform another run\n";
                    cout << setw(107) << "Enter [2] to select another plan\n";
                    cout << setw(108) << "Enter [3] to go back to main menu\n";
                    cout << setw(104) << "Enter [4] to exit the program\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n";
                    cout << setw(100) << "Please enter a number: ";
                    cin >> choice;

                    system ("cls");

                    switch (choice)
                    {
                        case 1:
                        plan1();
                        break;

                        case 2:
                        plan();
                        break;

                        case 3:
                        menu();
                        break;
                        
                        case 4:
                        exitProgram();
                        break;

                        default:
                        cout << "\n\n\n\n\n\n\n\n";
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
                        cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
                        getch();
                        break;

                    }

                      
                }
                else
                {
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(98) << "WEEKLY RESULT\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n";
                    cout << setw(119) << "==YOU DIDN'T REACH THE WEEKLY GOAL, TRY AGAIN NEXT WEEEK.==" <<endl;
                    cout << "\n\n";
                    cout << setw(73) << "= Full Name: " << fullName << endl;
                    cout << setw(67) << "= Age: " << age << " years old\n";
                    cout << setw (74) << "= HEIGHT(cm): " << height << " cm\n";
                    cout << setw (75) << "= WEIGHT (kg): " << weight << " kg\n";
                    cout << "\n";
                    cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << "km\n";
                    cout << setw(75) << "= Rating: Good\n";
                    cout << "\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(107) << "Enter [1] to perform another run\n";
                    cout << setw(107) << "Enter [2] to select another plan\n";
                    cout << setw(108) << "Enter [3] to go back to main menu\n";
                    cout << setw(104) << "Enter [4] to exit the program\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n";
                    cout << setw(100) << "Please enter a number: ";
                    cin >> choice;

                    system ("cls");

                    switch (choice)
                    {
                        case 1:
                        plan1();
                        break;

                        case 2:
                        plan();
                        break;

                        case 3:
                        menu();
                        break;

                        case 4:
                        exitProgram();
                        break;

                        default:
                        cout << "\n\n\n\n\n\n\n\n";
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
                        cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
                        getch();
                        break;
                        
                    }
                }
                
                
                
            }
            
            //code for full marathon training plan
            else if (specificPlan == "2")
            {
                specificPlan == "2";
                cout << "\n\n\n";
                cout << setw(120) << "===========================================================\n";
                cout << setw(95) << "RUN TRACKER\n";
                cout << setw(120) << "===========================================================\n";
                cout << "\n";
                cout << setw(111) << "==YOU SELECTED FULL MARATHON TRAINING==" <<endl;
                cout << "\n\n";
                cout << setw(109) << "DAILY GOAL: You must reach 18-20km run every day." <<endl;
                cout << setw(120) << "WEEKLY GOAL: You must reach atleast 80-100km run every week." <<endl;
                cout << setw(99) << "Time Rating: 2 hours below = Excellent\n";
                cout << setw(95) << "Time Rating: 13 hours above = Fair\n";
                cout << "\n";
                cout << setw(120) << "===========================================================\n";
                cout << "\n\n";
                dailyGoal = 18;
                weeklyGoal = 80;
                dailytimeGoal = 40;

                for (int i = 1; i <= 7; i++)
                {
                    cout << setw(66) << "= Day " << i <<endl;
                    cout << setw(108) << "Enter today's distance ran in km(or x to quit): ";
                    cin >> quit;
                    if (quit == "x")
                    {
                        break;
                    }
                    cout << setw(77) << "Time (in hours): ";
                    cin >> time;
                    cout << setw(83) << "Enter your pulse rate: ";
                    cin >> pulse;
                    cout << "\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(98) << "==DAILY RESULTS==" <<endl;
                    cout << "\n\n";     
                    distance = stod(quit);
                    if (distance >= dailyGoal)
                    {
                        cout << setw(107) << "= Congratulations! You completed today's goal!\n";
                        cout << "\n";
                    }
                    else
                    {
                        cout << setw(115) << "= You didn't reach the daily goal, Try again tommorow.\n";
                        cout << "\n";
                    }
                    //Time Computation
                    if (time <= 12)
                    {
                        cout << setw(85) << "= Time Rating: Excellent\n"; 
                        cout << "\n";
                    }
                    else if (time >= 13)
                    {
                        cout << setw(80) << "= Time Rating: Good\n";
                        cout << "\n";
                    }
                    //Pulse computation
                    if (pulse < 60 || pulse > 160)
                    {
                        cout << setw(137) << "= Your pulse rate is not in the normal range. Please consult to your doctor.\n";
                        cout << "\n";
                        cout << setw(120) << "===========================================================\n";
                        cout << "\n";
                    }
                    else
                    {
                        cout << setw(102) << "= Your Pulse Rate is in the normal range.\n";
                        cout << "\n";
                        cout << setw(120) << "===========================================================\n";
                        cout << "\n";
                    }
                    totalDistance += distance;
                    day++;
                    if (day == 7)
                    {
                        if (totalDistance >= weeklyGoal)
                        {
                            cout << setw(107) << "= Congratulations! Weekly goal is complete!\n";
                        }
                        else
                        {
                            cout << setw(107) << "= You didn't reach the weekly goal, Try again next week.\n";
                        }

                    }

                }
                system ("cls");

                string fullName = lastName + "," + firstName;

                if (totalDistance >= weeklyGoal)
                {
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(98) << "WEEKLY RESULT\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n";
                    cout << setw(113) << "==CONGRATULATIONS! WEEKLY GOAL IS COMPLETE!==" <<endl;
                    cout << "\n\n";
                    cout << setw(73) << "= Full Name: " << fullName << endl;
                    cout << setw(67) << "= Age: " << age << " years old\n";
                    cout << setw (74) << "= HEIGHT(cm): " << height << " cm\n";
                    cout << setw (75) << "= WEIGHT (kg): " << weight << " kg\n";
                    cout << "\n";
                    cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << " km\n";
                    cout << setw(80) << "= Rating: Excellent\n";
                    cout << "\n\n"; 
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(107) << "Enter [1] to perform another run\n";
                    cout << setw(107) << "Enter [2] to select another plan\n";
                    cout << setw(108) << "Enter [3] to go back to main menu\n";
                    cout << setw(104) << "Enter [4] to exit the program\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n";
                    cout << setw(100) << "Please enter a number: ";
                    cin >> choice;

                    system ("cls");

                    switch (choice)
                    {
                        case 1:
                        plan2();
                        break;

                        case 2:
                        plan();
                        break;

                        case 3:
                        menu();
                        break;
                        
                        case 4:
                        exitProgram();
                        break;

                        default:
                        cout << "\n\n\n\n\n\n\n\n";
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
                        cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
                        getch();
                        break;

                    }
                      
                }
                else
                {
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(98) << "WEEKLY RESULT\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n";
                    cout << setw(119) << "==YOU DIDN'T REACH THE WEEKLY GOAL, TRY AGAIN NEXT WEEEK.==" <<endl;
                    cout << "\n\n";
                    cout << setw(73) << "= Full Name: " << fullName << endl;
                    cout << setw(67) << "= Age: " << age << " years old\n";
                    cout << setw (74) << "= HEIGHT(cm): " << height << " cm\n";
                    cout << setw (75) << "= WEIGHT (kg): " << weight << " kg\n";
                    cout << "\n";
                    cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << "km\n";
                    cout << setw(75) << "= Rating: Good\n";
                    cout << "\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(107) << "Enter [1] to perform another run\n";
                    cout << setw(107) << "Enter [2] to select another plan\n";
                    cout << setw(108) << "Enter [3] to go back to main menu\n";
                    cout << setw(104) << "Enter [4] to exit the program\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n";
                    cout << setw(100) << "Please enter a number: ";
                    cin >> choice;

                    system ("cls");

                    switch (choice)
                    {
                        case 1:
                        plan2();
                        break;

                        case 2:
                        plan();
                        break;

                        case 3:
                        menu();
                        break;
                        
                        case 4:
                        exitProgram();
                        break;

                        default:
                        cout << "\n\n\n\n\n\n\n\n";
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
                        cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
                        getch();
                        break;

                    }
                }
                
            }
            
            //code for create your own plan
            else if (specificPlan == "3")
            {
                specificPlan == "3";
                cout << "\n\n\n";
                cout << setw(120) << "===========================================================\n";
                cout << setw(95) << "RUN TRACKER\n";
                cout << setw(120) << "===========================================================\n";
                cout << "\n";
                cout << setw(98) << "==CREATE YOUR OWN==" <<endl;
                cout << "\n\n";
                cout << setw(98) << "= Create your own daily goal (in km): ";
                cin >> dailyGoal;
                cout << setw(99) << "= Create your own weekly goal (in km): ";
                cin >> weeklyGoal;
                cout << "\n";
                cout << setw(120) << "===========================================================\n";
                cout << "\n\n";
                for (int i = 1; i <= 7; i++)
                {
                    cout << setw(66) << "= Day " << i <<endl;
                    cout << setw(108) << "Enter today's distance ran in km(or x to quit): ";
                    cin >> quit;
                    if (quit == "x")
                    {
                        break;
                    }
                    cout << setw(88) << "Time (in minutes or hours): ";
                    cin >> time;
                    cout << setw(83) << "Enter your pulse rate: ";
                    cin >> pulse;
                    cout << "\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(98) << "==DAILY RESULTS==" <<endl;
                    cout << "\n\n";
                    distance = stod(quit);
                    if (distance >= dailyGoal)
                    {
                        cout << setw(107) << "= Congratulations! You completed today's goal!\n";
                        cout << "\n";
                    }
                    else
                    {
                        cout << setw(115) << "= You didn't reach the daily goal, Try again tommorow.\n";
                        cout << "\n";
                    }
                    //Time Computation
                    if (time <= 12)
                    {
                        cout << setw(85) << "= Time Rating: Excellent\n"; 
                        cout << "\n";
                    }
                    else if (time >= 13)
                    {
                        cout << setw(80) << "= Time Rating: Good\n";
                        cout << "\n";
                    }
                    //Pulse computation
                    if (pulse < 60 || pulse > 160)
                    {
                        cout << setw(137) << "= Your pulse rate is not in the normal range. Please consult to your doctor.\n";
                        cout << "\n";
                        cout << setw(120) << "===========================================================\n";
                        cout << "\n";
                    }
                    else
                    {
                        cout << setw(102) << "= Your Pulse Rate is in the normal range.\n";
                        cout << "\n";
                        cout << setw(120) << "===========================================================\n";
                        cout << "\n";
                    }
                    totalDistance += distance;
                    day++;
                    if (day == 7)
                    {
                        if (totalDistance >= weeklyGoal)
                        {
                            cout << setw(107) << "= Congratulations! Weekly goal is complete!\n";
                        }
                        else
                        {
                            cout << setw(107) << "= You didn't reach the weekly goal, Try again next week.\n";
                        }

                    }

                }
                system ("cls");

                string fullName = lastName + "," + firstName;

                if (totalDistance >= weeklyGoal)
                {
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(98) << "WEEKLY RESULT\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n";
                    cout << setw(113) << "==CONGRATULATIONS! WEEKLY GOAL IS COMPLETE!==" <<endl;
                    cout << "\n\n";
                    cout << setw(73) << "= Full Name: " << fullName << endl;
                    cout << setw(67) << "= Age: " << age << " years old\n";
                    cout << setw (74) << "= HEIGHT(cm): " << height << " cm\n";
                    cout << setw (75) << "= WEIGHT (kg): " << weight << " kg\n";
                    cout << "\n";
                    cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << " km\n";
                    cout << setw(80) << "= Rating: Excellent\n";
                    cout << "\n\n"; 
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(107) << "Enter [1] to perform another run\n";
                    cout << setw(107) << "Enter [2] to select another plan\n";
                    cout << setw(108) << "Enter [3] to go back to main menu\n";
                    cout << setw(104) << "Enter [4] to exit the program\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n";
                    cout << setw(100) << "Please enter a number: ";
                    cin >> choice;

                    system ("cls");

                    switch (choice)
                    {
                        case 1:
                        plan3();
                        break;

                        case 2:
                        plan();
                        break;

                        case 3:
                        menu();
                        break;
                        
                        case 4:
                        exitProgram();
                        break;

                        default:
                        cout << "\n\n\n\n\n\n\n\n";
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
                        cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
                        getch();
                        break;

                    }
                      
                }
                else
                {
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(98) << "WEEKLY RESULT\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n";
                    cout << setw(119) << "==YOU DIDN'T REACH THE WEEKLY GOAL, TRY AGAIN NEXT WEEEK.==" <<endl;
                    cout << "\n\n";
                    cout << setw(73) << "= Full Name: " << fullName << endl;
                    cout << setw(67) << "= Age: " << age << " years old\n";
                    cout << setw (74) << "= HEIGHT(cm): " << height << " cm\n";
                    cout << setw (75) << "= WEIGHT (kg): " << weight << " kg\n";
                    cout << "\n";
                    cout << setw(97) << "= Your weekly total distance ran is: " << totalDistance << "km\n";
                    cout << setw(75) << "= Rating: Good\n";
                    cout << "\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << setw(107) << "Enter [1] to perform another run\n";
                    cout << setw(107) << "Enter [2] to select another plan\n";
                    cout << setw(108) << "Enter [3] to go back to main menu\n";
                    cout << setw(104) << "Enter [4] to exit the program\n";
                    cout << setw(120) << "===========================================================\n";
                    cout << "\n\n";
                    cout << setw(100) << "Please enter a number: ";
                    cin >> choice;

                    system ("cls");

                    switch (choice)
                    {
                        case 1:
                        plan3();
                        break;

                        case 2:
                        plan();
                        break;

                        case 3:
                        menu();
                        break;
                        
                        case 4:
                        exitProgram();
                        break;

                        default:
                        cout << "\n\n\n\n\n\n\n\n";
                        cout << "\n\n\n\t\t\t\t\t\t\t\t\tINVALID INPUT\n";
                        cout << setw(94) << "PRESS ANY KEY TO EXIT.....\n";
                        getch();
                        break;

                    }
                }
            }
            
            //code for go back to menu
            else if (specificPlan == "4")
            {
                menu();
                return 0;
            }
            
            //code for exiting the program
            else if (specificPlan == "5")
            {
                exitProgram();
                return 0;
            }
   
            
        }
        
    }
 
    return 0;
}