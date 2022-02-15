# CVE-2021-4034
CVE-2021-4034 centos8可用版本

基于修改而来
https://github.com/berdav/CVE-2021-4034/tree/main/dry-run

## 使用方法
修改``pwnkit-dry-run.c``中``system``函数执行自定义执行命令
（默认为添加``r00t``用户，密码为``XHSZWCPU6Nvobe``）
``make``进行编译
上传到目标机器运行
