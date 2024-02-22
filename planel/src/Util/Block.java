package Util;

import java.util.Random;

public enum Block {
    floor,
    air,
    grass,
    lefthero,
    righthero
    ;

    public static Block randomBlock() {
        int randIndex = new Random().nextInt(10);
        return randIndex>1?randIndex>4?Block.grass:Block.floor:Block.air;
    }
}
