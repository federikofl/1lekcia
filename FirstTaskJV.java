public class Main {
    public static void main(String[] args) {
        String str_1 = "AaBbCcDd";
        System.out.println("str_1[::2]-> " + str_1.substring(0, str_1.length()).replaceAll("(.)(?=.)", "$1").replaceAll("(.)(?=.)", "$1") + "\n");
        System.out.println("str_1[1::2]-> " + str_1.substring(1, str_1.length()).replaceAll("(.)(?=.)", "$1").replaceAll("(.)(?=.)", "$1"));
    }
}
