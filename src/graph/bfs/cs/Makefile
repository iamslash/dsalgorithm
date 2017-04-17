# 
MCS = "C:\Program Files\Unity\Editor\Data\MonoBleedingEdge\lib\mono\4.5\mcs.exe"
# CXXFLAGS = -std=c++11 -fpermissive

all: a.exe

a.exe: a.cs
	$(MCS) $(LDFLAGS) -out:$@ $^

clean:
	-rm -f *.exe
