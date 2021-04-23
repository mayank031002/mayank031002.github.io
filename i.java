class StringDemo2{
    public static void main(String args[]) {
        String str0b1 = "First String";  //String on left most is type of variable,str0b1 is name of variable and first
        String str0b2 = "Second String"; // string is input means whenever we want to take input in box variable type  
        String str0b3 = str0b1; // in this case , we will call the value as mybox.ABC=x;

        System.out.println("Length of str01 : "+ str0b1.length());

        System.out.println("Char at index 3 in str0b1 : " + str0b1.charAt(3));

        if((str0b1.equals(str0b2)))
            System.out.println("str0b1 == str0b2");

        else
            System.out.println("str0b1 ! = str0b3");

        if(str0b1.equals(str0b3))
            System.out.println("str0b1 == str0b3");
        else
            System.out.println("str0b1  != str0b3");
    }
}