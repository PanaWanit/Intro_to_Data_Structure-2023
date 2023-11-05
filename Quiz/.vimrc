" .vimrc for quiz PC
set nu
set autoindent
set smartindent

imap { {}
imap {} {}
imap {<CR> {<CR>}<ESC>O
imap {{ {

set ts=4
set sw=4

nmap <F9> :w <CR> :!g++ -std=c++17 main.cpp -o  main <CR>
nmap <F10> :!./main<CR>