 #include<iostream>
 using namespace std;
 class Time {
    private:
    int hours,minutes;
    public:
    void getTime();
    void addTime(Time t1,Time t2);
    void displayTime();
 };
 void Time::getTime()
 {
    cout<<"Enter the hours:";
    cin >>hours;
    cout<<"Enter the minutes:";
    cin >>minutes;
    
 }
 void Time::addTime(Time t1,Time t2)
  {
   minutes=t1. minutes+t2.minutes;
   hours =t1.hours+t2.hours+(minutes/60);
   minutes=minutes%60;
   hours=hours+t1.hours+t2.hours;
  }
   int main()
   {
   Time t1,t2,t3;
   t1.getTime();
   t2.getTime();
   t3.getTime();
   
   t1.displayTime();
   t2.displayTime();
   t3.displayTime();
   }
   void Time::displayTime()
   {
   cout<<"hours"<<hours;
   cout<<"minutes"<<minutes;
}

 