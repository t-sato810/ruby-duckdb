$LOAD_PATH.unshift File.expand_path('../lib', __dir__)
require 'duckdb'

require_relative './duckdb_test/duckdb_version'

if defined?(GC.verify_compaction_references) == 'method'
  GC.verify_compaction_references(double_heap: true, toward: :empty)
end

require 'minitest/autorun'
