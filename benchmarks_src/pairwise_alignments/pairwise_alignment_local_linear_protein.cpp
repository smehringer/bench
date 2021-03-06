#include "pairwise_alignment_base.h"

using namespace seqan;

int main(int argc, char **argv)
{
    typedef String<AminoAcid> TSequence;
    typedef Align<TSequence> TAlign;

    auto compute = [] (TAlign & align) {
        // Blosum62, gap: -1
        return localAlignment(align, Blosum62());
    };
    return benchmark_pairwise_alignment_main<TSequence>("Benchmark: Local Pairwise Alignment with Linear Gap Model for Protein.", compute, argc, argv);
}
