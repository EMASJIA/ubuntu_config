
//########创建新仓库########

//1:mkdir my_github
//1.1:git init  //此方法用于创建本地仓库


//########config############
//git config --global user.email "jn1529600@163.com"
//git config --global user.name "git hub name"

//########检出仓库########

//1.1:执行如下命令以创建一个本地仓库的克隆版本：
	//git clone /path/to/repository
//1.2:如果是远端服务器上的仓库，你的命令会是这个样子：
	//git clone username@host:/path/to/repository


//########工作流########

//你的本地仓库由 git 维护的三棵“树”组成。
//第一个是你的 工作目录，它持有实际文件；\
//第二个是 暂存区（Index），它像个缓存区域，临时保存你的改动；\
//最后是 HEAD，它指向你最后一次提交的结果。 


//########添加和提交########

//你可以提出更改（把它们添加到暂存区），使用如下命令：
	//git add <filename>
	//git add *
//这是 git 基本工作流程的第一步；使用如下命令以实际提交改动：
	//git commit -m "代码提交信息"
//现在，你的改动已经提交到了 HEAD，但是还没到你的远端仓库。


//#######推送改动########

//你的改动现在已经在本地仓库的 HEAD 中了。执行如下命令以将这些改动提交到远端仓库：
	//git push origin master
//可以把 master 换成你想要推送的任何分支。 


//如果你还没有克隆现有仓库，并欲将你的仓库连接到某个远程服务器，你可以使用如下命令添加：
	//git remote add origin <server>
//如此你就能够将你的改动推送到所添加的服务器上去了。
