# AliasFinder

请参考[代码贡献指南](docs/CONTRIBUTING.md).

## Project Structure

请参考[Structure.md](docs/Structure.md)

## Project Framework

请参考[Framework.md](docs/Framework.md)

## How to compile

### Release Mode

```shell
$ cd AliasFinder
$ ./build.sh release
```

then you can find the build directory named Release-build

### Debug Mode

```shell
$ cd AliasFinder
$ ./build.sh debug
```

then you can find the build directory named Debug-build

## How to run

you should first create a file named worklist.txt, which has key and value in each row, here is a example:

```bash
gcc ${GCC_DIR}/astList.txt
mysql ${MYSQL_DIR}/astList.txt
```

then you can run with the command below:

```shell
$ mkdir ${Root}/tests
$ cd ${Root}/tests
$ # the ${InputDir} is output of module in ${Root}/scripts/tokens/token_alias/alias_finder
$ ${BuildDir}/bin/alias-finder config.txt ${InputDir} ${OutputDir}
```

the output of alias-finder has a format:

| name1 | path1 | def_line1 | name2 | path2 | def_line2 | label | distance |
| ----- | ----- | --------- | ----- | ----- | --------- | ----- | -------- |
|       |       |           |       |       |           |       |          |
