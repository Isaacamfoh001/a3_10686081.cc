#include <iostream>

using namespace std;

int main()
{

    int overall_score ;
    cout << "Enter your overall score: ";
    cin >> overall_score ;

    if((overall_score >=80) && (overall_score <=100))
        {
            cout << "Grade is  " << "A" << endl;
       }
       else if((overall_score >= 75) && (overall_score <= 79))
       {
            cout << "Grade  is  " << "B+" << endl;
       }else if((overall_score >= 70) && (overall_score <= 74))
       {
            cout << "Grade is  " << "B" << endl;
       }
       else if((overall_score >= 65) && (overall_score <= 69))
       {
            cout << "Grade is  " << "C+" << endl;
       }
       else if((overall_score >= 60) && (overall_score <= 64))
       {
            cout << "Grade is  " << "C" << endl;
       }
       else if((overall_score >= 55) && (overall_score<= 59))
       {

            cout << "Grade is  " << "D+" << endl;
       }
       else if((overall_score >= 50) && (overall_score <= 54))
       {
            cout << "Grade is " << "D" << endl;
       }
       else if((overall_score >= 45) && (overall_score <= 49))
       {
            cout << "Grade is  " << "E" << endl;
       }
       else if((overall_score >= 0) && (overall_score <= 44))
       {
            cout << "Grade is  " << "F" << endl;
       }
       else{
            cout <<"No Grade Available!" << endl;
       }

    return 0;
}
