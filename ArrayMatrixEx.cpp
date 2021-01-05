#include "Exercises.h"

#include <iostream>

int main()
{
    int pick{}, index;

    do 
    {
        std::cout << "Options:\n1. Arrays(Vectori)\n2. Matrix(Matrice)\n3.Exit\n"; std::cin >> pick;
        index = 0;

        switch (pick) {
        case 1:
            do
            {
                std::cout << "\nOptions:\n1. Exercise 01\n2. Exercise 02\n3. Exercise 03\n4. Exercise 04\n" <<
                    "5. Exercise 05\n6. Exercise 06\n7. Exercise 07\n8. Exercise 08\n" <<
                    "9. Exercise 09\n10. Exercise 10\n11. Exercise 11\n12. Exercise 12\n" <<
                    "13. Exercise 13\n14. Exercise 14\n15. Exercise 15\n16. Exercise 16\n" <<
                    "17. Exercise 17\n18. Exercise 18\n19. Exit\n"; std::cin >> index;

                switch (index) 
                {
                case 1:
                    VecOne();
                    break;
                case 2:
                    VecTwo();
                    break;
                case 3:
                    VecThree();
                    break;
                case 4:
                    VecFour();
                    break;
                case 5:
                    VecFive();
                    break;
                case 6:
                    VecSix();
                    break;
                case 7:
                    VecSeven();
                    break;
                case 8:
                    VecEight();
                    break;
                case 9:
                    VecNine();
                    break;
                case 10:
                    VecTen();
                    break;
                case 11:
                    VecEleven();
                    break;
                case 12:
                    VecTwelve();
                    break;
                case 13:
                    VecThirteen();
                    break;
                case 14:
                    VecFourTeen();
                    break;
                case 15:
                    VecFifteen();
                    break;
                case 16:
                    VecSixteen();
                    break;
                case 17:
                    VecSeventeen();
                    break;
                case 18:
                    VecEighteen();
                    break;
                case 19:
                    std::cout << "Exiting...\n";
                    break;
                default:
                    std::cout << "Number isn't available. Try again.\n";
                }
            } while (index != 19);
            break;

        case 2:
            do
            {
                std::cout << "\nOptions:\n1. Exercise 01\n2. Exercise 02\n3. Exercise 03\n4. Exercise 04\n" <<
                    "5. Exercise 05\n6. Exercise 06\n7. Exercise 07\n8. Exercise 08\n" <<
                    "9. Exercise 09\n10. Exercise 10\n11. Exercise 11\n12. Exercise 12\n" <<
                    "13. Exercise 13\n14. Exit\n"; std::cin >> index;

                switch (index)
                {
                case 1:
                    MatOne();
                    break;
                case 2:
                    MatTwo();
                    break;
                case 3:
                    MatThree();
                    break;
                case 4:
                    MatFour();
                    break;
                case 5:
                    MatFive();
                    break;
                case 6:
                    MatSix();
                    break;
                case 7:
                    MatSeven();
                    break;
                case 8:
                    MatEight();
                    break;
                case 9:
                    MatNine();
                    break;
                case 10:
                    MatTen();
                    break;
                case 11:
                    MatEleven();
                    break;
                case 12:
                    MatTwelve();
                    break;
                case 13:
                    MatThirteen();
                    break;
                case 14:
                    std::cout << "Exiting...";
                    break;
                default:
                    std::cout << "Number isn't available. Try again.";
                }
            } while (index != 14);
            break;

        case 3:
            std::cout << "Exiting...\n";
            break;

        default:
            std::cout << "Number isn't available, pick again.\n";
        }

    } while (pick != 3);
}

