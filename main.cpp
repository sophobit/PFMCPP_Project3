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
struct Person
{   
    int age;
    int height;
    float hairLength;
    float GPA;
    unsigned int SATscore;
    int distanceTraveled;

    struct Limb
    {
        int stepSize();
        void stepForward();
    };

    void run( int howFast, bool startWithLeftFoot );

    Limb leftFoot;
    Limb rightFoot;
};

int Person::Limb::stepSize()
{
    return {};
}

void Person::Limb::stepForward()
{

}

void Person::run( int, bool startWithLeftFoot2 )
{
    if ( startWithLeftFoot2 == true )
    {
        leftFoot.stepForward();
        rightFoot.stepForward();
    }
    else
    {
        rightFoot.stepForward();
        leftFoot.stepForward();
    }
    distanceTraveled += leftFoot.stepSize() + rightFoot.stepSize();

}


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
    std::cout << "good to go!" << std::endl;
}
