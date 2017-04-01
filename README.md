My_top utility */fun version/*
===

 Implementation of simple using "execl" without clone main procces.
   -------------------------
  

___Little guide: execl - function of library___  <unistd.h> <br>

 
   -  ***first parameter:*** path of executant file "/path/to/some/exec";<br>
   -   ***second parameter:*** it's 'zero' argument of your exe (path to your exe)<br>
        	        		   in other words "argv[0]" of your executant file;<br>	
    -   ***third parameter:*** it's 'first' argument of your exe (if it's exist)<br>
		                           "argv[1]", if this arguments does not using in your exe<br>
	      	              		   this argument will be ignoring;<br>
    -     ***last parameter:*** last parameter should be NULL/0 for order to show, that
                   	 	           previous argument was last;<br>
<br>
<br>

<h3>Example:   execl("/path/to/exec", "exec", "first arg", NULL);<h3/>




