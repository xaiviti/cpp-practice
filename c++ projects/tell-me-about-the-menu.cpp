/*
Problem: Create a program that would display the menu of a selected dish.
*/
#include <iostream>
#include <algorithm>
using namespace std;

class Menu{
	public:
		string name;
		
		void recipe(){
			cout << this->name << endl;
		}
		
};

int main(){
	//declaration
	Menu menu1;
	Menu menu2;
	Menu menu3;
	int choice;
	
	
	menu1.name = "Fruit salad";
	menu2.name = "Pesto Pasta";
	menu3.name = "Burger";
	
	//input and process
	cout << "TELL ME ABOUT THE DISH\n";
	cout << "Menu: \n";
	cout << "(1) Fruit Salad \n";
	cout << "(2) Pesto Pasta \n";
	cout << "(3) Burger \n";
	cout << "Enter the selected menu: ";
	cin >> choice;
	cout << "--------------------------------------------------------------------------------------------\n";
	
	switch(choice){
		case 1:
			menu1.recipe();
			cout << "--------------------------------------------------------------------------------------------\n";
			cout << "Ingridients: \n";
			cout << "- 2 cans 30 oz. fruit cocktail \n";
			cout << "- 1 can 7.6 oz. table cream \n";
			cout << "- 7 oz. 1/2 can condensed milk \n";
			cout << "- 12 pieces maraschino cherries \n";
			cout << "--------------------------------------------------------------------------------------------\n";
			cout << "Instructions: \n";
			cout << "1. Open the fruit cocktail and drain the syrup by pouring it on a colander. Let\n";
			cout << "   the liquid drain totally (around 30 minutes).\n";
			cout << "2. Arrange the drained fruit cocktail in a mixing bowl. Add the table cream,\n";
			cout << "   condensed milk, and maraschino cherries. \n";
			cout << "3. Gently fold the mixture until all the ingredients are well distributed. Cover \n";
			cout << "   the mixing bowl with sling wrap then refrigerate overnight. \n";
			cout << "4. Remove from the fridge and transfer to a serving bowl. \n";
			cout << "5. Serve. Share and enjoy! \n";
			break;
		case 2:
			menu2.recipe();
			cout << "--------------------------------------------------------------------------------------------\n";
			cout << "Ingridients: \n";
			cout << "- 1/2 cup chopped onion \n";
			cout << "- 2 1/2 tablespoons pesto \n";
			cout << "- 2 tablespoons olive oil \n";
			cout << "- 2 tablespoons grated Parmesan cheese \n";
			cout << "- 1 (16 ounce) package pasta \n";
			cout << "- salt to taste \n";
			cout << "- ground black pepper to taste \n";
			cout << "--------------------------------------------------------------------------------------------\n";
			cout << "Instructions: \n";
			cout << "1. Cook pasta in a large pot of boiling water until done. Drain. \n";
			cout << "2. Meanwhile, heat the oil in a frying pan over medium low heat. Add pesto, onion, and \n";
			cout << "   salt and pepper. Cook about five minutes, or until onions are soft. \n";
			cout << "3. In a large bowl, mix pesto mixture into pasta. Stir in grated cheese. Serve. \n";
			break;
		case 3:
			menu3.recipe();
			cout << "--------------------------------------------------------------------------------------------\n";
			cout << "Ingridients: \n";
			cout << "- 1 pound ground lean (7% fat) beef \n";
			cout << "- 1 large egg \n";
			cout << "- 1/2 cup minced onion \n";
			cout << "- 1/4 cup fine dried bread crumbs \n";
			cout << "- 1 tablespoon Worcestershire \n";
			cout << "- 1 or 2 cloves garlic, peeled and minced \n";
			cout << "- About 1/2 teaspoon salt \n";
			cout << "- About 1/4 teaspoon pepper \n";
			cout << "- 4 hamburger buns (4 in. wide), split \n";
			cout << "- About 1/4 cup mayonnaise \n";
			cout << "- About 1/4 cup ketchup \n";
			cout << "- 4 iceberg lettuce leaves, rinsed and crisped \n";
			cout << "- 1 firm-ripe tomato, cored and thinly sliced \n";
			cout << "- 4 thin slices red onion \n";
			cout << "--------------------------------------------------------------------------------------------\n";
			cout << "Instructions: \n";
			cout << "1. In a bowl, mix ground beef, egg, onion, bread crumbs, Worcestershire, garlic, \n";
			cout << "   1/2 teaspoon salt, and 1/4 teaspoon pepper until well blended. Divide mixture \n";
			cout << "   into four equal portions and shape each into a patty about 4 inches wide. \n";
			cout << "2. Lay burgers on an oiled barbecue grill over a solid bed of hot coals or high heat \n";
			cout << "   on a gas grill (you can hold your hand at grill level only 2 to 3 seconds); close lid \n";
			cout << "   on gas grill. Cook burgers, turning once, until browned on both sides and no \n";
			cout << "   longer pink inside (cut to test), 7 to 8 minutes total. Remove from grill. \n";
			cout << "3. Lay buns, cut side down, on grill and cook until lightly toasted, 30 seconds to 1 \n";
			cout << "   minute.  \n";
			cout << "4. Spread mayonnaise and ketchup on bun bottoms. Add lettuce, tomato, burger, \n";
			cout << "   onion, and salt and pepper to taste. Set bun tops in place. \n";
			break;
		default:
			cout << "Invalid Input, re-run the program.";
			break;
	}
	cout << "--------------------------------------------------------------------------------------------\n";
	
	cout << endl;
	return 0;
}
