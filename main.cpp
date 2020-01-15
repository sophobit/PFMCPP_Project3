/*
 Project 3 - Part 1 / 5
Video:  Chapter 2 Part 5
 User-Defined Types

 Create a branch named Part1
 
 1) write 10 user-defined types, each with a random number of member variables
    try to make the member variables have names that are related to the user-defined type.
 
 2) give the member variables relevant data types
 
 3) add a couple member functions.  
    make the function parameter list for those member functions use some of your User-Defined Types
 
 4) make 2 of the 10 user-defined types be nested class
 
 5) One of your UDTs should only use UDTs for its member variable types.   
     No primitives allowed!
 
 6) After you finish defining each type, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

/*
 example:
 */
struct CarWash            //1) a U.D.T. with a random number of member variables
{
    int numSponges = 3;
    double amountOfSoapUsedPerCar = 2.6; //2) relevant data types
    unsigned int numCarsProcessed = 0;
    
    struct Car                             //4) nested class
    {
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        //2) relevant data types
    };
    
    void washAndWaxCar( Car car );         //3) member function with a user-defined type as the parameter.  The user-defined type parameter happens to be the nested class.
    
    Car myCar;  //5) a member variable whose type is a UDT.
};


/*
 1)
 */
struct ArtWork
{
    int mediumCode = 1;
    int materialsCode = 1;
    double priceOfArt = 100.00;

    struct Artist
    {
        bool statusLiving = true;
        float yearsActive = 20.0;
    };

    void auctionArt ( Artist artist );

    Artist currentArtist;
};
/*
 2)
 */
struct Dissertation
{
    int length = 200;
    bool isDone = false;
    float timeWorkedOn = 2.f;

    struct Advisor
    {
        bool isMale = true;
        int numPastAdvisees = 0;
    };

    void checkDiss ( int length, float timeWorkedOn );
    void assessDiss ( Advisor advisor );

    Advisor myAdvisor;
};
/*
 3)
 */
struct Committee
{
    int numMembers = 0;
    bool femaleMembers = true;
    int topicCode = 3;

    void populateMembers ( int numMembers, bool femaleMembers );
    void pickTopic ( int topicCode );
};
/*
 4)
 */
struct Article
{
    int numPages = 0;
    bool isInteresting = false;
    int publisherCode = 0;

    void readArticle ( int numPages );
};
/*
 5)
 */
struct MusicComposition
{
    int lengthMeasures = 0;
    float lengthTime = 0.f;
    bool composerAlive = true;

    void analyzeHarmony ( int lengthTime );
};
/*
 6)
 */
struct Building
{
    int purposeCode = 0;
    double costToBuild = 1.0;
    bool isMuseum = false;
    int architectCode = 0;

    void checkCodeViolations ( int purposeCode );
};
/*
 7)
 */
struct Department
{
    int numStudents = 0;
    int numFaculty = 0;
    double annualBudget = 100.00;
    bool developsIP = false;

    void admitStudents ( double annualBudget, int numStudents );
};
/*
 8)
 */
 struct Cow
 {
     int numSpots = 0;
     bool goesMoo = true;
     float gallonsMilk = 1.f;

     void tipCow ( bool goesMoo, int numSpots );
 };
/*
 9)
 */
struct Student
{
    float enteringGPA = 0.f;
    float exitingGPA = 0.f;
    Dissertation myDissertation;
    bool isTA = true;

    void passStudent ( float exitingGPA );
};
/*
 10)
 */
struct GraduateSchool
{
    Student student;
    Department department;
    Dissertation dissertation;
    Cow myCow;

    void raiseEndowment ( Department department );
};
#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
