package MapPane;

import Util.Block;
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
    private Block heroface;
    public Map() {
        super();
        ///////////////////////////////////////////////
        ///////////////////set value///////////////////
        ///////////////////////////////////////////////
        this.setAllCells(new ArrayList<Cell>());
        this.setHeroface(Block.righthero);
        this.setCurrentlyposition(new Position(10,5));
        this.setMapsize(new Position(21,11));
        ///////////////////////////////////////////////
        ///////////////////set alignment///////////////
        ///////////////////////////////////////////////
        this.setVgap(1);
        this.setPadding(new Insets(8));
        this.setAlignment(Pos.CENTER);
//        this.setPrefWidth(500);
        this.setBorder(new Border(new BorderStroke(Color.LIGHTGRAY, BorderStrokeStyle.SOLID,
                CornerRadii.EMPTY, BorderWidths.DEFAULT)));
        this.setBackground(new Background(new BackgroundFill(Color.WHITE, CornerRadii.EMPTY, Insets.EMPTY)));
        ///////////////////////////////////////////////
        ///////////////////fill board//////////////////
        ///////////////////////////////////////////////
        Random random = new Random();
        for(int i = 0;i<21;i++) {
            for(int j =0;j<11;j++) {
                if (i != 10|| j != 5){
                    this.allCells.add(new Cell(Block.randomBlock()));
                } else this.allCells.add(new Cell(Block.righthero));
                this.add(allCells.get((i*11)+j), i, j);
            }
        }
    }

    public void turnright() {
        int point = this.getcurrentpoint();
        if (this.getAllCells().get(point+this.getMapsize().getY()).isTransparent()) return;
        if (this.getCurrentlyposition().getX()+11==this.getMapsize().getX()) mapextends(0);
        this.getAllCells().get(point).clear();
        this.getAllCells().get(point+this.getMapsize().getY()).drawinside(Block.righthero);
        this.setHeroface(Block.righthero);
        this.getChildren().clear();
        for(int i = 0;i<21;i++) {
            for(int j =0;j<11;j++) {
                this.add(allCells.get(((i+this.getCurrentlyposition().getX()-9)*this.getMapsize().getY())+j+this.getCurrentlyposition().getY()-5), i, j);
            }
        }
        this.getCurrentlyposition().setX(this.getCurrentlyposition().getX()+1);
    }
    public void turnleft() {
        boolean exten = true;
        if (this.getAllCells().get(this.getcurrentpoint()-this.getMapsize().getY()).isTransparent()) return;
        if (this.getCurrentlyposition().getX()-10==0) {
            mapextends(1);
            exten = false;
        }
        if (exten) this.getCurrentlyposition().setX(this.getCurrentlyposition().getX()-1);
        int point = this.getcurrentpoint();
        this.getAllCells().get(point+this.getMapsize().getY()).clear();
        this.getAllCells().get(point).drawinside(Block.lefthero);
        this.setHeroface(Block.lefthero);
        this.getChildren().clear();
        for(int i = 0;i<21;i++) {
            for(int j =0;j<11;j++) {
                this.add(allCells.get(((i+this.getCurrentlyposition().getX()-10)*this.getMapsize().getY())+j+this.getCurrentlyposition().getY()-5), i, j);
            }
        }
    }
    public void turnup() {
        boolean exten = true;
        if (this.getAllCells().get(this.getcurrentpoint()-1).isTransparent()) return;
        if (this.getCurrentlyposition().getY()-5==0) {
            mapextends(2);
            exten = false;
        }
        if (exten) this.getCurrentlyposition().setY(this.getCurrentlyposition().getY()-1);
        int point = this.getcurrentpoint();
        this.getAllCells().get(point+1).clear();
        this.getAllCells().get(point).drawinside(this.getHeroface());
        this.getChildren().clear();
        for(int i = 0;i<21;i++) {
            for(int j =0;j<11;j++) {
                this.add(allCells.get(((i+this.getCurrentlyposition().getX()-10)*this.getMapsize().getY())+j+this.getCurrentlyposition().getY()-5), i, j);
            }
        }
    }
    public void turndown() {
        if (this.getAllCells().get(this.getcurrentpoint()+1).isTransparent()) return;
        if (this.getCurrentlyposition().getY()+6==this.getMapsize().getY()) {
            mapextends(3);

        }
        int point = this.getcurrentpoint();
        this.getAllCells().get(point).clear();
        this.getAllCells().get(point+1).drawinside(this.getHeroface());

        this.getChildren().clear();
        for(int i = 0;i<21;i++) {
            for(int j =0;j<11;j++) {
                this.add(allCells.get(((i+this.getCurrentlyposition().getX()-10)*this.getMapsize().getY())+j+this.getCurrentlyposition().getY()-4), i, j);
            }
        }

        this.getCurrentlyposition().setY(this.getCurrentlyposition().getY()+1);
    }
    public void call() {
        System.out.println("X : "+this.getCurrentlyposition().getX()+" Y : "+this.getCurrentlyposition().getY());
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
//                System.out.println("3!!!");
                for (int loop = 0; loop < this.getMapsize().getX(); loop++) {
                    this.getAllCells().add((loop+1)*this.getMapsize().getY()+loop,new Cell(Block.randomBlock()));
                }
                this.getMapsize().setY(this.getMapsize().getY()+1);
                break;
        }
    }

    public Block getHeroface() {
        return heroface;
    }

    public void setHeroface(Block heroface) {
        this.heroface = heroface;
    }

    public int getcurrentpoint() {
//        System.out.println("Curr X:"+this.getCurrentlyposition().getX());
//        System.out.println("Curr Y:"+this.getCurrentlyposition().getY());
//        System.out.println("Map X:"+this.getMapsize().getX());
//        System.out.println("Map Y:"+this.getMapsize().getY());
        return this.getCurrentlyposition().getX()*this.getMapsize().getY()+this.getCurrentlyposition().getY();
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
