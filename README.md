## CSV File Reader Program

This simple C program reads a CSV file, parses the data on each line, and prints it to the console.

### Usage

To run the program, use the following command in a terminal or command prompt:

./program_name csv_file_path


Here, `csv_file_path` is the full path and name of the CSV file you want to process.

Example:
./program_name test.csv


### CSV File Format

The program can read any CSV file with comma-separated values. The data on each line is printed separately to the console.

### Sample
529.6
47.2
560.92
32.21
1.5
-0.2
0
388.5
-7.5
22
22
84.2
97.5
8
90
0
0
85
1.56
1
0
0
31
0
0
0
5
23.84


### Notes

- The program splits each line of the file using the ';' character. If you use a different delimiter, you can update the code accordingly.
- The program prints the data on each line to the console, with a counter added for each line.

### Test CSV File

The provided CSV file, "test.csv", is downloaded from [this Kaggle dataset](https://www.kaggle.com/datasets/atechnohazard/battery-and-heating-data-in-real-driving-cycles?select=TripA01.csv).

Feel free to customize this README file to fit your specific program's details, such as the actual file name and program name.
