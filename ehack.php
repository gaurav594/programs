<?php

fscanf(STDIN, "%d\n", $t);
for($i=0;$i<$t;$i++){
	fscanf(STDIN, "%d\n", $n);
	$sum = 0;
	$numbers = explode(" ", trim(fgets(STDIN)));
	fscanf(STDIN, "%d\n", $n);
	for($i=0;$i<$n;$i++)
	{
	}
	foreach($numbers as $number){
		$number = intval($number);
		$sum += $number;
	}
	echo $sum-($n-1);
	echo "\n";
}

?>