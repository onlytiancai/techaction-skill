# Summary

* [介绍](README.md)

## C 基础

* [Hello world](c/001.md)
* [实现 atoi ](c/002.md)
* [复制文件](c/003.md)
* [冒泡排序](c/004.md)
* [二分查找](c/005.md)
* [成绩计算](c/006.md)

## Linux

* [安装系统](linux/001.md)
- 分区，格式化，挂载
- 配置动态、静态网络IP，DNS，网关，子网掩码
- 使用 top 查看系统运行情况
- 使用 ifconfig, ip 查看本机网络配置
- 使用 uname 查看本机信息，
- 添加新用户，加入组，切换用户
- 使用 ulimit 修改描述符最大限制
- touch，mkdir，cd，pwd，ls，cp, mv，rm 进行文件管理
- 熟悉文件查看命令：cat, head, more, less, tail
- 使用 find 查找文件
- 使用 grep 查找文本
- 使用 sort 排序命令输出
- 使用 diff 命令比较文件
- 使用 wc 统计输出行数
- chown 和 chmod 修改文件权限
- 开启 openssh 服务，指定允许远程登录的用户
- 指定拥有 sudo 权限的用户
- 编写简单 shell 脚本：if, while, $?
- 使用管道组合多个命令
- 对标注输入，标准输出，标准错误进行重定向
- 持续监控日志输出
- 使用 scp 和 rsync 在多台机器间同步文件
- 配置 ssh 免密登录
- 使用 netstat, ss 查看端口监听列表
- 使用 ps 查看进程列表
- 使用 ping, curl, nc 测试远程服务是否正常
- 使用 free 查看内存使用情况，定位内存占用大的进程
- 查看 CPU 使用情况，定位 CPU 使用高的进程
- 查看磁盘使用情况，定位磁盘占用大的目录
- 查看网络流量情况
- 使用包管理工具安装软件，修改源到国内镜像
- 启动，停止，禁用，启用某个服务
- 使用防火墙开放或关闭某个端口: ufw, iptables
- 使用 rc.local 设置开机自启动脚本
- 使用 crontab 设置定时任务
- 使用 vi 编辑配置文件
- 修改 .bashrc 里的环境变量，使用 alias 添加别名
- 使用 ln 建立文件软连接
- 使用 shell 进行数学运算
- 使用 tar，zip, unzip 解压，压缩文件
- 挂接，弹出 U 盘


## git

- 配置密钥，创建仓库，克隆仓库，.git/config 改动
- git status，代码拉取，代码提交，代码推送，修改最后一次 commit 信息
- git rm， git mv, .gitignore 使用
- 代码对比：工作区对比，暂存区对比，分支间对比，历史对比
- 解决冲突：使用 A， 使用 B，两者合并
- 新建分支，合并分支，删除分支，删除远程分支，常见分支规划（dev, testing, master, hotfix, feat）
- 查看历史：查看历史改动，指定某文件改动，提取指定历史版本
- 撤销修改：撤销修改的文件，撤销暂存的文件，撤销已提交改动，撤销已推送改动
- 使用书架暂存: git stash
- git rebase -i
- 恢复文件：git reflog


## HTML

- HTML 基本文档：doctype, lang, meta，head, body
- 引入 css, js
- 排版相关元素：h1-h5, p，a，img，br, hr，span，strong，code，pre，q
- 列表相关元素：ul, ol, dl，li，dd
- 布局相关元素: div，span，table
- 表格相关元素：table, tr, td, col
- 表单相关元素：form，input, select，textarea，button
- input 类型：text, password, checkbox, radio, hidden，color，date，time，number
- h5 验证属性：required ，max，min，minlength，maxlength
- 实现用户注册页面：姓名，年龄，职业，爱好，手机号


## CSS

- 常见选择器：id, class，后代选择器，子选择器，属性选择器，伪类选择器
- 传统布局：position，display，width, height，margin, padding, border, overflow, float
- flex 布局：flex-flow， justify-content，align-items，flex，align-self
- 装饰类规则：字体，字号，行高，颜色，背景色，链接，列表，阴影，圆角
- 常见布局实现：图标和文字水平对齐，文字垂直水平居中，div 垂直水平居中，左右分栏（左定宽右弹性），左中右分栏（左右定宽，中间弹性），水平菜单，下拉菜单
- Bootstrap 使用：表格，表单，辅助类，小图标，按钮组，导航条，标签页，面包屑，分页，警告框，面板，轮播，模态框


## PHP

- 变量，分支，循环，函数，字符串操作，数组操作，时间操作，文件操作，面向对象
- 理解 empty，is_null，isset
- 读取 get, post, cookie，header，文件上传等数据
- 设置 HTTP 应答码， header, cookie，输出 json，HTML，文件下载
- 数据校验，XSS 过滤，SQL 注入过滤
- 配置并使用 session
- 使用正则表达式 preg
- 访问数据库：mysqli，PDO
- 访问网络：curl
- 调试拍错：die，exit，var_dump, print_r，debug_print_backtrace ，error_log，file_put_contents, error_reporting
- 使用命名空间和自动加载，使用 composer 安装第三方组件
- 使用 MVC 框架：理解 model, view, controller, templeate，library，helper 的职责
- 使用 HMVC modules 进行模块化开发
- 配置 php.ini 和 php-fpm.conf


## MySQL

- 增删改查，多表关联，分组统计
- 导入导出数据库或数据表
- 创建用户，指定权限
- 查看表结构，添加列，修改列
- 查看执行计划，添加有效索引


## Nginx

- 配置 PHP-fpm
- 配置静态目录，启用文件索引，压缩，过期时间
- 配置反向代理，设置必要的转发头
- 配置虚拟目录为 php，反向代理或静态目录
- 配置 https 证书


## Javascript

- 基本语法：分支，循环，函数，数组，hash
- DOM API，BOM API
- jquery 选择器，dom 操作，css 操作，事件操作
- jquery ajax
- underscore, async 使用


## 网络

- 常见 HTTP 方法：GET, PUT, POST, DELETE, OPTION
- 常见 HTTP 应答码：100, 200, 301, 302, 400, 401, 403, 404, 413，500
- 常见请求头：Accept，Accept-Encoding，Host，UserAgent，Cookie，Connection，Referer
- 常见应答头: Connection，Content-Type，Content-Length，Server, Transfer-Encoding，Set-Cookie
- 浏览器开发者工具网络标签
- 常用网络工具：ifconfig, ip, lsof, netstat,ss, ping, traceroute，mtr，telnet, curl, wget, nc，tcpdump, nslookup, dig, whois, nload, iftop
- 防火墙相关：iptables, ufw


## 问题定位

- 信息查看工具使用：uptime, top, htop, vmstat, iostat, sar
- 优雅重启服务：php-fpm, nginx，gunicorn, supervisord
- 系统日志查看
- crontab 日志查看
- Nginx 日志配置及查看
- PHP/fpm 日志配置及查看
- 应用服务日志查看
- MySQL 慢日志配置及查看
