# Parser for simple menu scripting
## Syntax :
prompt:<prompt> -- Sets menu prompt; default ""
cmd:<cmd> -- Sets default command to be "<cmd> $1", where $1 is chosen key; default "echo"
type:<option> -- Sets type of menu; default "Option"
<key> -- Opition with only key specified; returns "<cmd> <key>"
<key>[<long comment>] -- Option "<key> : <long comment>"; returns "<cmd> <key>"
<key>(<option>) -- Option "<key>"; return value dependent on <option>
<key>{<command>} -- Option "<key>"; returns <command>
<key>[<long comment>](<option>) -- Option "<key> : <long comment>"; return value dependent on <option>
<key>[<long comment>]{<command>} -- Option "<key> : <long comment>"; returns <command>
<key>(<option>){<command>} -- Option "<key>"; return value dependent on <option> and <command>
<key>[<long comment>](<option>){<command>} -- Option "<key> : <long comment>"; return value dependent on <option> and <command>
#<text> -- One line comment
