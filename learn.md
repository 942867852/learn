- git add "文件名"  //添加到git管理  
- git commit -m "消息"  // 提交 -am全部提交  
- git push  //推送到远端仓库  
- git init  //初始化仓库  
- git status  //查看当前仓库状态  
- git pull --rebase  
当两个提交者在同一分支先后提交时，后提交者会被拒绝，后提交者需要先拉取远端前提交者的内容，然后再push自己提交的内容，将自己的内容挂在前提交者之后。  
在结束后使用git rebase --abort退出
- git rm  //移除git管理，在删除文件后需要使用rm移除管理


