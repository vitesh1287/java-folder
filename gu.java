class A {
    void show() {
        System.out.println("show world!");
    }

    public static void main(String[] args) {
        A ref = new A();
        ref.show();
        System.out.println("hello world!");
    }
}

