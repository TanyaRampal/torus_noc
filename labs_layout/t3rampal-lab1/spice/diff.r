data1<-read.csv('student.csv',sep=' ',header=T,stringsAsFactors=FALSE);)
data2<-read.csv('golden.csv',sep=' ',header=T,stringsAsFactors=FALSE);)
sqrt(mean(data1$voltage,data2$voltage)^2)
