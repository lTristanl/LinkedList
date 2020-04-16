public class LinkedList{
    private Node first;
    private Node last;
    
    public boolean isEmpty(){
        return (first==null) ? true : false;
    }

    public int extract(){
        if(!isEmpty()){
            int date = first.getLoad();
            Node temp = first.getNext();
            first = temp;
            return date;
        }else{
            return -1;
        }
    }
    public int insertFirst(int date){
        Node temp = new Node (date);
        temp.setNext(first);
        first = temp;
        return date;
}
    public int insertLast(int date){
        Node temp = new Node(date);
        temp.setLoad(date);
        temp.setNext(null);
        if(first==null){
            first = temp;
            last = temp;
        }else{
            last.setNext(temp);
            last=temp;
        }
        return date;
    }
    public void clear(){
        do{
            extract();
        }while(first!=null);
        }

    public String toString(){
        String brackets = "[";
        String brackets2 = "]";
        if(isEmpty()==true)
            return brackets+"NULL"+brackets2;
        else{
            Node current = first;
            while(current.getNext() !=null){
                if(current!=last)
                    brackets = brackets + current.getLoad()+",";
                else
                    brackets = brackets + current.getLoad();
            current = current.getNext();
            }
            brackets = brackets+current.getLoad()+brackets2;
        }
        return brackets;
    }

    public boolean search(int date){
        if(isEmpty())
            return false;
        else{
            Node temp = first;
            while(temp!=null){
                if(temp.getLoad()==date)
                    return true;
                else
                    temp = temp.getNext();
            }
        }
        return false;
    }

}