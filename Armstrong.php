<?php 

function ArmstrongCheck($number){ 
    $sum = 0;   
    $x = $number;   
    while($x != 0)   
    {   
        $rem = $x % 10;   
        $sum = $sum + $rem*$rem*$rem;   
        $x = $x / 10;   
    }   
    if ($number == $sum) 
        return 1;
    return 0;     
} 
  
$number = 407; 
$flag = ArmstrongCheck($number); 
if ($flag == 1) 
    echo "Yes"; 
else
    echo "No"
?> 