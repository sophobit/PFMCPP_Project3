 /*
 Project 3 - Part 2 / 5
 Video: Chapter 2 Part 6
 Implementations tasks
 
Create a branch named Part2

 tasks
 1) write the definition for the Type that leftFoot and rightFoot are instantiations of.
    don't forget to define and implement the member functions 'stepForward()' and 'stepSize()'
    you should be able to deduce the return type of those functions based on their usage in Person::run()
    You'll need to insert the Person struct from the video in the space below.
 */





 /*
 2) provide implementations for the member functions you declared in your 10 user-defined types from the previous video outside of your UDT definitions.
 
 3) be sure to write the correct full qualified name for the nested type's member functions.
 
 4) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */


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
