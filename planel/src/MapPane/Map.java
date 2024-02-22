package MapPane;

import Util.Block;
import Util.Playerview;
import Util.Position;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import java.util.ArrayList;
import java.util.Random;

public class Map extends GridPane {
    private ArrayList<Cell> allCells;
    private Position currentlyposition;
    private Position mapsize;
    private Playerview currentlyface;
    private Playerview playerview;
    public Map() {
        super();

        ////////////////set value////////////////
        this.setAllCells(new ArrayList<Cell>());
        this.setPlayerview(Playerview.RIGHT);
        this.setCurrentlyface(Playerview.RIGHT);

        this.setCurrentlyposition(new Position(10,5));
        this.setMapsize(new Position(21,11));

        ////////////////set alignment////////////////
        this.setVgap(1);
        this.setPadding(new Insets(8));
        this.setAlignment(Pos.CENTER);
//        this.setPrefWidth(500);
        this.setBorder(new Border(new BorderStroke(Color.LIGHTGRAY, BorderStrokeStyle.SOLID,
                CornerRadii.EMPTY, BorderWidths.DEFAULT)));
        this.setBackground(new Background(new BackgroundFill(Color.WHITE, CornerRadii.EMPTY, Insets.EMPTY)));

        ////////////////fill board////////////////
        Random random = new Random();
        for(int i = 0;i<21;i++) {
            for(int j =0;j<11;j++) {
                if (i != 10|| j != 5){
                    this.allCells.add(new Cell(Block.randomBlock()));
                } else {
                    ////////////////draw base hero////////////////
                    this.allCells.add(new Cell(Block.righthero));
                    this.getAllCells().get((i*11)+j).drawinside(Playerview.RIGHT);
                }
                this.add(allCells.get((i*11)+j), i, j);
            }
        }
    }

    public Playerview getPlayerview() {
        return playerview;
    }

    public Playerview getCurrentlyface() {
        return currentlyface;
    }

    public void setCurrentlyface(Playerview currentlyface) {
        this.currentlyface = currentlyface;
    }

    public void setPlayerview(Playerview playerview) {
        this.playerview = playerview;
    }

    public int getcurrentposition() {
//        System.out.println("Curr X:"+this.getCurrentlyposition().getX());
//        System.out.println("Curr Y:"+this.getCurrentlyposition().getY());
//        System.out.println("Map X:"+this.getMapsize().getX());
//        System.out.println("Map Y:"+this.getMapsize().getY());
        return this.getCurrentlyposition().getX()*this.getMapsize().getY()+this.getCurrentlyposition().getY();
    }
    public void mapextends(int num) {
        switch (num) {
            case 0:
//                System.out.println(0);
                for (int loop = 0; loop < this.getMapsize().getY(); loop++) {
                    this.getAllCells().add(new Cell(Block.randomBlock()));
                }
                this.getMapsize().setX(this.getMapsize().getX()+1);
                break;
            case 1:
//                System.out.println(1);
                for (int loop = 0; loop < this.getMapsize().getY(); loop++) {
                    this.getAllCells().add(0,new Cell(Block.randomBlock()));
                }
                this.getMapsize().setX(this.getMapsize().getX()+1);
                break;
            case 2:
//                System.out.println(2);
                for (int loop = 0; loop < this.getMapsize().getX(); loop++) {
                    this.getAllCells().add(loop*this.getMapsize().getY()+loop,new Cell(Block.randomBlock()));
                }
                this.getMapsize().setY(this.getMapsize().getY()+1);
                break;
            case 3:
//                System.out.println("3");
                for (int loop = 0; loop < this.getMapsize().getX(); loop++) {
                    this.getAllCells().add((loop+1)*this.getMapsize().getY()+loop,new Cell(Block.randomBlock()));
                }
                this.getMapsize().setY(this.getMapsize().getY()+1);
                break;
        }
    }
    public ArrayList<Cell> getAllCells() {
        return allCells;
    }

    public void setAllCells(ArrayList<Cell> allCells) {
        this.allCells = allCells;
    }

    public Position getCurrentlyposition() {
        return currentlyposition;
    }

    public void setCurrentlyposition(Position currentlyposition) {
        this.currentlyposition = currentlyposition;
    }

    public Position getMapsize() {
        return mapsize;
    }

    public void setMapsize(Position mapsize) {
        this.mapsize = mapsize;
    }
}
