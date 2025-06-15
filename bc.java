class A {   //class name is A
    void show() {  // it is method name is show and void mens no return value  any methods
        System.out.println("show world!");
    }

    public static void main(String[] args) {  //public mens acess everyone static mens run without creating object of class
        A ref = new A(); // A create the object ref is reference variable hold memory address of objects
        ref.show(); //call the show method using the objects ref
        System.out.println("hello world!"); //print hello world another messages
    }
}
