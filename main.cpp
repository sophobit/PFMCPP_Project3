/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 Send me the the link to your repl.it in a DM on Slack

 Wait for my code review.
 */

#include <iostream>
namespace Example {
struct UDT  
{
    int a; //a member variable
    float b { 2.f }; //3) in-class initialization
    UDT() : a(0) { } //3) 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()



/*
 1)
 */
struct ArtWork
{
    double currentPrice;
    ArtWork() { currentPrice = 0; }
    double newPrice ( double, int );
};

double ArtWork::newPrice ( double oldPrice, int yearsOwned )
{
    return oldPrice * yearsOwned;
}

/*
 2)
 */
struct Diss
{
    int length = 0;
    Diss() { length = 200; }
    void printLength()
    {
        std::cout << "The length of the dissertation is " << length << " pages." << std::endl;
    }
};
/*
 3)
 */
struct Committee
{
    int numMembers;
    Committee() { numMembers = 5; }
    void status ( int numFemaleMembers );
};

void Committee::status ( int femaleMembers )
{
    std::cout << "The committee has " << numMembers << " members, ";
    if ( femaleMembers == 0 )
    {
        std::cout << "but no female members." << std::endl;
    }
    else
    {
        std::cout << "including " << femaleMembers << " women."  << std::endl;
    }
}
/*
 4)
 */
struct Article
{
    int submitAttempts;
    Article() { submitAttempts = 5; }
    void printSubmitRatio ( int totalJournals );
};

void Article::printSubmitRatio ( int totalNumber )
{
    std::cout << "Out of " << totalNumber << " existing journals, the Article was submitted to " << submitAttempts << " journals." << std::endl; 
}
/*
 5)
 */
struct MusicComposition
{
    int numInstruments = 10;
    MusicComposition() { numInstruments = 5; }
    void analyzeInterest ( int lengthInMinutes );
};

void MusicComposition::analyzeInterest ( int numMinutes )
{
    if ( numMinutes > 15 )
    {
        std::cout << "This piece with " << numInstruments << " instruments is boring." << std::endl;
    }
    else
    {
        std::cout << "This piece with " << numInstruments << " instruments is not boring." << std::endl;
    }
}


/*
 6)
 */
struct Building
{
    double costToBuild = 1.00;
    Building() { costToBuild = 400000.00; }
    void printCost();
};

void Building::printCost()
{
    std::cout << "Building::printCost() " << costToBuild << std::endl;
}
/*
 7)
 */
struct Department
{
    double annualBudget = 100.00;
    Department() { annualBudget = 100000.00; }
    void chooseBudget ( bool );
};

void Department::chooseBudget ( bool developsIP )
{
    if ( developsIP == true )
    {
        std::cout << "The annualBudget is " << annualBudget * 2 << std::endl;
    }
    else
    {
        std::cout << "The annualBudget is " << annualBudget << std::endl;
    }
}
/*
 8)
 */
struct Cow
{
    int numSpots;
    Cow() { numSpots = 6; }
    void tipCow ( bool goesMoo ); 
};

void Cow::tipCow ( bool moo )
{
    if ( moo == true )
    {
        std::cout << "The cow with " << numSpots << " spots has mooed, it shall be tipped." << std::endl;
    }
    else
    {
       std::cout << "The cow with " << numSpots << " spots has not mooed, it shall not be tipped." << std::endl;
    }
}
/*
 9)
 */
struct Student
{
    float enteringGPA = 0.0f;
    Student() { enteringGPA = 3.4f; }
    void printGPA();
};

void Student::printGPA()
{
    std::cout << "Student::printGPA() is " << enteringGPA << std::endl;
}
/*
 10)
 */
struct GradSchool
{
    int numApplicants;
    GradSchool() { numApplicants = 1000; }
    void printStatus ( int );
};

void GradSchool::printStatus( int numAccepted )
{
    std::cout << "Out of " << numApplicants << " applicants, " << numAccepted << " were accepted." << std::endl;
}


#include <iostream>
int main()
{
    Example::main();
    ArtWork mondrian;
    auto result1 = mondrian.newPrice( 4000.00, 5 );
    std::cout << "ArtWork::newPrice(): " << result1 << std::endl;
    Diss diss;
    diss.printLength();
    Committee committee;
    committee.status( 2 );
    Article article;
    article.printSubmitRatio(85);
    MusicComposition composition;
    composition.analyzeInterest(21);
    Building home;
    home.printCost();
    Department biology;
    biology.chooseBudget(true);
    Cow bessy;
    bessy.tipCow(true);
    Student dave;
    dave.printGPA();
    GradSchool ucla;
    ucla.printStatus(200);
    std::cout << "good to go!" << std::endl;
}
