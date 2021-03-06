"syntax on

"set ruler

"set number

"set showcmd
"开启语法高亮
syntax on
"依文件类型设置自动缩进
filetype indent plugin on
 
"显示当前的行号列号：
set ruler
"在状态栏显示正在输入的命令
set showcmd
 
"关闭/打开配对括号高亮
"NoMatchParen
"DoMatchParen
"行号的显示与隐藏[3]：

"显示行号：
set number
"为方便复制，用<F2>开启/关闭行号显示:
nnoremap <F2> :set nonumber!<CR>:set foldcolumn=0<CR>
"启用Modeline（即允许被编辑的文件以注释的形式设置Vim选项，详见Vim Wiki: Modeline magic）[4]：

set modeline
"如果终端使用的是深色背景：

"为深色背景调整配色
set background=dark
