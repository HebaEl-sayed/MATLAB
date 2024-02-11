function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["forloop.c:45c21"]=1;
    this.traceFlag["forloop.c:50c30"]=1;
    this.traceFlag["forloop.c:50c45"]=1;
    this.traceFlag["forloop.c:55c51"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["forloop.c:44"]=1;
    this.lineTraceFlag["forloop.c:45"]=1;
    this.lineTraceFlag["forloop.c:46"]=1;
    this.lineTraceFlag["forloop.c:50"]=1;
    this.lineTraceFlag["forloop.c:55"]=1;
    this.lineTraceFlag["forloop.c:60"]=1;
    this.lineTraceFlag["forloop.c:71"]=1;
    this.lineTraceFlag["forloop.h:38"]=1;
    this.lineTraceFlag["forloop.h:43"]=1;
    this.lineTraceFlag["forloop.h:48"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
