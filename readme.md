# Project 3




## Summary of the code
This code is a program that reads in a file containing a list of groceries, constructs a list of Grocery objects from that file, and then presents a menu that allows the user to search for a specific item, print a frequency list of all the items in the file, or print a histogram of the items in the file using "*" symbols.
The Grocery class has a constructor and accessor/mutator methods for the item name and quantity. The main function uses these methods to manipulate the list of Grocery objects. The backupData function writes all the Grocery objects to a file named "frequency.dat". The readGroceriesFromFile function reads in the input file and constructs the list of Grocery objects using a map to count the number of times each item appears in the file.
The program presents a menu with options to the user. Option 1 allows the user to search for a specific item by name and returns the number of times that item appears in the file. Option 2 prints a frequency list of all the items in the file, showing the item name and the number of times it appears in the file. Option 3 prints a histogram of the items in the file using "*" symbols, where each item is represented by its name and the number of "*" symbols corresponding to the number of times that item appears in the file. Option 4 exits the program.


# Screenshot
![image](https://user-images.githubusercontent.com/77599942/221477255-3cd996ab-085f-4384-9ef0-1f29f24b5d88.png)

