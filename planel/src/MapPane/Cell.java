package MapPane;

import Util.Block;
import javafx.geometry.Insets;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;

public class Cell extends StackPane {
    private Block block;
    private boolean transparent;
    private final Color baseColor;
    public Cell(Block block) {
        super();
        this.baseColor = Color.WHITE;
        this.setPrefWidth(50);
        this.setPrefHeight(50);
        this.setMinHeight(50);
        this.setMinWidth(50);
        this.setBlock(block);
        this.setTransparent(block.equals(Block.air));
        initializeCellColor();
        draw(block);
    }
    public void draw(Block block) {
        Image image = new Image(ClassLoader.getSystemResource(block.equals(Block.floor)?"dirt.jpg":block.equals(Block.grass)?"grass.jpg":block.equals(Block.air)?"water.jpg":block.equals(Block.righthero)?"Righthero.png":"Lefthero.png").toString());
        BackgroundFill bgFill = new BackgroundFill(Color.WHITE, CornerRadii.EMPTY, Insets.EMPTY);
        BackgroundFill[] bgFillA = {bgFill};
        BackgroundSize bgSize = new BackgroundSize(150,150,false,false,false,false);
        BackgroundImage bgImg = new BackgroundImage(block.equals(Block.righthero)||block.equals(Block.lefthero)?new Image(ClassLoader.getSystemResource("dirt.jpg").toString()):image, null, null, null, bgSize);
        BackgroundImage[] bgImgA = {bgImg};
        this.setTransparent(block.equals(Block.air));
        this.setBackground(new Background(bgFillA,bgImgA));
        if (!(block.equals(Block.righthero)||block.equals(Block.lefthero))) return;
        drawinside(block);
    }
    public void drawinside(Block block) {
        Image image = new Image(ClassLoader.getSystemResource(block.equals(Block.righthero)?"Righthero.png":"Lefthero.png").toString());
        ImageView imageView = new ImageView(image);
        imageView.setFitHeight(50);
        imageView.setFitWidth(50);
        this.getChildren().add(imageView);
    }
    public void clear() {
        this.getChildren().clear();
    }
    public void initializeCellColor() {
        this.setBackground(Background.fill(this.getBaseColor()));
    }

    public Color getBaseColor() {
        return baseColor;
    }

    public Block getBlock() {
        return block;
    }

    public void setBlock(Block block) {
        this.block = block;
    }

    public boolean isTransparent() {
        return transparent;
    }

    public void setTransparent(boolean transparent) {
        this.transparent = transparent;
    }
}
