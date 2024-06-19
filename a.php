
#!/usr/bin/php
<?php 
  foreach(file('/usr/share/dict/words') as $line){
    if(strpos($line, 'abc') !== false){ //"abc"が見つかったとき、先頭との相対位置を返すため型を指定
        echo "$line";
    }
  } 
?>