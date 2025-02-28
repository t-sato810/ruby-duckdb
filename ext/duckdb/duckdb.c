#include "ruby-duckdb.h"

VALUE mDuckDB;

void
Init_duckdb_native(void) {
    mDuckDB = rb_define_module("DuckDB");

    init_duckdb_error();
    init_duckdb_database();
    init_duckdb_connection();
    init_duckdb_result();
    init_duckdb_column();
    init_duckdb_prepared_statement();
    init_duckdb_blob();
    init_duckdb_appender();
    init_duckdb_config();

}
