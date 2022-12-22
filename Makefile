all: 
	clang-format -style=google -i hello_server.c
	clang-format -style=google -i hello_client.c
	clang-format -style=google -i low_open.c
	clang-format -style=google -i fd_seri.c
	gcc hello_server.c -o hserver
	gcc hello_client.c -o hclient
	gcc low_open.c -o low_open
	gcc fd_seri.c -o fds
.PHONY:clean
clean:
	rm ./*.o
