from invoke import task


@task
def check(c):
    c.run("pipenv run flake8 .")
    c.run("pipenv run mypy .")


@task
def format(c):
    c.run("pipenv run isort . --recursive")
    c.run("pipenv run black . ")


@task
def libs(c):
    c.run("pipenv run pip list -o")


@task
def rust(c):
    c.run("cargo fmt -- --check")
    c.run("cargo clippy -- -D warnings")
