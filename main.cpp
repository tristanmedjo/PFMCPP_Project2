#include <iostream>

template <typename... T> void ignoreUnused(T &&...) {
}

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1


 1) Write down the names of all of the primitives available in C++ (excluding
wchar_t) put them here:

 int
 char
 bool
 void
 float
 double
 * I'm assuming you weren't looking for long / unsigned, etc



2) for each primitive type, write out 3 variable declarations inside the
variableDeclaration function. give each declaration an initial value just ignore
wchar_t. you do not need to declare 3 variables of type 'wchar_t' 'void' is a
return type. you do not need to declare 3 variables of type 'void'. at the end
of the function, pass each variable to the ignoreUnused function

3) write out 10 functions
	each declaration should have a random number of parameters in the function
parameter list. add { ignoreUnused( ); } after each declaration in place of the
closing semicolon pass each of your function parameters to the ignoreUnused
function. if your function returns something other than void, add 'return {};'
at the end of it.

4) provide default values for an arbitrary number of parameters in the function
parameter list. When naming your parameters, choose names that are relevant to
the task implied by the function's name.

5) in the main function at the end:
	for each of those functions declared,
		a) write out how the function would look if called with correct
arguments b) if the function returned anything, store it in a local variable via
the 'auto' keyword. c) pass the local variable to ignoreUnused() as you did in
variableDeclarations() see main() for an example of this.

 click the [run] button.  Clear up any errors or warnings as best you can.

 Commit your changes by clicking on the Source Control panel on the left,
entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request
link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

// 2)
void variableDeclarations() {
	int eggs = 0;
	int chocolateChips = 1;
	int butterSticks = 1;

	float flour = 1.f;
	float cinnamon = 0.25f;
	float sugar = 1.f;

	double cookTime = 60.5;
	double ovenTemperature = 400.5;
	double cupsOfMilk = 1.75;

	bool ovenOn = true;
	bool mealReadyToCook = false;
	bool mealCooked = false;

	char stepOne = 'a';
	char stepTwo = 'b';
	char stepThree = 'c';

	ignoreUnused(eggs, chocolateChips, butterSticks, flour, cinnamon, sugar, cookTime, ovenTemperature, cupsOfMilk, ovenOn, mealReadyToCook, mealCooked, stepOne, stepTwo, stepThree);
}
/*
 10 functions
 example:
 */
bool rentACar(
	int rentalDuration,
	int carType = 0) // function declaration with random number of arguments,
					 // arbitrary number of arguments have default value
{
	ignoreUnused(rentalDuration, carType); // passing each function parameter to
										   // the ignoreUnused() function
	return {}; // if your function returns something other than void, add
			   // 'return {};' at the end of it.
}

/*
 1)
 */
void goToStore(int moveSpeed, bool isTired = false) {
	ignoreUnused(moveSpeed, isTired);
}
/*
 2)
 */
int spawnWeapon(int weaponType, int ammo = 60, float spawnDelay = 0.5f) {
	ignoreUnused(weaponType, ammo, spawnDelay);
	return {};
}
/*
 3)
 */
float depositMoney(float depositAmount, int accountNumber = 123456789) {
	ignoreUnused(depositAmount, accountNumber);
	return {};
}
/*
 4)
 */
double LFO(int shape = 3, double frequency = 50.50, float offset = 50.f) {
	ignoreUnused(shape, frequency, offset);
	return {};
}
/*
 5)
 */
int cookChicken(
	bool isChickenFresh,
	float chickenWeight = 15.f,
	int cookingLevel = 3) {
	ignoreUnused(isChickenFresh, chickenWeight, cookingLevel);
	return {};
}
/*
 6)
 */
void doDishes(
	bool hasDirtyDishes,
	float availableTime = 30.5f,
	double waterTemperature = 145.654,
	float remainingSoap = 1.1f) {
	ignoreUnused(
		hasDirtyDishes, availableTime, waterTemperature, remainingSoap);
}
/*
 7)
 */
float setMoveSpeed(
	bool canSpeedBeChanged,
	int newSpeed,
	float speedMultiplier = 2.5f) {
	ignoreUnused(canSpeedBeChanged, newSpeed, speedMultiplier);
	return {};
}
/*
 8)
 */
void sortFolders(bool readOnly, char targetLocation, int sortingMechanism) {
	ignoreUnused(readOnly, targetLocation, sortingMechanism);
}
/*
 9)
 */
int getTotalObjectsWithinRadius(
	float radiusLength = 50.f,
	char objectToBeFound = 'v',
	bool isObjectVisible = true) {
	ignoreUnused(radiusLength, objectToBeFound, isObjectVisible);
	return {};
}

/*
 10)
 */
void disableInput(
	bool isInputEnabled,
	int inputType,
	double bufferTime = 0.005) {
	ignoreUnused(isInputEnabled, inputType, bufferTime);
}

int main() {
	// 1)
	goToStore(6, true);
	// 2)
	auto newWeapon = spawnWeapon(5, 60, 0.1f);
	// 3)
	auto accountTotalAfterDeposit = depositMoney(1500.59f, 123456789);
	// 4)
	auto modulation = LFO(1, 150.50, 5.5f);
	// 5)
	auto spawnFood = cookChicken(true, 10.f, 1);
	// 6)
	doDishes(true, 10.f, 150.50, 0.8f);
	// 7)
	auto moveSpeed = setMoveSpeed(true, 500, 1.5f);
	// 8)
	sortFolders(false, 'v', 5);
	// 9)
	auto nearbyObjects = getTotalObjectsWithinRadius(50.f, 'a', false);
	// 10)
	disableInput(true, 1, 0.001);

	ignoreUnused(newWeapon, accountTotalAfterDeposit, modulation, spawnFood, moveSpeed, nearbyObjects);

	std::cout << "good to go!" << std::endl;
	return 0;
}
