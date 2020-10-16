package OpenAddressing.Java.Implementation;

class Main {
    
    public static void main(String[] args) {
        MyHash myHash1 = new MyHash(7);

        System.out.println(myHash1.insert(10));

        System.out.println(myHash1.search(10));

        System.out.println(myHash1.erase(10));

        System.out.println(myHash1.search(10));

    }

}
