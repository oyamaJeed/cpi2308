typedef struct st_exer{
	char from;
	char to;
	char msg[30];
}st_exer;

typedef struct st_ary{
	char c_ary[32];
}st_ary;

union uni_exer{
	struct st_ary sary;
	struct st_exer exer;
};
