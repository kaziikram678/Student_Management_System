# Student Management System

## Overview
The Student Management System is a console-based C++ program designed to handle basic operations for managing student information. This program allows users to perform various tasks such as adding, viewing, editing, and deleting student records. It also provides functionality for sorting records, viewing students by department or section, and more.

## Features
1. Add a Student:
   - Add new student details, including ID, name, section, and department.

2. View a Specific Student:
   - Search for and display a student’s information using their ID.

3. View All Students:
   - Display the details of all students currently stored in the system.

4. View Students by Department:
   - Display all students belonging to a specified department.

5. View Students by Section:
   - Display all students belonging to a specific section.

6. Delete a Student Record:
   - Remove a student’s information from the system using their ID.

7. Edit Student Information:
   - Modify a student’s name, department, or section.

8. Sort Student Records:
   - Sort all student records based on their IDs.

9. Exit the Program:
   - Safely terminate the program.

## How to Run
1. Ensure you have a C++ compiler (e.g., GCC) installed on your system.
2. Clone this repository:
   ```bash
   git clone <repository-url>
   ```
3. Navigate to the project directory:
   ```bash
   cd student-management-system
   ```
4. Compile the program:
   ```bash
   g++ -o student_management student_management.cpp
   ```
5. Run the program:
   ```bash
   ./student_management
   ```

## Usage Instructions
1. Upon starting the program, you will be prompted to input the number of students to admit initially.
2. Follow the menu options to perform various tasks, such as adding new students, searching for records, editing data, etc.
3. To terminate the program, select the exit option from the menu.

## Example
```bash
Enter how many students do you want to admit?
3
      1------->ID: 101
               Name: Alice
               Section: A
               Department: CSE

      2------->ID: 102
               Name: Bob
               Section: B
               Department: EEE

      3------->ID: 103
               Name: Charlie
               Section: A
               Department: CSE

===================

# Menu Options:
* Press 1 to add a student.
* Press 2 to see a student.
* Press 3 to see all students.
* Press 9 to exit the program.
```

## Code Structure
- Class: `student`
  - Represents the student object containing attributes such as ID, name, section, and department.
- Functions:
  - `admission(int m)`: Initializes the program with the first batch of students.
  - `add_student()`: Adds a new student.
  - `show_student(int i)`: Displays a specific student’s details.
  - `show_all_student()`: Displays all students.
  - `show_a_student()`: Searches and displays a student by ID.
  - `see_department()`: Displays students of a specific department.
  - `see_section()`: Displays students of a specific section.
  - `Search(int sea)`: Searches for a student by ID.
  - `Delete(int s)`: Deletes a student record.
  - `edit(int s)`: Edits student information.
  - `Sort()`: Sorts all student records by ID.

## Limitations
1. The program uses static memory allocation with a fixed size of 1,000,000 for the student array.
2. It relies on console-based input and output, limiting usability.
3. No file handling; data is not saved between sessions.

## Future Improvements
1. Implement dynamic memory allocation for handling a variable number of students.
2. Add file handling to save and retrieve data between program runs.
3. Introduce error handling for invalid inputs.
4. Create a graphical user interface (GUI) for better user experience.

## Contribution
Contributions are welcome! If you have suggestions or improvements, feel free to fork the repository and submit a pull request.

