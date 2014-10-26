/**
 * This file is part of the "FnordMetric" project
 *   Copyright (c) 2014 Paul Asmuth, Google Inc.
 *
 * FnordMetric is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#ifndef _FNORDMETRIC_METRICDB_METRICTABLEREPOSITORY_H
#define _FNORDMETRIC_METRICDB_METRICTABLEREPOSITORY_H
#include <fnordmetric/metricdb/metricrepository.h>
#include <fnordmetric/sql/runtime/tablerepository.h>
#include <memory>
#include <mutex>
#include <vector>

namespace fnordmetric {
namespace metricdb {

class MetricTableRepository : public fnordmetric::query::TableRepository {
public:

  MetricTableRepository(MetricRepository* metric_repo);
  query::TableRef* getTableRef(const std::string& table_name) const override;

protected:
  MetricRepository* metric_repo_;
};

}
}
#endif