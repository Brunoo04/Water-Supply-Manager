#ifndef AEDPROJ2_COLOR_PRINT_H
#define AEDPROJ2_COLOR_PRINT_H

#include <string>

/**
 * \class Color_Print
 * \brief A custom class to handle prints with colors.
 *
 * This class can print to the console with or without colors.
 */
class Color_Print {
public:
    /**
     * \brief Prints the given string with the given colors.
     *
     * @param color The color of the letters, if applicable.
     * @param line The string to print.
     */
    Color_Print(std::string color, std::string line);
};


#endif //AEDPROJ2_COLOR_PRINT_H
