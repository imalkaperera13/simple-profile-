#ifndef PROFILE_HPP
#define PROFILE_HPP

#include <string>
#include <vector>

class Profile {
private:
    std::string name;
    int age;
    std::string city;
    std::string country;
    std::string pronouns;
    std::vector<std::string> hobbies;

public:
    // Constructor to initialize Profile attributes
    Profile(std::string name, int age, std::string city, std::string country, std::string pronouns);

    // Getter methods
    std::string getName() const;
    int getAge() const;
    std::string getCity() const;
    std::string getCountry() const;
    std::string getPronouns() const;
    std::vector<std::string> getHobbies() const;

    // New methods
    std::string view_profile() const;   // Method to return full profile information as a string
    void add_hobby(const std::string& new_hobby);   // Method to add a hobby
};

#endif
