My_top utility */fun version/*
===

 Implementation of simple using "execl" without clone main procces.
   -------------------------
   

___Little guide: execl - function of library___  <unistd.h> <br>

 
 <pre><strong>first parameter:<strong/> - path of executant file "/path/to/some/exec";
     <strong>second parameter:<strong/> - it's 'zero' argument of your exe (path to your exe)
             	        		   in other words "argv[0]" of your executant file; 	
      <strong>third parameter:<strong/> - it's 'first' argument of your exe (if it's exist)
		                           "argv[1]", if this arguments does not using in your exe
	      	              		   this argument will be ignoring;
       <strong>last parameter:<strong/> - last parameter should be NULL/0 for order to show, that
                   	 	           previous argument was last;<pre/>
<br>
<br>

<h3>Example:   execl("/path/to/exec", "exec", "first arg", NULL);<h3/>




