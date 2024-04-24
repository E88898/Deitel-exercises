#include <iostream>

void bubbleSort(int bubbles[], int BUBBLES_QUANTITY);
void printBubblesOrder(int bubbles[], int BUBBLES_QUANTITY);

int main()
{
    const int BUBBLES_QUANTITY = 9;
    int bubbles[BUBBLES_QUANTITY] = { 101, 12, 21, 13, 31, 14, 41, 15, 51 };
    std::cout << "Bubbles before sorting." << std::endl;
    printBubblesOrder(bubbles, BUBBLES_QUANTITY);
    std::cout << std::endl;
    bubbleSort(bubbles, BUBBLES_QUANTITY);
    std::cout << "Bubbles after sorting." << std::endl;
    printBubblesOrder(bubbles, BUBBLES_QUANTITY);
    std::cout << std::endl;
    return 0;
}

void bubbleSort(int bubbles[], int BUBBLES_QUANTITY)
{
    for (int itemNumber = 1; itemNumber < BUBBLES_QUANTITY; ++itemNumber) {
        const int nextItem = bubbles[itemNumber];
        int moveItem = itemNumber;
        while ((moveItem > 0) && (bubbles[moveItem - 1] > nextItem)) {
            bubbles[moveItem] = bubbles[moveItem - 1];
            --moveItem;
        }
        bubbles[moveItem] = nextItem;
    }
}

void printBubblesOrder(int bubbles[],int BUBBLES_QUANTITY)
{
    for (int counter = 0; counter < BUBBLES_QUANTITY; ++counter) {
        std::cout << bubbles[counter] << "  ";
    }
}