My_top utility */fun version/*
===

 Implementation of simple using "execl" without clone main procces.
   -------------------------
   <p><p/>

Little guide: execl - function of library <unistd.h> <br>
 <br>
 <h4>first parameter:<h4/> - path of executant file "/path/to/some/exec";<br>
 <p> second parameter: - it's 'zero' argument of your exe (path to your exe)<p/>
<p>              	        in other words "argv[0]" of your executant file;<p/>
<p>   third parameter: - it's 'first' argument of your exe (if it's exist)<p/>
<p>		                     "argv[1]", if this arguments does not using in your exe<p/>
<p>		      	              this argument will be ignoring;<p/>
<p>   last parameter: - last parameter should be NULL/0 for order to show, that<p/>
<p>                   	 	previous argument was last;<p/>
<p><p/>
<p><p/>

<h3>Example:   execl("/path/to/exec", "exec", "first arg", NULL);<h3/>




