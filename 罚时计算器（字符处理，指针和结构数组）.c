题目描述
一般 ACM程序设计比赛都是五个小时。但是比赛结束时，DB（DataBase）发现总罚时很大，DB就想知道这总罚时算得对不对。但由于DB数学不是很好，想让你写个程序帮他计算总罚时。

罚时规则：

每道试题用时将从竞赛开始到试题解答被判定为正确为止，其间每一次提交运行结果被判错误的话将被加罚20分钟时间，未正确解答的试题不记时。也就是，通过的题目的罚时等于第一次通过时颗与比赛开始时刻的时间差加上第一次通过之前该题的错误次数乘以20分钟，总罚时等于所有通过的题目的罚时相加。比如：比赛12：00:00开始，DB在12:06:00提交A题错误WA，12:17:00提交A题通过AC，12:40:00提交B题错误WA，12:43:00提交B题错误TLE。一场比赛下来，DB就做了一个题，总罚时为(12:17:00-12:00:00+20*1)=00:37:00，B题没有通过，不算罚时。


输入
第一行输入DB需要你帮助计算的总罚时的比赛次数T（0<T<100）。对于每次需要计算的比赛，先输入比赛开始时间（格式HH:MM:SS），接下来输入总提交次数n（0<n<100）,接下来n行输入每次提交信息题号id,提交时间time,评判结果result，其中id为字符A~K，time格式为HH:MM:SS，评判结果包括{AC,WA,TLE,RE,CE,PE}中的一种,只有AC是正确的，每项用空格隔开。所有时间按递增顺序输入。

注意：所有时间是24小时制，HH:MM:SS代表时：分：秒，不足两位的，前面补0。所有提交时间与比赛开始时间在同一天。评判结果只有AC代表通过。某些题目DB通过之后，可能会再次提交，但是不计罚时。

详见样例。


输出
对于每次比赛，输出一行，表示DB的总罚时（HH:MM:SS），不足两位，前面补0。保证总罚时的小时数不超过2位数。


样例输入
2
12:00:00
4
A 12:06:00 WA
A 12:17:00 AC
B 12:40:00 WA
B 12:43:00 TLE
12:00:00
2
A 12:50:00 AC
B 13:00:00 AC

样例输出
00:37:00
01:50:00

