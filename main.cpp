/*
 Project 3 - Part 3 / 5
 video: Chapter 2 - Part 8
 Constructors tasks

 Create a branch named Part3

 On a new branch:

 1) Add a constructor for each User-Defined-Type.
 
 2) Instantiate a few of your user-defined types in the main function at the bottom of that file, and call some of those member functions.
 
 3) make them print out something interesting via std::cout
 
 After you finish defining each type/function:
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 
 example:
 */

#include <iostream>
namespace Example 
{
struct UDT  // my user defined type
{
    int a; //a member variable
    UDT() { a = 0; }             //3) the constructor
    void printThing()            //1) the member function
    {
        std::cout << "UDT::printThing() " << a << std::endl;  //5) printing out something interesting
    }
};

int main()
{
    UDT foo;              //4) instantiating a UDT in main()
    foo.printThing();     //4) calling a member function of the instance that was instantiated.
    
    return 0;
}
}

//insert Example::main() into main() of user's repo.



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

void ArtWork::auctionArt ( Artist artist )
{
    artist.statusLiving = false;
}
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

void Dissertation::assessDiss ( Advisor advisor )
{
    advisor.numPastAdvisees = 1;
}
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

void Committee::populateMembers ( int numMembersHere, bool femaleMembersHere )
{
    if ( femaleMembersHere == false )
    {
        numMembersHere = 0;
    }
    else
    {
        numMembersHere = 1;
    }
}
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

void Article::readArticle ( int numPages2 )
{
    if ( numPages2 > 50 )
    {
        Article::isInteresting = false;
    }
}
/*
 5)
 */
struct MusicComposition
{
    int lengthMeasures = 0;
    float lengthTime = 0.f;
    bool composerAlive = true;
    bool isBoring = false;

    void analyzeHarmony ( int lengthTime );
};

void MusicComposition::analyzeHarmony ( int lengthTime2 )
{
    if ( lengthTime2 > 20.0 )
    {
        MusicComposition::isBoring = true;
    }
}
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

void Building::checkCodeViolations ( int purposeCode2 )
{
    if ( purposeCode2 == 3 )
    {
        Building::isMuseum = true;
    }
}
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

void Department::admitStudents ( double, int )
{
    if ( annualBudget <= 1000000.00 )
    {
        Department::numFaculty = 25;
    }
    else
    {
        Department::numFaculty = 50;
    }
}
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

void Cow::tipCow ( bool, int )
{

}
/*
 9)
 */
struct Student
{
    float enteringGPA = 0.f;
    double exitingGPA = 0.0;
    Dissertation myDissertation;
    bool isTA = true;
    bool goToNextYear = true;

    void passStudent ( double exitingGPA );
};

void Student::passStudent ( double )
{
    if ( exitingGPA < 2.5 )
    {
        Student::goToNextYear = false;
    }
}
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

void GraduateSchool::raiseEndowment ( Department )
{
    department.developsIP = true;
}

#include <iostream>
int main()
{
    Example::main();
    std::cout << "good to go!" << std::endl;
}
