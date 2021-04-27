# pascal-flex-bison

How to run; 


```
flex exemple.l

bison -d -v exemple.y    //The -v option for verbose mode, will generate a .OUTPUT file. 

gcc -o output exemple.tab.c lex.yy.c   //Will generate output.exe file

output < mon_programme.txt  

```


To run in debug mode : 

uncomment this code in the main() of exemple.y
```
#ifdef YYDEBUG
yydebug = 1;
#endif 

```

redo the previous steps and add the `--debug` flag to the bison command

```

bison -d -v --debug exemple.y

```
