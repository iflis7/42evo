# `pipex`

The purpose of this project is the discovery in detail UNIX mechanism - `pipe`.<br>
You can read the subject: [`pipex.subject.pdf`](subject/pipex.subject.pdf)


### Discription of mandatory part
The program `pipex` should repeat the behaviour of the next shell command
```bash
$> < file1 cmd1 | cmd2 > file2
```
and looks like this:
```bash
$> ./pipex file1 cmd1 cmd2 file2
```
All errors like: wrong commands,  permission to files and etc, need be handle.
### Testers
1) [Pipex Tester](https://github.com/vfurmane/pipex-tester "Pipex tester")
