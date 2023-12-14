#include <models.h>

User::User(std::string, std::string password) {   
    // ID validation
    if (id.size() != 6){
        throw std::invalid_argument("The ID should consist of exactly 6 characters");
    }
    // Password validation
    if (password.size() < 8){
        throw std::invalid_argument("The Password should consist of more than 8 characters");
    }
    this->id = id;
    this->password = password;
}

void User::setId(std::string id) {
    this->id = id;
}

void User::setPassword(std::string password) {
    this->password = password;
}

std::string User::getId() const {
    return this->id;
}

std::string User::getPassword() const {
    return this->password;
}

Message::Message(std::string text) : text(text){
    timestamp = std::chrono::system_clock::now();
}

void Message::setRead(bool read){
    this->read = read;
}

std::string Message::getText() const {
    return this->text;
}

std::chrono::system_clock::time_point Message::getTimestamp() const {
    return this->timestamp;
}

bool Message::getRead(){
    return this->read;
}