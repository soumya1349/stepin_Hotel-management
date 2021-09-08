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
|LR01|book_room|check if choice type entered is valid |Int|1|500|unit test|PASS|
|LR02|book_room|check if choice type entered is valid |Int|2|800|unit test|PASS|
|LR03|book_room|check if choice type entered is valid |Int|3|1000|unit test|PASS|
|LR04|book_hall|check if choice ch2 entered is valid |Int|1|1000|unit test|PASS|
|LR05|book_hall|check if choice ch2 entered is valid |Int|2|15000|unit test|PASS|
|LR06|program|check if choice ch entered is valid |Int|1|500|unit test|PASS|
|LR07|program|check if choice ch entered is valid |Int|2|800|unit test|PASS|

