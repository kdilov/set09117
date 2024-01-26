import sys

boolVar =  bool(True)
intVar = int(3232)
floatVar = float(213.211)
strVar = str("Hello world!")

print("Size of Integer Variable is " , sys.getsizeof(intVar)," bytes \n")
print("Size of Float Variable is " , sys.getsizeof(floatVar)," bytes \n")
print("Size of String Variable is " , sys.getsizeof(strVar)," bytes \n")
print("Size of Bool Variable is " , sys.getsizeof(boolVar)," bytes \n")