#define UNDEF 0
#define INT_TYPE 1
#define REAL_TYPE 2
#define STR_TYPE 3
#define FUNCTION_TYPE 4
#define CLASS_TYPE 5
#define STRUCT_TYPE 6
#define MAXTOKENLEN 40

typedef struct RefList{ 
    int lineno;
    struct RefList *next;
}RefList;

class entry{
	public:
		char st_name[MAXTOKENLEN];
		unsigned int st_size;	/* 	Size of the token name 	*/
		unsigned int scope_id;	/* 	Scope resolution of the variable */
		RefList *lines;			/*	Refer to multiple definitions of same token 
									to store value and sometimes more information */
		int st_ival; double st_fval; char *st_sval;
		unsigned int type; 		/* 	declaration type for variables	*/
		unsigned int ret_type;	/* for return types of functions */ 
		unsigned int size; 		/* if storage required */
};

/*	represents symbol table for a scope */
struct Node{
	std::unordered_map<std::string, entry> symbolTable;
	std::vector<Node *> child;
	Node* parent;
};


/*	insert value into symbol table :  */
void insert(char *name, int len, int type, int lineno);
void create_new_scope();
void exit_scope();
void LevelOrderTraversal(Node * root);


/* scope controllers */
void incr_scope();
void decr_scope();
void hide_scope();

/* function to print symbol table */
void print_symbolTable(std::unordered_map<std::string, entry> symbolTable);
