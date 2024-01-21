package logic;

import java.util.ArrayList;
import java.util.Objects;

public class Building {
	private ArrayList<EnterProfile> enterProfileList;
	private int populationCount = 0;
	private int potentialInfectedCount = 0;
	public Building() {
		enterProfileList = new ArrayList<EnterProfile>();
	}
	public EnterProfile addProfile(Person person, int temperature) {
		ArrayList<EnterProfile> list = this.getEnterProfileList();
		int check = -1;
		for(int i = 0; i < list.size(); i++) if(Objects.equals(list.get(i).getPerson().getName(), person.getName()) && list.get(i).getPerson().getID() == person.getID()) check = i;
		if(check != -1) this.removeProfile(check);
		EnterProfile newperson = new EnterProfile(person, temperature);
		list.add(newperson);
		this.populationCount++;
		if (newperson.hasFever()) potentialInfectedCount++;
		return newperson;
	}
	public EnterProfile removeProfile(int index) {
		EnterProfile enterProfile = getEnterProfileList().get(index);
		if (enterProfile.hasFever()) potentialInfectedCount--;
		getEnterProfileList().remove(index);
		populationCount--;
		return enterProfile;
	}
	public int getPopulationCount() {
		return populationCount;
	}
	public int getPotentialInfectedCount() {
		return potentialInfectedCount;
	}

	public ArrayList<EnterProfile> getEnterProfileList() {
		return enterProfileList;
	}
}
