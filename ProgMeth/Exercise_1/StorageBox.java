import java.util.ArrayList;

public class StorageBox {
    ArrayList<Object> Box;
    int fill;
    public StorageBox(){
        fill = 0;
        Box = new ArrayList<Object>();
    }
    public boolean isEmpty() { return Box.isEmpty(); }
    public boolean isFull() { return fill == Box.size(); }
    public void push(Object object) {
        Box.add(object);
        fill++;
    }
    public void pop() {
        if(fill == 0) return;
        Box.remove(fill - 1);
        fill--;
    }

    public Object top() { return Box.get(fill-1); }
}
