#include "profile.hpp"
#include <iostream>

int main() {
    // Create a Profile for Sam
    Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");

    // Add hobbies
    sam.add_hobby("listening to audiobooks and podcasts");
    sam.add_hobby("playing rec sports like bowling and kickball");
    sam.add_hobby("writing a speculative fiction novel");
    sam.add_hobby("reading advice columns");

    // Print Sam's complete profile information
    std::cout << sam.view_profile();

    return 0;
}
