public static void main(String[] args) {
    List<String> li = new ArrayList<>(Arrays.asList("a", "1", "b", "2", "c", "3"));
    List<String> li_1 = li.stream().filter((i) -> li.indexOf(i) % 2 == 0).collect(Collectors.toList());
    List<String> li_2 = li.stream().filter((i) -> li.indexOf(i) % 2 != 0).collect(Collectors.toList());
    li.clear();
    System.out.println(li_1);
    System.out.println(li_2);
}
