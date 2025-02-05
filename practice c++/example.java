public class example{

    public native static int add(int a, int b);

    static{
        System.loadLibrary("NativeLibrary");
    }

    public static void main(String[] args) {
        
        System.out.println(add(87, 12));

    }
}