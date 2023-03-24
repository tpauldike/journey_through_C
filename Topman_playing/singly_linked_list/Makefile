# Performs the compilation when I enter 'make' on the CLI
# Produces or updates two executables
int_list: int_list-main.c print_data.c count_list.c newl.c node_addr.c add_node.c myContacts
	gcc -o int_list int_list-main.c print_data.c count_list.c newl.c node_addr.c add_node.c  # 'int_list' made or updated!

myContacts: *contact*
	gcc -o myContacts *contact* # 'myContact' made or updated!

clean:
	rm int_list myContacts # remove the executable files
	ls     # list content
