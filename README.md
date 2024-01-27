# Emper - Employee Management System

## Overview

Welcome to Emper, an advanced employee management solution meticulously engineered with the expertise of QT and C++. This project represents a pinnacle of sophistication, combining cutting-edge data structures and algorithms to deliver unrivaled efficiency in the realm of employee management.

## Key Features

### Intuitive User Interface
Emper provides a seamless employee record management experience within an intuitive user interface. Execute operations such as insertion, deletion, and updates with precision, ensuring each change seamlessly integrates with a robust SQLite database, promoting an organized and efficient workflow.

### Export to Text File
Experience unparalleled convenience by exporting results to a text file. Every transaction is meticulously documented, enhancing the transparency and traceability of all interactions within the application.

### Manage Employee Records
Effortlessly manage employee records within Emper's intuitive user interface. Add new employees, delete existing records, and update employee information—all seamlessly integrated with the SQLite database, ensuring data accuracy and integrity.

### Advanced Search and Filtering
Utilize the power of advanced search functionalities based on employee names or salaries. Emper empowers users to effortlessly calculate and display average salaries, with filtering options that present employees above or below the calculated average. This feature provides a sophisticated and insightful display, facilitating data-driven decision-making.

### Sorting Capabilities
Immerse yourself in the excitement of sorting employee records with precision. Whether in ascending or descending order, Emper orchestrates a refined presentation of data, enhancing the user's ability to glean meaningful insights from the dataset.

### Data Integrity and Validation
Emper places a paramount emphasis on data integrity and validation processes. Errors are meticulously logged into a dedicated text file, ensuring a robust and error-free operation. This commitment to quality control safeguards the reliability of the data within the SQLite database.

## Getting Started

1. **Clone the Repository:**
   - Open a terminal window and run the following command to clone the repository to your local machine:
     ```bash
     git clone https://github.com/FreddyAssaf/Emper.git
     ```
2. **Installation:**
   - Navigate to the cloned directory:
     ```bash
     cd Emper
     ```
   - Build the project using QT and C++.

3. **Launch the Application:**
   - Start the Emper application.
   - The intuitive user interface welcomes you to seamless employee management.

4. **Insert and View Employees:**
   - Click on the "Insert & View" tab.
   - Insert a new employee by providing a unique ID, name, salary, etc.
   - The table view is automatically updated to reflect the inserted employee in the database.
   - Update an employee by inserting the employee's ID and the new data to be updated.
   - Delete a specific employee by providing their unique ID.
   - Export the updated data to a text file for future reference.

5. **Manage Employee Data:**
   - Click on the "Manage" tab.
   - Choose from the following options:
     - **Search by Employee ID:**
       - Enter the ID of the employee to view their details on the table view.
     - **Search by Salary:**
       - Search for employees who earn a specific salary.
     - **Calculate Average Salary:**
       - Calculate and display the average salary of all employees.
     - **View Employees Above or Below Average:**
       - View employees who earn more or less than the calculated average.
     - **Sort Employees by Salary:**
       - Sort employees in ascending or descending order based on their salaries.
       - 
## Screenshots

For a visual preview of Emper, please refer to the [Screenshots-Emper](Screenshots-Emper/) folder.


## Additional Notes

Emper uses SQLite database, locate the cpp code responsible for the path of the database file and change it to your database file's path. Rebuild and run Emper.
## Contributing


Contributions to this project are welcome. If you'd like to contribute or report any issues, please follow these guidelines:

1. Fork the repository on GitHub.
2. Create a new branch with a descriptive name.
3. Make your changes or bug fixes.
4. Test your changes thoroughly.
5. Create a pull request, explaining the changes you made.

