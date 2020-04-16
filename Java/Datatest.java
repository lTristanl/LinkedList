public class Datatest {
	public static void main(String[] args) {

        LinkedList linkedList = new LinkedList();
        System.out.println(linkedList.isEmpty());
        linkedList.insertLast(3);
        linkedList.insertLast(5);
        linkedList.insertLast(6);
        linkedList.insertLast(8);
        linkedList.insertLast(9);
        linkedList.insertFirst(1);
        linkedList.insertLast(233);
        System.out.println(linkedList.toString());
        linkedList.extract();
        System.out.println(linkedList.isEmpty());
        System.out.println(linkedList.search(233));
	}
	
}