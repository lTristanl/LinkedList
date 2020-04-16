public class Node{

    protected int load;
    protected Node next;

    public Node (int load){
        this.load = load;
        this.next = null;
    }

    public int getLoad(){
        return load;
    }

    public void setLoad(int load){
        this.load = load;
    }

    public Node getNext(){
        return next;
    }

    public void setNext(Node next){
        this.next = next;
    }


}