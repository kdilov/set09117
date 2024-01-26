# Define the initial number of modules 
num_modules = 6

# Create a list to store grades
grades = []

# Input grades for each module
print("Enter your grades for each module: ")

for i in range(num_modules):
    grade = float(input(f"Module {i+1}: "))
    grades.append(grade)

print("\n Your grades are: ")
for i, grade in enumerate(grades):
    print(f"Module {i+1}: {grade}")
    

