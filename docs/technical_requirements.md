# 1. Project Goal

This project aims to create a robust socket-based chat system to meet the practical communication needs of users. The primary objective is to develop a well-documented solution that facilitates secure and seamless messaging between multiple users. Key functionalities include the establishment of secure socket connections, support for multi-user interactions, and the implementation of effective error handling, potentially complemented by an intuitive graphical user interface for an enhanced user experience.

# 2. System Description

The system consists of the following main functional blocks:

- Server-Side

 1. Registration, Authentication and Authorization.
 2. Basic chat functional (Write message, Read messages).
 3. Read Messages and Status (Online/Offline).

- Client-Side

 1. User Interface.
 2. Notifications.

## 2.1 Chat Types

The system provides for two types of chat: Private (one on one chat) an d Group chats (so called Chat Room in project description, chat with more than one person).

## 2.2 Registration

- email (still being discussed maybe telephone number)
- password

## 2.3 Authentication

Authentication of user carried by email (still discussed maybe used login) and password were given during registration.

## 2.4 Messages

Implement a character limit per message to ensure efficient data transmission and prevent potential performance issues.

**Metadata:**

- Sender
- Recipient(s)
- Timestamp
- Message Content

There no multimedia support (yet).

### 2.4.1 Real-Time Updates

Real-Time Update indicating status of message (Sent/Delivered/Read), to provide to users feedback.

### 2.4.2 Concurrency Handling

Implement measures to handle concurrent message sending to prevent conflicts and ensure the orderly delivery of messages.

## 2.5 User Functional

After authentication (entering login and password), the user gains access to his author functionality in the System. This functionality consists of the following:

1. Sending Messages
2. Receiving Messages
3. Edit Profile Data

### 2.5.1 Sending and Receiving Messages

The system must enable users to send text messages to one or more recipients within the chat application. Utilize a standardized messaging protocol to ensure consistent and interoperable communication between clients and the server.

### 2.5.2 Edit Profile Data

In this section, the user has the opportunity to edit his profile data - email (phone number), bio, login, password.

## 2.6 Error Handling and Logging

Define error codes and messages for potential issues during message transmission, ensuring informative and actionable feedback for users and developers.
Implement logging mechanisms to capture relevant information about sent messages for auditing purposes and debugging.

# 3. Proposed technology stack

To implement the system, the following technology stack is proposed:

- **Backend:**
  - Language C++
  - Framework Crow
  - DB MariaDB
  - ODB ORM
- **Frontend:**
  - (still in development for now only CLI)
