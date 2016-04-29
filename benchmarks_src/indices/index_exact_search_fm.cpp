#include "index_exact_search_base.h"

using namespace seqan;

int main(int argc, char **argv)
{
    typedef FMIndex<> TIndex;
    return benchmark_index_main<TIndex>("Benchmark: Index based exact search using fm index.", argc, argv);
}
