# Requirements

## Introduction

- Unit conversion is used in daily life for research purposes, education purposes, manufacturing, and in many other fields. So it is necessary to have software that can help in the accurate and fast conversion of units from one to another.
- I chose this topic to build a light and reliable application for unit conversion purposes.

## Process Overview

The process of conversion depends on the specific situation and the intended purpose. This may be governed by regulation, contract, technical specifications, or other published standards. Engineering judgment may include such factors as:

- The precision and accuracy of measurement and the associated uncertainty of measurement.
- The statistical confidence interval or tolerance interval of the initial measurement.
- The number of significant figures of the measurement.
- The intended use of the measurement including the engineering tolerances.
- Historical definitions of the units and their derivatives used in old measurements; e.g., international foot vs. US survey foot.

Some conversions from one system of units to another need to be exact, without increasing or decreasing the first measurement's precision. This is sometimes called **soft conversion**. It does not involve changing the physical configuration of the item being measured.

By contrast, a **hard conversion** or an **adaptive conversion** may not be exactly equivalent. It changes the measurement to convenient and workable numbers and units in the new system. It sometimes involves a slightly different configuration, or size substitution, of the item. Nominal values are sometimes allowed and used.

## Research

### Benefits

- Lightweight and can be accessed from any device
- Help researchers: It can help them find results with high accuracy of different unit types
- Fast: Compute the results within a fraction of seconds
- Education: Students can be benefitted from this. They can use it for learning purposes.

### AGE

| 1960s                                                                   | 1980s                                                                     | 2000                                                                                    | Present                                                                                                                   |
| ----------------------------------------------------------------------- | ------------------------------------------------------------------------- | --------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------- |
| Calculators with small keyboards having paper tapes for output display. | Calculator with 12-digit display in red LED and with integrated circuits. | Introduction of graphing calculators, affordable, dual powered with the liquid display. | Advanced calculators which can handle higher-level math which is ideal for everything from economics to computer science. |

### COST

| 1960s     | 1980s     | 2000    | Present |
| --------- | --------- | ------- | ------- |
| 360$-400$ | 700$-800$ | 20$-30$ | 10$-12$ |

## Defining Our System

- Assumptions

  - Data filled or expected result cannot be greater than maximum data that a data type can store.
  - User knows what he/she wants from the application

- Explanation
  - Firstly unit type should be selected
  - Secondly **from** and **to** value should be selected
  - Then, operand should be filled and at last press enter to find the result

## SWOT ANALYSIS

![SWOT Analysis](https://github.com/KrShivanshu/CMiniProject/blob/main/6_ImagesAndVideos/Requirements/SWOT%20Analysis.jpg)

## 4W&#39;s and 1&#39;H

## Who

- For researchers, manufactures, educators and students.

## What

- A unit converter is a tool used to convert a unit from one to another like Kilometer to Meter, Celsius to Kelvin, etc.

## Where

- Can be used in manufacturing companies, schools, colleges, examination halls, and research labs.

## When

- When we want to find the value (X Celsius in Fahrenheit), (Y kilometers in meter), etc.

## How

- Run the application, fill the options, give the value and find the result.

## Detail requirements

### High Level Requirements

| ID   | Description                                                                                                                                     | Category       | Status (Implemented/ InProgress/ Future) |
| ---- | ----------------------------------------------------------------------------------------------------------------------------------------------- | -------------- | ---------------------------------------- |
| HR01 | Able to convert any units like length, temperature, volume, weight, area, and time                                                              | Functional     | Implemented                              |
| HR02 | In any situation, the calculator must produce a correct result defined by the well-known arithmetic rules.                                      | Functional     | Implemented                              |
| HR03 | User to resolve the errors if the calculation for conversions is impossible, then the convertor must display information helping the situation. | Non-Functional | Future                                   |
| HR04 | After performing one calculation user can perform another calculation by using the result obtained in the previous calculation.                 | Functional     | InProgress                               |

### Low level Requirements

| ID     | Description                                                                                          | HLR ID     | Status (Implemented/ InProgress/ Future) |
| ------ | ---------------------------------------------------------------------------------------------------- | ---------- | ---------------------------------------- |
| LR01   | Can display options for selecting the unit type and receive input for it                             | HR01       | Implemented                              |
| LR02   | Can display options for a unit to be converted **from** and receive input for it                     | HR01       | Implemented                              |
| LR03   | Able to give options to select the unit to be converted **to** and successively receive input for it | HR01       | Implemented                              |
| LR04   | Recieve input for an operand to be converted                                                         | HR01       | Implemented                              |
| LR05   | Able to compute, convert and display the results                                                     | HR01       | Implemented                              |
| LR06   | Should calculate the result up to minimal decimal point                                              | HR02       | Implemented                              |
| LR06.1 | Shouldn't round off the answer and display the result with accuracy & precision                      | HR02       | Implemented                              |
| LR07   | If the answer exceeds the maximum value it can store, display an error message to the user           | HR02, HR03 | Future                                   |
| LR07.1 | Ask the user to reduce the size of operand                                                           | HR02, HR03 | Future                                   |
| LR08   | Should able to store the result for future use                                                       | HR04       | In Progress                              |
| LR08.1 | Displays options to act on the stored result                                                         | HR04       | Future                                   |
