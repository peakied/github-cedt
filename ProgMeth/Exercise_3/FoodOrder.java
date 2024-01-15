package logic;

import java.util.Scanner;

public class FoodOrder {
	// Fields: description, price, chicken, vegetable, extraChicken, extraRice
	private String description;
	private int price;
	private boolean hasChicken;
	private boolean hasVegetable;
	private boolean hasExtraChicken;
	private boolean hasExtraRice;
	// Constructor
	public FoodOrder(){
		description = "Hainanese Chicken rice";
		hasChicken = true;
		hasVegetable=true;
		hasExtraChicken=false;
		hasExtraRice=false;
	}
	// Methods
	public String getDescription() { return description; }
	public int getPrice() { return price; }
	private int calculatePrice() {
		int cost = 40;
		if (!hasChicken) cost-=10;
		if (hasExtraChicken) cost+=10;
		if (hasExtraRice) cost+=5;
		return cost;
	}
	public void setHasChicken (boolean hasChickens) { hasChicken = hasChickens; }
	public void setHasVegetable (boolean hasVegetables) { hasVegetable = hasVegetables; }
	public void setHasExtraChicken (boolean hasExtraChickens) { hasExtraChicken = hasExtraChickens; }
	public void setHasExtraRice (boolean hasExtraRices) { hasExtraRice = hasExtraRices; }
	@Override
	public String toString() {
		return "That would be "+calculatePrice()+" bath. Thanks!"+"\nHainanese Chicken rice"+"\nChicken:"+hasChicken+"\nVegetable:"+hasVegetable+"\nExtra Chicken:"+hasExtraChicken+"\nExtra Rice:"+hasExtraRice;
    }

	@Override
	public boolean equals(Object other) {
		// START CODE HERE
		if(other instanceof FoodOrder){
			return this.calculatePrice() == ((FoodOrder) other).calculatePrice();
		}
		return false;
		// END CODE HERE
	}

	public static void main(String[] args) {
		Scanner keyboard = new Scanner(System.in);
		FoodOrder foodOrder = new FoodOrder();
		System.out.println("Hi, Welcome to Kao-Mun-Gai food stall!");
		System.out.println("We only sell " + foodOrder.getDescription());
		System.out.println("Would you like your meal with chicken? (Yes/No)");
		String customerInput = keyboard.next();
		if (customerInput.equals("No")) {
			foodOrder.setHasChicken(false);
			System.out.println("Okay...");
		} else if (customerInput.equals("Yes")) {
			foodOrder.setHasChicken(true);
		}
		System.out.println("Would you like your meal with vegetable? (Yes/No)");
		customerInput = keyboard.next();
		if (customerInput.equals("No")) {
			foodOrder.setHasVegetable(false);
		} else if (customerInput.equals("Yes")) {
			foodOrder.setHasVegetable(true);
		}
		System.out.println("Extra chicken? (Yes/No)");
		customerInput = keyboard.next();
		if (customerInput.equals("Yes")) {
			foodOrder.setHasExtraChicken(true);
			System.out.println("Good Choice!");
		} else if (customerInput.equals("No")) {
			foodOrder.setHasExtraChicken(false);
		}
		System.out.println("Extra Rice? (Yes/No)");
		customerInput = keyboard.next();
		if (customerInput.equals("Yes")) {
			foodOrder.setHasExtraRice(true);
		} else if (customerInput.equals("No")) {
			foodOrder.setHasExtraRice(false);
		}

		System.out.println(foodOrder);

		// Uncomment the following lines to test equals method
		// FoodOrder testOrder = new FoodOrder();
		// testOrder.setHasChicken(false);
		// testOrder.setHasExtraChicken(false);
		// testOrder.setHasExtraRice(true);
		// FoodOrder testOrder2 = new FoodOrder();
		// testOrder2.setHasChicken(false);
		// testOrder2.setHasExtraChicken(false);
		// testOrder2.setHasExtraRice(true);
		// System.out.println("Equal:" + testOrder.equals(testOrder2));
	}

}
