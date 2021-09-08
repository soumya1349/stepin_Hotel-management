# test plan and test output

## High Level Test Plan

| Test ID | Description | Exp I/P | Exp O/P |	Actual Output | 
| --- | --- | --- | --- | --- |
|HR01|Customers can check for availability of rooms and book the rooms.|choosing option|You have Booked the room|You have Booked the room|
|HR02|Customer can check for the availability of hall and book.|Technical|You have booked the hall|You have booked the hall|
|HR03|System should save the customer data.|Customer data |save data in structure|save data in structure|
|HR03|Customers can book the programs Conducted by hotel.|choosing options(Y/N)|program has been choosen|program has been choosen|
|HR04|System should display the Customers data with bill.|Type of booking|Bill generation with the status of booking|Bill generation with the status of booking|

## Low level Test plan
| Test ID | Function name | Description | Return type | Valid Input |	Output|Type of Test | Status (PASS/FAIL) |
| --- | --- | --- | --- | --- | --- | --- | --- |
| L_01 | is_i_j_k_valid | checks if the given i,j,k value is valid or not | boolean | i,j,k value between 0 and 2 | 0 and 1 | 0 | unit test | PASS |
| L_02 | isIndexValid | checks if the given index is valid or not for a given i,j,k value| boolean | i,j,k,index value between 0 and 2 | 0 and 1| 0 | unit test | PASS |
|LR01|book_room|check if choice type entered is valid |Int|1|500|unit test|PASS|
|LR01|book_room|check if choice type entered is valid |Int|2|800|unit test|PASS|
|LR01|book_room|check if choice type entered is valid |Int|3|1000|unit test|PASS|
|LR01|book_hall|check if choice type entered is valid |Int|1|500|unit test|PASS|

