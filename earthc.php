<?php

fscanf(STDIN, "%d\n", $no);

for($k=0;$k<$no;$k++)
{
$i=$k;
fscanf(STDIN, "%s\n", $name);
$a = str_split($name);
$x = count($a);
 $co = 0;  $ans=0 ; 
	for($i=0;$i<$x;$i++)
	{
		if($a[$i] == 'a' || $a[$i] == 'A'||$a[$i] == 'b' || $a[$i] == 'B'||$a[$i] == 'c' || $a[$i] == 'C')
		{
			
			$co++ ; 
		}
				
	}

	
$ans=($co * ($co+1)) / 2 ;
	
	echo $ans;
	

}




?>
