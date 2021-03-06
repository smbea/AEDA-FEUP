#ifndef PROJAEDA_USEFULFUNCTION_H
#define PROJAEDA_USEFULFUNCTION_H

#include <string>

using namespace std;

/**
 * @brief Verifies if input given by user is between lowerL and upperL.
 * @param lowest input int possible
 * @param highest input int possible
 * @param input entered by user
 * @return 0 if success, 1 otherwise
 */
bool ValidMenuInput(int lowerL, int upperL, int input);

/**
 * @brief Clears screen. 
 */
void ClearScreen();

/**
 * @return Actual date.
 */
string getActualDate();

/**
 * @brief Divide string.
 * @param char_to_find
 * @param line
 * @return
 */
string divideString(char char_to_find, string & line);

/**
 * brief Ask to the user to insert a new date.
 * @return new date
 */
string insertDate();

#endif //PROJAEDA_USEFULFUNCTION_H
