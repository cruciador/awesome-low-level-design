#pragma once
#include "abstract_report_exporter.h"

class CsvReportExporter : public AbstractReportExporter {
protected:
    void writeHeader(const ReportData& data) override;
    void writeDataRows(const ReportData& data) override;
}; 