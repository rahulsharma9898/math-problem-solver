#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double pie = 3.14;

    std::cout << "\nEnter 1 if question is related to Circle." << std::endl;

    std::cout << "Enter 2 if question is related to Square." << std::endl;

    std::cout << "Enter 3 if question is related to Triangle." << std::endl;

    std::cout << "Enter 4 if question is related to Rectangle." << std::endl;

    int shape;

    std::cout << "\nEnter the above value to continue: ";

    cin >> shape;

    switch (shape)
    {

        //***************************** CIRCLE *********************************//

    case 1:

        std::cout << "\n\n******************** CIRCLE *******************\n"
                  << std::endl;

        std::cout << "\n Enter 1 if question is related to Radius and Diameter." << std::endl;

        std::cout << " Enter 2 if question is related to Circumference of the Circle." << std::endl;

        std::cout << " Enter 3 if question is related to Area of Circle." << std::endl;

        std::cout << " Enter 4 if question is related to Length of Arc." << std::endl;

        std::cout << " Enter 5 if question is related to Area of Sector.\n"
                  << std::endl;

        int cv;

        std::cout << "Enter the above value:";

        cin >> cv;

        //************************** 1 Radius and Diameter *****************************//

        if (cv == 1)
        {
            std::cout << "\nRadius and Diameter:-\n"
                      << std::endl;

            std::cout << "Enter 1 to find Radius of a Circle." << std::endl;

            std::cout << "Enter 2 to find Diameter of a Circle.\n"
                      << std::endl;

            int rd;
            std::cout << "Enter the above value:";
            cin >> rd;

            if (rd == 1)
            {

                std::cout << "\n To find: Radius = ?" << std::endl;

                double rdd;
                std::cout << "Diameter = ";
                cin >> rdd;

                double rdrsum = rdd / 2;

                cout<<"\nSoln:-\n"<<endl;
                cout<<"d/2 = r    ........(formula)"<<endl;
                cout<<rdd<<"/2 = r"<<endl;
                cout<<rdrsum<<endl;
                

                std::cout << "\nAns :- Radius of circle is " << rdrsum << std::endl;
                std::cout << "\n"
                          << std::endl;
            }

            else if (rd == 2)
            {

                std::cout << "\n To find: Diameter = ? " << std::endl;

                double ddd;
                std::cout << "Radius = ";
                cin >> ddd;

                double rddsum = ddd * 2;

                cout<<"\nSoln:-\n"<<endl;
                cout<<"r * 2 = d  .........(formula)"<<endl;
                cout<<ddd<<" * 2 = d"<<endl;
                cout<<rddsum<<" = d"<<endl;


                std::cout << "\nAns :- Diameter of Circle is " << rddsum << std::endl;
                std::cout << "\n"
                          << std::endl;
            }

            else
            {

                std::cout << "\n******************** EROR! *******************\n"
                          << std::endl;

                std::cout << "You have entered wrong value." << std::endl;
                std::cout << "Please enter above value.\n"
                          << std::endl;
            }
        }

        //************************** 2 Circumference of Circle *****************************//

        else if (cv == 2)
        {

            std::cout << "\nCircumference of Circle:-\n"
                      << std::endl;

            std::cout << "Enter 1 to find Circumference of the Circle." << std::endl;
            std::cout << "Enter 2 to find Radius of circle if Circumference is given." << std::endl;

            int cc;
            std::cout << "\nEnter the above value : ";
            cin >> cc;

            if (cc == 1)
            {
                std::cout << "\nTo find: Circumference = ? \n"
                          << std::endl;

                cout<<"Given:-"<<endl;

                double rcc;
                std::cout << "Radius = ";
                cin >> rcc;
                cout<<"Soln:-\n"<<endl;
                double rccsum = 2 * pie * rcc;

                cout<<"circumfernce of circle = 2 pie r .......(formula)"<<endl;
                cout<<"circumfernce = 2 * 3.14 * "<<rcc<<endl;
                cout<<"circumference = "<<rccsum<<endl;


                std::cout << "\nAns :- Circumference of the Circle is " << rccsum << std::endl;

                std::cout << "\n"
                          << std::endl;
            }

            else if (cc == 2)
            {
                std::cout << "\nTo find: Radius = ? " << std::endl;

                double dcc;
                std::cout << "\nCircumference = ";
                cin >> dcc;

                double dccsum = dcc / (2 * pie);

                std::cout << "\nAns :- Radius of the circle is " << dccsum << std::endl;
                std::cout << "\n"
                          << std::endl;
            }

            else
            {

                std::cout << "\n******************** EROR! *******************\n"
                          << std::endl;

                std::cout << "You have entered wrong value." << std::endl;
                std::cout << "Please enter above value.\n"
                          << std::endl;
            }
        }

        //************************** 3 Area of the Circle *****************************//

        else if (cv == 3)
        {

            std::cout << "\nArea of the Circle:-\n"
                      << std::endl;

            std::cout << "\nEnter 1 to find Area of Circle." << std::endl;
            std::cout << "Enter 2 to find Radius if Area of Circle is given." << std::endl;

            int ac;
            std::cout << "\nEnter the above value : ";
            cin >> ac;

            if (ac == 1)
            {
                std::cout << "\nTo find: Area of circle = ? \n"
                          << std::endl;
                double rac;
                std::cout << "Radius = ";
                cin >> rac;

                double racsum = pie * (rac * rac);

                std::cout << "\nAns :- Area of circle is " << racsum << std::endl;
                std::cout << "\n"
                          << std::endl;
            }

            else if (ac == 2)
            {
                std::cout << "\nTo find: Radius = ? \n"
                          << std::endl;

                double dac;
                std::cout << "Area of circle = ";
                cin >> dac;

                double dacsum = dac / pie;

                double sdac = sqrt(dacsum);

                std::cout << "\nAns :- Radius of circle is " << sdac << std::endl;
                std::cout << "\n"
                          << std::endl;
            }

            else
            {

                std::cout << "\n******************** EROR! *******************\n"
                          << std::endl;

                std::cout << "You have entered wrong value." << std::endl;
                std::cout << "Please enter above value.\n"
                          << std::endl;
            }
        }

        //************************** 4 Length of an Arc *****************************//

        else if (cv == 4)
        {

            std::cout << "\nLength of an Arc:-\n"
                      << std::endl;

            std::cout << "Enetr 1 to find Length of Arc." << std::endl;
            std::cout << "Enter 2 to find radius if length of arc is given." << std::endl;
            std::cout << "Enter 3 to find Theta.\n"
                      << std::endl;

            int la;
            std::cout << "Enter the above value:";
            cin >> la;

            std::cout << "\n"
                      << std::endl;

            if (la == 1)
            {
                std::cout << "To find: Length of Arc = ? \n"
                          << std::endl;

                double latheta;
                std::cout << "Enter the given theta: ";
                cin >> latheta;

                double laradius;
                std::cout << "\nEnter the value of radius:";
                cin >> laradius;

                std::cout << "\n"
                          << std::endl;

                double larsum = (latheta / 360) * 2 * pie * laradius;

                std::cout << "Ans :- Length of Arc is " << larsum << std::endl;

                std::cout << "\n"
                          << std::endl;
            }

            else if (la == 2)
            {

                std::cout << "\nTo find: Radius = ? \n"
                          << std::endl;

                double latheta1;
                std::cout << "Enter the given theta:";
                cin >> latheta1;

                double arclength;
                std::cout << "\nEnter the length of arc:";
                cin >> arclength;

                double arcsum = (arclength * 360) / (2 * pie * latheta1);

                std::cout << "\n Ans :- Radius of Circle is " << arcsum << std::endl;

                std::cout << "\n"
                          << std::endl;
            }

            else if (la == 3)
            {

                std::cout << "\nTo find: Theta = ?" << std::endl;

                std::cout << "\nEnter the value of Radius:";
                double laradius2;
                cin >> laradius2;

                std::cout << "\nEnter the Length of Arc:";
                double arclength2;
                cin >> arclength2;

                double thethasum = (arclength2 * 360) / (2 * pie * laradius2);

                std::cout << "\nAns :- Theta is " << thethasum << std::endl;

                std::cout << "\n"
                          << std::endl;
            }

            else
            {

                std::cout << "\n******************** EROR! *******************\n"
                          << std::endl;

                std::cout << "You have entered wrong value." << std::endl;
                std::cout << "Please enter above value.\n"
                          << std::endl;
            }
        }

        //************************** 5 Area of Sector *****************************//

        else if (cv == 5)
        {

            std::cout << "\nArea of Sector:-\n"
                      << std::endl;

            std::cout << "Enter 1 to find Area of Sector." << std::endl;
            std::cout << "Enter 2 to find Radius." << std::endl;
            std::cout << "Enter 3 to find Theta.\n"
                      << std::endl;

            int as;
            std::cout << "Enter the above value:";
            cin >> as;

            if (as == 1)
            {

                std::cout << "\nTo find: Area of sector = ?" << std::endl;
                std::cout << "\nEnter the given Theta:";

                double asthetha1;
                cin >> asthetha1;

                std::cout << "\nEnter the given Radius:";
                double asradius1;
                cin >> asradius1;

                double assum1 = (asthetha1 / 360) * pie * (asradius1 * asradius1);

                std::cout << "\nAns :- Area of Sector is " << assum1 << std::endl;

                std::cout << "\n"
                          << std::endl;
            }

            else if (as == 2)
            {

                std::cout << "\nTo find: Radius = ?\n"
                          << std::endl;

                std::cout << "Enter the given Theta:";
                double asthetha2;
                cin >> asthetha2;

                std::cout << "\nEnter the Area of Sector:";
                double asas1;
                cin >> asas1;

                double asrsum = (asas1 * 360) / (asthetha2 * pie);

                double asrsum1 = sqrt(asrsum);

                std::cout << "\nAns :- Radius is " << asrsum1 << std::endl;

                std::cout << "\n"
                          << std::endl;
            }

            else if (as == 3)
            {

                std::cout << "\nTo find: Theta = ? " << std::endl;
                std::cout << "\nEnter the radius = ";
                double asradius3;
                cin >> asradius3;

                std::cout << "\nEnter the Area of Sector = ";
                double asarea;
                cin >> asarea;

                double assum3 = (asarea * 360) / (pie * asradius3 * asradius3);

                std::cout << "\nAns :- Theta is " << assum3 << std::endl;

                std::cout << "\n"
                          << std::endl;
            }

            else
            {
                std::cout << "\n******************** EROR! *******************\n"
                          << std::endl;

                std::cout << "You have entered wrong value." << std::endl;
                std::cout << "Please enter above value.\n"
                          << std::endl;
            }
        }

        //************************** Eror *****************************//

        else
        {
            std::cout << "\n******************** EROR! *******************\n"
                      << std::endl;

            std::cout << "You have entered wrong value." << std::endl;
            std::cout << "Please enter above value.\n"
                      << std::endl;
        }

        break;

        //***************************** SQUARE *********************************//

    case 2:

        std::cout << "\n******************** SQUARE *******************\n"
                  << std::endl;

        break;

        //***************************** TRIANGLE *********************************//

    case 3:

        std::cout << "\n******************** TRIANGLE *******************\n"
                  << std::endl;

        break;

        //***************************** RECTANGLE *********************************//

    case 4:

        std::cout << "\n******************** RECTANGLE *******************\n"
                  << std::endl;

        break;

        //***************************** EROR *********************************//

    default:

        std::cout << "\n******************** EROR! *******************\n"
                  << std::endl;

        std::cout << "You have entered wrong value." << std::endl;
        std::cout << "Please enter above value.\n"
                  << std::endl;

        break;
    }

    return 0;
}