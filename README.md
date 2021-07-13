# SDLC Activity Based Learning -> F1 Pitstop Strategy Generator

<!-- ![wakatime](https://wakatime.com/badge/github/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator.svg) -->

| Linux & Windows build Status                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      | Codacy & CodeInspector                                                                                                                                                                                                                                                                                                                                         | Dynamic & Static code quality                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [![C CI - Build Status on Linux](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/c-Build-Linux.yml/badge.svg)](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/c-Build-Linux.yml)[![C CI - Build Status on Windows.](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/c-Build-Windows.yml/badge.svg)](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/c-Build-Windows.yml) | [![Code Inspector Badge](https://www.code-inspector.com/project/24633/status/svg)](https://www.code-inspector.com/project/24633/status/svg) [![Codacy Badge](https://app.codacy.com/project/badge/Grade/82dc98a0e6bd48e594007fe41c0d2b4f)](https://app.codacy.com/gh/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/dashboard?branch=Production=Badge_Grade) | [![Static Check](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/codeQualityStatic.yml/badge.svg)](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/codeQualityStatic.yml)[![Dynamic Check](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/codeQualityDynamic.yml/badge.svg)](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/codeQualityDynamic.yml) |

| Code Inspector Score                                                                                                                                                                        | Unit Testing & Code Coverage                                                                                                                                                                                                                                                                                                                                                                                                                                                               | Git Inspector                                                                                                                                                                                                                                                       |
| ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [![Code Inspector Score](https://code-inspector.com/public/badge/user/github/ShettyGaneshprasad?style=dark.svg)](https://frontend.code-inspector.com/public/user/github/ShettyGaneshprasad) | [![CI-Coverage](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/codeCoverage.yml/badge.svg)](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/codeCoverage.yml) [![Unit Testing - Unity](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/TEST-Unity.yml/badge.svg)](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/TEST-Unity.yml) | [![Contribution Check - Git Inspector](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/GIT_Inspector.yml/badge.svg)](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/actions/workflows/GIT_Inspector.yml) |

<!-- https://code-inspector.com/public/badge/user/github/ShettyGaneshprasad?style=dark.svg
<a href="https://frontend.code-inspector.com/public/user/github/ShettyGaneshprasad">
   <img src="https://code-inspector.com/public/badge/user/github/ShettyGaneshprasad?style=dark"alt="code inspector badge" />
</a> -->

![F1 Pitstop Strategy Generator](https://cdn-wp.thesportsrush.com/2021/03/eb255945-personal-vlog-youtube-thumbnail-2021-03-28t223255.924.jpg)

# Introduction to F1 Pitstop Strategy Generator

- While the constructors compete by developing their engine and chassis with the latest technologies, real-time race simulations are also conducted back in the factories to provide useful insights that could greatly affect team decision making before and during the race. The results are sent to the pit wall, where the race engineers make pit stop strategy decisions and communicate with the drivers and all pit crew members.

## Motivation for the Project

- I chose this topic as i am very passionate about motorsports specially F1 which involve talent of the driver but also Team strategy in the race. Without a proper team strategy no driver can win F1 race even if he is most talented driver on the grid
- In the past decade, top teams such as Mercedes Benz, Scuderia Ferrari, Red Bull, and McLaren F1 Racing has committed huge and fatal pit-stop strategy calls, costing them victories or even the championships. Infamous instances include the 2012 Abu Dhabi GP Alonso’s too-early pit-stop, 2015 Monaco GP Hamilton too-late pit-stop, and the list goes on. When car competitiveness and driver skill level have marginal distinctness, the pit-stop strategy can be very decisive, if not determinant, to the race result. A good pit-stop allows overtaking without even a high-risk close car fight, while a bad pit-stop could put the car in traffic, harming the tyres and the possibility to make overtaking maneuvers.

## Output Video

![Video](https://github.com/ShettyGaneshprasad/F1-Pitstop-Strategy-Generator/blob/Production/6_ImagesAndVideos/F1-Pitstop-Strategy-Generator-16.gif)

## Folder Structure

| Folder              | Description                                                                                     |
| ------------------- | ----------------------------------------------------------------------------------------------- |
| 1_Requirements      | Documents detailing requirements and research                                                   |
| 2_Architecture      | Structural and Behavioural UML Diagrams for High Level and Low level                            |
| 3_Implementation    | All code and documentation                                                                      |
| 4_TestPlanAndOutput | Documents with test plans and outputs                                                           |
| 5_Report            | Generated Report                                                                                |
| 6_ImagesandVideos   | All the UML diagrams and other required images                                                  |
| 7_Data              | Files having text file including information about track and tyre data needed for the programme |

## Contribution List

| SF ID    | Name                | Number of issue raised |Number of issue resolved | 
| -------- | ------------------- | ---------------- |---------------- |
| `268423` | Shetty Ganeshprasad | 29               |19               |

## Process Overview

The process of generating strategy for the race include collecting all data from Free Practice 1,Free Practice 2,Free Practice 3, Qualifying Session 3,Qualifying Session 2,Qualifying Session 1 so we can calculate average race pace of the car for the weekend Race. We also collect Track name so we can use data of that track like Total Lap in Grand Prix, total circuit length in KM, total time lost in the pits, total Race distance in KM and once we get all the data we calculate using our algorithim which simulate race and give optimum strategy for the race.

PitStop Strategy include factors like:

- Average Race Pace of car is taken as input from

  - Free Practice 1 (FP1)
  - Free Practice 2 (FP2)
  - Free Practice 3 (FP3)
  - Qualifying Session 3 (Q3)
    - Here programm will ask for qualfying position (if its greater than P15 i.e car is not eligible for Q2 )
  - Qualifying Session 2 (Q2)
    - Here programm will ask for qualfying position (if its greater than P10 i.e car is not eligible for Q1 )
  - Qualifying Session 1 (Q1)
    - Here programm will ask for Tyre used in Q1 (According to FIA rule Cars qualified for Q1 will have to start their race from same tyre which was used in Q1 so this information is important for strategy genration)

- Once we get all the imput from session before the GrandPrix we will use received data and calculate average race pace of the car for that weekend using our algorithim
<!--   - ``` if(driverHasQualifiedForQ1){```
  - ``` mainDivider=3;```
  - ```}```

  - ``` if(driverHasQualifiedForQ2){```
  - ```   subDivider=2;```
  - ``` }```
  - ```unsigned int averageRacePace = (   ( averageTimeinQ1 + (  ( averageTimeinQ2 + averageTimeinQ3) / subDivider  ) + (  averageTimeinfp1 + averageTimeinfp2 + averageTimeinfp3  ) / 3) / mainDivider   );```
 -->

- Once User selects the track he is racing our programme will load all track data from the file to our programme i.e

  - Grand Prix name
  - Circuit name
  - Average Time lost in the pits
  - First GP held year
  - Number of Laps
  - Circuit length in KM
  - Race Distance in KM
  - Lap record time in MM:SS:MS
  - Lap record by driver name with year

- This Programme also takes account of the increase in race pace during end of the race as fuel is burnt which in turns make car lighter and faster.
- Tyre details file is also used for building strategy we have 3 type of dry tyre
  - Soft Compound Tyre
  - Medium Compound Tyre
  - Hard Compound Tyre
    - Tyre Speed offset compared to Soft compound in Seconds
    - Average Tyre Degradation per lap

## Detail requirements

### High Level Requirements

| ID   | Description                                                                                   | Category       | Status (Implemented/ InProgress/ Future) |
| ---- | --------------------------------------------------------------------------------------------- | -------------- | ---------------------------------------- |
| HR01 | Able to Select Track from the data on the file on which grand Prix will be held               | Functional     | Implemented                              |
| HR02 | Display Track Information and save needed data from file into programm needed for computation | Non-Functional | Implemented                              |
| HR03 | Take input of all needed race weekend information about car pace                              | Functional     | Implemented                              |
| HR04 | Calculate Average race pace of the car                                                        | Functional     | Implemented                              |
| HR05 | Select Strategy for the race                                                                  | Functional     | In Progress                              |

### Low level Requirements

| ID   | Description                                                                                      | HLR ID | Status (Implemented/ InProgress/ Future) |
| ---- | ------------------------------------------------------------------------------------------------ | ------ | ---------------------------------------- |
| LR01 | Read File data on which circuit are available for that season of F1 Grand Prix                   | HR01   | Implemented                              |
| LR02 | Take Input from the user to select which Grand Prix we will be creating Strategy for             | HR01   | Implemented                              |
| LR03 | Once the track is selected Display all the information about that track on the console           | HR02   | Implemented                              |
| LR05 | Take input of best lap time of Free Practice 1 (FP1).                                            | HR03   | Implemented                              |
| LR06 | Take input of best lap time of Free Practice 2 (FP2).                                            | HR03   | Implemented                              |
| LR07 | Take input of best lap time of Free Practice 3 (FP3).                                            | HR03   | Implemented                              |
| LR08 | Take input of best lap time of Qualifying 1 (Q1).                                                | HR03   | Implemented                              |
| LR09 | Check if qualified for Q2 i.e Qualified Positon is less then 15                                  | HR03   | Implemented                              |
| LR10 | Take input of best lap time of Qualifying 2 (Q2).                                                | HR03   | Implemented                              |
| LR11 | Check if qualified for Q1 i.e Qualified Positon is less then 10                                  | HR03   | Implemented                              |
| LR12 | Take input of best lap time of Qualifying 1 (Q1).                                                | HR03   | Implemented                              |
| LR13 | Take input on which tyre is used in Q1                                                           | HR03   | Implemented                              |
| LR14 | Take input on what was the tyre age in Q1 as same tyre will be used in the race                  | HR03   | Implemented                              |
| LR15 | Calculate Average Race pace from all qualyfing and Practice session                              | HR03   | Implemented                              |
| LR16 | Apply algorithim to find time of a lap based on tyre and fuel condition                          | HR04   | In Progress                              |
| LR17 | Create a module to calculate total race time in the all possible tyre strategy                   | HR04   | In Progress                              |
| LR18 | Calculate total race time in the all possible tyre strategy and select Strategy with lowest time | HR05   | In Progress                              |

## Learning Resources

1. [markdownCheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. [markdownBasics](https://guides.github.com/features/mastering-markdown/)
3. [git inspector](https://github.com/ejwa/gitinspector.git)
4. [github workflow](https://docs.github.com/en/actions/learn-github-action)
