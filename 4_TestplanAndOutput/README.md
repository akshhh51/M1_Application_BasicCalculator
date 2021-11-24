**TEST PLAN**

**High Level test plan**


|Test id|Description|Exp I/p|Exp o/p|Actual out|Type of test|
| - | - | - | - | - | - |
|H\_01|Checking all the operation modes are executing properly|Checking all the operation modes are executing properly|All the modes of operation are executed correctly|Obtained the required results|Requirement based|
|H\_02|Checking whether all the operations are performed according to the selection in each operation modes|By choosing the operand or option in each mode according to the function|All the functions are executed and obtained the correct results|Obtained the required results for all the functions|Scenario based|
|H\_03|Checking for other operations other than specified in the program|By choosing other values that are not mentioned|"Enter the valid option", is to be printed|Obtained the required results|Boundary based|

**Low Level test plan**


|Test id|Description|Exp I/p|Exp o/p|Actual out|Type of test|
| - | - | - | - | - | - |
|L\_01|checking the result obtained for addition, subtraction, multiplication, division|By giving different values|Correct answer according to the input values|Obtained the required results for all the operations|Requirement based|
|L\_02|Checking whether adding negative number results the correct value|By giving num1 or num2 or both as negative values|Correct answer according to the input values and operator|Obtained the correct results|Scenario based|
|L\_03|Checking whether subtracting negative number results the correct value|By giving num1 or num2 or both as negative values|Correct answer according to the input values and operator|Obtained the correct results|Scenario based|
|L\_04|Checking whether subtracting larger number from smaller number results the correct value|By giving first operand value smaller than the second|Correct answer according to the input values and operator|Obtained the required results|Scenario based|
|L\_05|Checking whether multiplication of negative number results the correct value|By giving num1 or num2 or both as negative values|Correct answer according to the input values and operator|Obtained the required results|Scenario based|
|L\_06|Checking whether dividing by zero results an error|By giving num2 = 0|Printing the message as, "Error, Number cannot be divided by zero"|Obtained correct results|Requirement based|
|L\_07|Checking whether exit option works properly or not|By selecting the correct option|Screen should be closed|Screen closed properly|Scenario based|



