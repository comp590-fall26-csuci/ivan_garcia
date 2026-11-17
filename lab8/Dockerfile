# image
FROM docker.io/library/gcc:14

# Work Directory
WORKDIR /app

# Copy C/C++ files to workdir
COPY ../lab4 /app

# compile and run tests
RUN make build
RUN make test

# Entrypoint
CMD ["./fibo_test"]
