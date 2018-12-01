# Parser for simple menu scripting
## Syntax :
Input is read line by line.

|Expression| Meaning |
|:--------------|:-----------------------|
|prompt:\<prompt> | Sets menu prompt; default ""|
|cmd:\<cmd> | Sets default command to be "\<cmd> $1", where $1 is chosen key; default "echo"|
|type:\<type> | Sets type of menu; default "Option"|
|\<key> | Opition with only key specified; returns "\<cmd> \<key>"|
|\<key>\[\<long comment>] | Option "\<key> : \<long comment>"; returns "\<cmd> \<key>"|
|\<key>(\<type>) | Option "\<key>"; return value dependent on \<type>|
|\<key>{\<command>} | Option "\<key>"; returns \<command>|
|\<key>\[\<long comment>](\<type>) | Option "\<key> : \<long comment>"; return value dependent on \<type>|
|\<key>\[\<long comment>]{\<command>} | Option "\<key> : \<long comment>"; returns \<command>|
|\<key>(\<type>){\<command>} | Option "\<key>"; return value dependent on \<type> and \<command>|
|\<key>\[\<long comment>](\<type>){\<command>} | Option "\<key> : \<long comment>"; return value dependent on <type> and \<command>|
|#\<text> | One line comment|
## Result
Srcript will parse stdin and print to stdout result of the following form:
  + \<prompt>
  + \<type>
  + \<number of records>
  
and for each option
  + \<index of record>
  + \<key>
  + \<comment>
  + \<type>
  + \<command>
  
All elements separated by a new line.
