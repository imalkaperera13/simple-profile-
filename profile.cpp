#include "profile.hpp"
#include <sstream> // For building the profile string

// Constructor to initialize profile attributes
Profile::Profile(std::string name, int age, std::string city, std::string country, std::string pronouns)
    : name(name), age(age), city(city), country(country), pronouns(pronouns) {}

// Getter methods
std::string Profile::getName() const { return name; }
int Profile::getAge() const { return age; }
std::string Profile::getCity() const { return city; }
std::string Profile::getCountry() const { return country; }
std::string Profile::getPronouns() const { return pronouns; }
std::vector<std::string> Profile::getHobbies() const { return hobbies; }

// Method to return profile details as a string
std::string Profile::view_profile() const {
    std::ostringstream profile;
    profile << "Name: " << name << "\n";
    profile << "Age: " << age << "\n";
    profile << "City: " << city << "\n";
    profile << "Country: " << country << "\n";
    profile << "Pronouns: " << pronouns << "\n";
    profile << "Hobbies:\n";
    for (const auto& hobby : hobbies) {
        profile << "- " << hobby << "\n";
    }
    return profile.str();
}

// Method to add a hobby to the profile
void Profile::add_hobby(const std::string& new_hobby) {
    hobbies.push_back(new_hobby);
}
