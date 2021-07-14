## Test Results

# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |  
|-------------|--------------------------------------------------------------|------------|-------------|----------------|
|H_01|Check input of best lap time of Free Practice | Positive integer number in seconds | Ask for Qualifications details | PASS |
|H_02|Check input of best lap time of Qualyfication  |Positive integer number in seconds | Ask for Qualifications details and Tyre used | PASS|
|H_03|Check Qualification position obtained | Positive integer number having position obtained| Boolean showing qualified for next round or not|PASS|
|H_04| Selecting track Input Number is availabe or not|  Positive integer number having track id | Display Trackdata facts from file |PASS|
|H_05| Check input for Tyre Seletion| enum TyreCompound |Ask for tyre lap age used in Q1 |PASS|
|H_05| Check input for Tyre lap age used for Q1 | Positive integer Q1 tyre lap age |Procedd to strategy computation |PASS|


## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|
|L_01|H_01|Check input of best lap time of Free Practice 1 | Positive integer number in seconds | Ask for best lap time of Free Practice 2  | PASS |
|L_02|H_01|Check input of best lap time of Free Practice 2 | Positive integer number in seconds | Ask for best lap time of Free Practice 1 | PASS |
|L_03|H_01|Check input of best lap time of Free Practice 3 | Positive integer number in seconds | Ask for best lap time of Free Practice 2  | PASS |
|L_04|H_02|Check input of best lap time of Qualyfing session 1 |Positive integer number in seconds | Ask for best lap time of Qualyfing session 2 | PASS|
|L_05|H_02|Check input of best lap time of Qualyfing session 2 |Positive integer number in seconds | Ask for best lap time of Qualyfing session 3 | PASS|
|L_06|H_02|Check input of best lap time of Qualyfing session 3 |Positive integer number in seconds | Ask for best lap time of Qualyfing session 2 | PASS|
|L_07|H_03|Check Qualification position obtained in Q1 | Positive integer number < 16 i.e Qualified for next Q2|Boolean showing qualified for Q2 or not |PASS|
|L_08|H_03|Check Qualification position obtained in Q2 | Positive integer number < 11 i.e Qualified for Q3|Boolean showing qualified for Q1 or not |PASS|
|L_09|H_04|Check track Input Number is availabe or not in the file |Positive integer number having track id |Display Trackdata facts from file |PASS|
|L_10|H_05|Check input for Tyre lap age used for Q1|Positive integer Q1 tyre lap age|Proceed to strategy computation|PASS|


![TEST RESULTS](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/blob/Production/4_TestPlanAndOutput/Screenshot%202021-07-13%20164235.jpg)

![CORRECT EXECUTION RESULTS](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/blob/Production/6_ImagesAndVideos/F1-Pitstop-Strategy-Generator-16.gif)

<!-- ## When user gives wrong inputs


![WRONG INPUTS](https://github.com/)

## When there is overflow/underflow error


![underflow error](https://github.com)

# When user tries to quit

![QUIT](https://github.com/)

# Outputs

![TEST RESULTS](https://github.com/)

![TEST RESULTS](https://github.com/)
{"mode":"full","isActive":false} -->
