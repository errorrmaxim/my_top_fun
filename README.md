<<<<<<< HEAD
# top_fun-implementation

/* Implementation of simple using "execl" without clone main procces.
   Little guide: execl - function of library <unistd.h>
   
   first parameter: - path of executant file "/path/to/some/exec";
  second parameter: - it's 'zero' argument of your exe (path to your exe)\
		        in other words "argv[0]" of your executant file;
   third parameter: - it's 'first' argument of your exe (if it's exist)\
		       "argv[1]", if this arguments does not using in your exe\
			this argument will be ignoring;
    last parameter: - last parameter should be NULL/0 for order to show, that\
		 	previous argument was last;


   Example:   execl("/path/to/exec", "exec", "first arg", NULL);
*/
=======
# my_top_fun
>>>>>>> c65be1809e79095e663288353733b4953f5a1fec
