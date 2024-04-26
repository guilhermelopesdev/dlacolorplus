/*  Library: dlacolor.h
 *  Creator: Guilherme Lopes
 *  Date: 14 - 11 - 2023
 *  Example: code
 */

#include <dlacolor.h> // Imports from library to code

pinrgb led1 (3, 5, 6); // Define the LED's RGB terminals by order (R, G, B)

void setup() {

}

void loop() {
  led1.code(1); // Set the blue color through the ViCo color list
}