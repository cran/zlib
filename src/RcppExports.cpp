// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// create_compressor
SEXP create_compressor(int level, int method, int wbits, int memLevel, int strategy, Nullable<RawVector> zdict);
RcppExport SEXP _zlib_create_compressor(SEXP levelSEXP, SEXP methodSEXP, SEXP wbitsSEXP, SEXP memLevelSEXP, SEXP strategySEXP, SEXP zdictSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type level(levelSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type wbits(wbitsSEXP);
    Rcpp::traits::input_parameter< int >::type memLevel(memLevelSEXP);
    Rcpp::traits::input_parameter< int >::type strategy(strategySEXP);
    Rcpp::traits::input_parameter< Nullable<RawVector> >::type zdict(zdictSEXP);
    rcpp_result_gen = Rcpp::wrap(create_compressor(level, method, wbits, memLevel, strategy, zdict));
    return rcpp_result_gen;
END_RCPP
}
// compress_chunk
RawVector compress_chunk(SEXP compressorPtr, const RawVector& input_chunk);
RcppExport SEXP _zlib_compress_chunk(SEXP compressorPtrSEXP, SEXP input_chunkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type compressorPtr(compressorPtrSEXP);
    Rcpp::traits::input_parameter< const RawVector& >::type input_chunk(input_chunkSEXP);
    rcpp_result_gen = Rcpp::wrap(compress_chunk(compressorPtr, input_chunk));
    return rcpp_result_gen;
END_RCPP
}
// flush_compressor_buffer
RawVector flush_compressor_buffer(SEXP compressorPtr, int mode);
RcppExport SEXP _zlib_flush_compressor_buffer(SEXP compressorPtrSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type compressorPtr(compressorPtrSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(flush_compressor_buffer(compressorPtr, mode));
    return rcpp_result_gen;
END_RCPP
}
// zlib_constants
List zlib_constants();
RcppExport SEXP _zlib_zlib_constants() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(zlib_constants());
    return rcpp_result_gen;
END_RCPP
}
// create_decompressor
SEXP create_decompressor(int wbits);
RcppExport SEXP _zlib_create_decompressor(SEXP wbitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type wbits(wbitsSEXP);
    rcpp_result_gen = Rcpp::wrap(create_decompressor(wbits));
    return rcpp_result_gen;
END_RCPP
}
// decompress_chunk
RawVector decompress_chunk(SEXP decompressorPtr, const RawVector& input_chunk);
RcppExport SEXP _zlib_decompress_chunk(SEXP decompressorPtrSEXP, SEXP input_chunkSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type decompressorPtr(decompressorPtrSEXP);
    Rcpp::traits::input_parameter< const RawVector& >::type input_chunk(input_chunkSEXP);
    rcpp_result_gen = Rcpp::wrap(decompress_chunk(decompressorPtr, input_chunk));
    return rcpp_result_gen;
END_RCPP
}
// flush_decompressor_buffer
RawVector flush_decompressor_buffer(SEXP decompressorPtr, size_t length);
RcppExport SEXP _zlib_flush_decompressor_buffer(SEXP decompressorPtrSEXP, SEXP lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type decompressorPtr(decompressorPtrSEXP);
    Rcpp::traits::input_parameter< size_t >::type length(lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(flush_decompressor_buffer(decompressorPtr, length));
    return rcpp_result_gen;
END_RCPP
}
// validate_gzip_file
bool validate_gzip_file(const std::string& file_path);
RcppExport SEXP _zlib_validate_gzip_file(SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type file_path(file_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(validate_gzip_file(file_path));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_zlib_create_compressor", (DL_FUNC) &_zlib_create_compressor, 6},
    {"_zlib_compress_chunk", (DL_FUNC) &_zlib_compress_chunk, 2},
    {"_zlib_flush_compressor_buffer", (DL_FUNC) &_zlib_flush_compressor_buffer, 2},
    {"_zlib_zlib_constants", (DL_FUNC) &_zlib_zlib_constants, 0},
    {"_zlib_create_decompressor", (DL_FUNC) &_zlib_create_decompressor, 1},
    {"_zlib_decompress_chunk", (DL_FUNC) &_zlib_decompress_chunk, 2},
    {"_zlib_flush_decompressor_buffer", (DL_FUNC) &_zlib_flush_decompressor_buffer, 2},
    {"_zlib_validate_gzip_file", (DL_FUNC) &_zlib_validate_gzip_file, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_zlib(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
