///Custom Type in In C/C++: https://www.youtube.com/watch?v=NTip15BHVZc

#include <iostream>

using namespace std;

struct Date{

  int day, month, year;/// by default Private

  Date()
  {
      //cout<<"Cpp Structure Default Constructor"<<endl;
  }
  Date(int d, int mon, int yr)
  {
      day=d;
      month=mon;
      year=yr;
      ///cout<<"Cpp Structure Parameter Constructor"<<endl;
      cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
      CheckOccasion(day,month);
  }

    void GetDate(int d, int mon, int yr)
  {
      day=d;
      month=mon;
      year=yr;
      ///cout<<"Cpp Structure Member Function"<<endl;
      cout<<"Date: "<<day<<"/"<<month<<"/"<<year<<endl;
      CheckOccasion(day,month);
  }
  void CheckOccasion(int da ,int mon)
  {
      day=da;
      month=mon;
      if(day==16 && month==12)
      {
          cout<<"Victory Day"<<endl;
      }

      else if(day==26 && month==3)
      {
          cout<<"Independent Day"<<endl;
      }
      else if(day==21 && month==2)
      {
          cout<<"International Mothers Language Day"<<endl;
      }
      else
        {
           cout<<"Not Any Bengali Occasion"<<endl;
        }
  }

};


/*
typedef struct Date{

  int day, month, year;

} Date;  //=> For C it requires to write typedef to write Like : Date d; instead of:  struct Date d;
*/



int main()
{
    //cout << "Hello world!" << endl;

    Date d;
    d.day=21;
    d.month=02;
    d.year=2021;

    cout<<"Date: "<<d.day<<"/"<<d.month<<"/"<<d.year<<endl;
    d.CheckOccasion(21,02);
    ///Wrong Way : d.Date(07,03,2021);
    ///Right Way : Date d2(07,03,2021); * Same for Class in c++
    Date d1(01,01,2021);
    //d1.CheckOccasion(01,01);
    Date d3;
     d3.GetDate(26,03,2021);

     Date *d4 = new Date(); ///Dynamical memory allocation or object creation
     Date *d5 = new Date(16,12,2021);
     //cout<<*d5;


    return 0;

}


/*

#include <iostream>

using namespace std;

class MyDate
{

    int day,month,year;

public:
    AssignDate( int d, int m, int y)
    {
        day=d;
        month=m;
        year=y;
        PrintDate();
    }

public:
    void PrintDate()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }

};

class Human : public MyDate
{
public:
    int id;
    string name;
    MyDate dateOfBirth;
    int bPH, bPL;      ///bloodPressureHigh = bPH bloodPressureLow = bPL
    string gender;
    int heartRate;

public:
    Human();


public:
    Human(int i, string n, MyDate dob, int H, int L, string gen, int hr)
    {
        id=i;
        name=n;
        dateOfBirth=dob;
        bPH=H;
        bPL=L;
        gender=gen;
        heartRate=hr;


    }

       /* public: AssignValue(int i, string n, MyDate dob, int H, int L, string gen, int hr)
        {
            id=i;
            name=n;
            dateOfBirth=dob;
            bPH=H;
            bPL=L;
            gender=gen;
            heartRate=hr;


        }*/

    /* void UserInput()
        {
            cout<<"--------------------------------"<<endl;
            cout<<"Please, Put Health Information: "<<endl;
            cout<<"--------------------------------"<<endl;
            cout<<"Patient ID: "<<endl;
            cin>>id;
            cout<<"Patient Name: "<<endl;
            cin>>name;
            cout<<"Date Of Birth: "<<endl;
            //cin>>dateOfBirth;
            cout<<"Blood Pressure High: "<<endl;
            cin>>bPH;
            cout<<"Blood Pressure Low: "<<endl;
            cin>>bPL;
            cout<<"Gender( Hints: Male/Female):  "<<endl;
            cin>>gender;
            cout<<"Heart Rate: "<<endl;
            cin>>heartRate;
        }


    void ShowAll()
    {
        cout<<"--------------------------------"<<endl;
        cout<<"Health Information Of "<<name<<": "<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        //cout<<"Date Of Birth: "<< PrintDate()<<endl;
        cout<<"Blood Pressure High: "<<bPH<<endl;
        cout<<"Blood Pressure Low: "<<bPL<<endl;
        cout<<"Gender: "<<gender<<endl;
        cout<<"Heart Rate: "<<heartRate<<endl;
        BloodPressureCheck();
    }

    void BloodPressureCheck()
    {
        if((gender=="Male") && (bPH>=110 && bPH<=120) && (heartRate>=80 && heartRate<=90) ||
                (gender=="Female") && (bPH>=100 && bPH<=110) && (heartRate>=70 && heartRate<=80))
        {
            cout<<"Overall Health Condition: Healthy !"<<endl;
        }
        else
        {
            cout<<"Overall Health Condition: Unhealthy !"<<endl;
        }
    }



};

Human :: Human()
{
    cout<<"Default Constructor"<<endl;
    ///Only Constructor fulfilled at outside of class.No return type( void, int, etc) is allowed here.
}
int main()
{
    //cout << "Hello world!" << endl;

    MyDate dateOne,dateTwo;
    dateOne.AssignDate(25,06,1986);
    dateTwo.AssignDate(14,10,1962);

    Human humanOne(18,"John",dateOne,115,85,"Male",85),humanTwo;
    Human *h1 = new Human;
    Human *h2 = new Human(19,"Jack",dateTwo,150,83,"Male",79);
    ///Right way to passing values in parameterize constructor in C++
    //Human();
    //humanOne.AssignValue(18,"John",dateOne,115,85,"Male",85);
    //humanTwo.AssignValue(19,"Jack","14/02/1990",150,83,"Male",79);
    humanOne.ShowAll();
    h2->ShowAll();  ///Used (->) as h2 pointer type object

    return 0;
}

*/

