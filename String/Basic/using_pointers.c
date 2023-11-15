// character type pointer can be reinitialized but character arrays cant be reinitialized
#include <stdio.h>
void reinitializing_string_using_pointer() {
    char *str = "Hello world";
    puts(str);
    str = "Hello";// works perfectly
    puts(str);
    str = "World";// works perfectly
    puts(str);
}
/* like this we can't reinitialize array in same function but we can reinitialize in differenct functions(indirectly pointer) */
void reinitializing_string_using_array() {
    char string[] = "Hello world";
    puts(string);
    string = "Hello";// showing error
    puts(string);
    string = "World";// showing error
    puts(string);
}
/* it works because here array is behaving like a pointer, mainly pointer is supreme in use */
void reinitializing_array_in_another_function(char arr[]) {
    puts(arr);
    arr = "Hello";// it works
    puts(arr);
    arr = "World";// it works
    puts(arr);
}
int main() {
    char string[] = "Nazmus Sakib";
    reinitializing_string_using_pointer();
    reinitializing_string_using_array();
    reinitializing_array_in_another_function(string);// it acts like pointer so ultimately pointer is in use
    return 0;
}