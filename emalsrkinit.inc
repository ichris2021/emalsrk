<?php

function page_header() {
	global $emalcookie;
	global $getout;
	if ($getout) {setcookie( "emalcookie", "");}
	
	if (!isset($emalcookie)){
		header("Location: index.html");
	}

}

?>
