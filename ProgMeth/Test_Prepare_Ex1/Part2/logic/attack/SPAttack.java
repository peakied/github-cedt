package logic.attack;

import logic.monster.Monster;

public class SPAttack extends Attack{
	public SPAttack(int power, String name, boolean isLeader) {
		super(power, name, isLeader);
	}
	@Override
	public int calculateDamage(Monster target) {
		int damage = this.power-target.getSpecialDefense();
		return Math.max(damage, 0);
	}
}
