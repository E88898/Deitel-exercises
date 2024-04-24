#include <iostream>


int main()
{
    ///a.
    int t[2][3];
    std::cout << "a. Declared 2-by-3 array as t." << std::endl;
    ///b.
    std::cout << "b. There are 2 rows in t." << std::endl;
    ///c.
    std::cout << "c. There are 3 columns in t." << std::endl;
    ///d.
    std::cout << "d. There are rows multiplied columns (2 * 3 = 6) elements in t." << std::endl;
    ///e.
    std::cout << "e. Row 1 elements are t[0][0], t[0][1] and t[0][2]." << std::endl;
    ///f.
    std::cout << "f. Column 2 elements are t[0][1] and t[1][1]." << std::endl;
    ///g.
    t[0][1] = 0;
    std::cout << "g. Row 1 column 2 element is set to 0." << std::endl;
    ///h.
    t[0][0] = 0;
    t[0][1] = 0;
    t[0][2] = 0;
    t[1][0] = 0;
    t[1][1] = 0;
    t[1][2] = 0;
    std::cout << "h. All elements of t are set to 0 without using loops." << std::endl;
    ///i.
    for (int row = 0; row < 2; ++row) {
        for (int column = 0; column < 3; ++column) {
            t[row][column] = 0;
        }
    }
    std::cout << "i. All elements of t are set to 0 with loops." << std::endl;
    ///j.
    std::cout << "j. Enter values for all elements in t." << std::endl;
    for (int row = 0; row < 2; ++row) {
        for (int column = 0; column < 3; ++column) {
            std::cout << '\t';
            std::cin >> t[row][column];
        }
    }
    ///k.
    int smallest = t[0][0];
    for (int row = 0; row < 2; ++row) {
        for (int column = 0; column < 3; ++column) {
            if (smallest > t[row][column]) {
                smallest = t[row][column];
            }
        }
    }

    std::cout << "k. The smallest value in t is " << smallest << std::endl;
    ///l.
    std::cout << "l. The ellements of t's first row are below." << std::endl;
    for (int column = 0; column < 3; ++column) {
        std::cout << '\t' << t[0][column] << std::endl;
    }
    ///m.
    int sum = 0;
    for (int row = 0; row < 2; ++row) {
        sum += t[row][2];
    }
    std::cout << "m. The sum of column 3 elements is " << sum << std::endl;
    ///n.
    std::cout << "n.\t0\t1\t2\n" << std::endl;
    for (int row = 0; row < 2; ++row) {
        std::cout << row;
        for (int column = 0; column < 3; ++column) {
            std::cout << '\t' << t[row][column];
        }
        std::cout << std::endl;
    }
    return 0;
}

