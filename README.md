# Final project CS137
My project is a farm calculator. The main purpose of the program is you can add animals/crops dynamically and get a projection of figures (revenue, cost, profit, etc). 

## How to use

1. Answer the opening prompts. This will set you as the main farmer & is used to initialize the farm.
2. Select 1 or 2 from the menu to add animals/crops to the farm. You can add cows, chickens, corn and apple trees. You will be asked for information about the addition - ex. Id name, cost info, revenue info, etc. The base class will handle familiar measurements while the derived class will work with sale units. For example you might enter 10 acres for corn (base class), but the revenue/cost calculations are based on sale units - for corn this means bushels (derived class). All classes operate similar to this.
3. Select 5 or 6 to view the animals/crops. This will show the info you entered plus some calculations. ** note these values will not be added to the farm yet (see step 4). Animal calculations are based on 365 days of production. Crops are based on one harvest of everything (ex. if corn has 15 acres, 15 acres are harvested).
4. Select 7 or 8 to produce / harvest. This represents the farm actually incurring figures:  revenues, costs, profits. The farm will keep count of how many times you harvest/produce and the total of each figure. Clicking produce X times represents X years. Clicking harvest X times represents X harvests.
5. Select p or P to show the farm’s full figures. This prints everything. You will see the individual animal/crop info plus the farm’s total figures. 
6. Use the menu as necessary - save to file, add more animals, remove crops, etc.
