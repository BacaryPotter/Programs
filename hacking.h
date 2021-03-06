//a function to display error message and then exit
void fatal(char *message) {
	char error_message[100];
	
	strcopy(error_message, "[!!] Fatal Error ");
	strncat(error_message, message, 83);
	perror(error_message);
	exit(-1);
}
// An errorchecked malloc() wrapper function
void *ec_malloc(unsigned int size) {
	void *ptr;
	ptr = malloc(size);
	if(ptr == NULL)
		fatal("in ec_malloc() on memory allocation");
	return ptr;

}
