#ifndef MODELS_H
#define MODELS_H 

#include <iostream>
#include <string>
#include <stdexcept>
#include <chrono>

/**
 * @brief User class to keep user's data.
 * @param id [std::string]
 * @param password [std::string]
*/
class User {
private:
    std::string id;
    std::string password;
public:
    /**
     * @brief Constructor for the User class.
     * @param id [std::string]
     * @param password [std::string]
    */
    User(std::string, std::string password);
    void setId(std::string id);
    void setPassword(std::string password);
    std::string getId() const;
    std::string getPassword() const;
};

/**
 * @brief Message class to keep message data.
 * @param timestamp [chrono::system_clock::time_point]
 * @param text [std::string]
*/
class Message {
private:
    std::string text;
    std::chrono::system_clock::time_point timestamp;
    bool read = false;
public:
    /**
     * @brief Constructor of the Message class.
     * @param text [std::string]
    */
    Message(std::string text);
    void setRead(bool read);
    std::string getText() const ;
    std::chrono::system_clock::time_point getTimestamp() const;
    bool getRead();
};

#endif // MODELS_H