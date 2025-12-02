- git add "文件名"  
//添加到git管理  
- git commit -m "消息"  
// 提交 -am全部提交  
- git push  
//推送到远端仓库  
- git init  
//初始化仓库  
- git status  
//查看当前仓库状态  
- git pull --rebase  
当两个提交者在同一分支先后提交时，后提交者会被拒绝，后提交者需要先拉取远端前提交者的内容，然后再push自己提交的内容，将自己的内容挂在前提交者之后。  
如果修改了同一处内容，pull之后会提示保留哪一版，使用git add将本地添加到管理(保留本地内容)，之后再commit  
然后使用git push origin HEAD:main  
在结束后使用git rebase --abort退出  
- git rm  
//移除git管理，在删除文件后需要使用rm移除管理  
- git mv [文件名] [文件目录]  
//移动文件，也可以给文件改名  
- git log  
//查看所有提交记录
- git reset --mixed [commit ID]  
//重置到某次commit  
重置后需要强制推送才能上传，git push -f
- git restore  
//文件修改后还没有上传暂存区，也就是还没有commit，使用git restore命令可以取消修改
- git show  
git show [commit ID] 显示commit的具体信息  
- git revert [commit ID]  
回到某次commit之前的内容，新的内容相当于重新commit上去的  
上传到远端不需要强制推送  
- git commit --amend  
commit之后需要修改内容，首先在文件里修改内容，然后使用git add命令，再使用git commit --amend命令，修改上次的commit message  
(应该是用于修改commit的message)  
只能对最后一次修改生效  
如果在amend之前已经推送到远端，则需要强制推送  
# git 撤销操作
|Git操作|Git命令|使用场景|注意事项|
|:---:|:---:|:---:|:---:|
|**discard**|git restore <文件名> (针对单个文件) git restore --hard (针对所有文件)|工作区的修改还未commit|舍弃掉工作区修改的文件|
|**reset**|git reset <commit ID>|还原到某个commit的状态，舍弃掉之后的commit|如果reset已经推送到远端的commit，会造成强制推送，集成分支禁止强推|
|**revert**|git revert <commit ID>|使用一个新的提交抵消掉某次commit的修改||
|**amend**|git commit --amend|只能修改最新的一次commit|如果amend已经推送远端commit，会造成强制推送，集成分支禁止强推|  




