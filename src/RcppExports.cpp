// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_aggregate_to_sf
Rcpp::List rcpp_aggregate_to_sf(const Rcpp::DataFrame& graph_full, const Rcpp::DataFrame& graph_contr, const Rcpp::DataFrame& edge_map);
RcppExport SEXP _dodgr_rcpp_aggregate_to_sf(SEXP graph_fullSEXP, SEXP graph_contrSEXP, SEXP edge_mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph_full(graph_fullSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph_contr(graph_contrSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type edge_map(edge_mapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_aggregate_to_sf(graph_full, graph_contr, edge_map));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_fundamental_cycles
Rcpp::List rcpp_fundamental_cycles(Rcpp::DataFrame graph, Rcpp::DataFrame verts);
RcppExport SEXP _dodgr_rcpp_fundamental_cycles(SEXP graphSEXP, SEXP vertsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type verts(vertsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_fundamental_cycles(graph, verts));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_contract_graph
Rcpp::List rcpp_contract_graph(const Rcpp::DataFrame& graph, Rcpp::Nullable <Rcpp::StringVector>& vertlist_in);
RcppExport SEXP _dodgr_rcpp_contract_graph(SEXP graphSEXP, SEXP vertlist_inSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable <Rcpp::StringVector>& >::type vertlist_in(vertlist_inSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_contract_graph(graph, vertlist_in));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_merge_flows
Rcpp::NumericVector rcpp_merge_flows(Rcpp::DataFrame graph);
RcppExport SEXP _dodgr_rcpp_merge_flows(SEXP graphSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type graph(graphSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_merge_flows(graph));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sample_graph
Rcpp::StringVector rcpp_sample_graph(Rcpp::DataFrame graph, unsigned int nverts_to_sample);
RcppExport SEXP _dodgr_rcpp_sample_graph(SEXP graphSEXP, SEXP nverts_to_sampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nverts_to_sample(nverts_to_sampleSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sample_graph(graph, nverts_to_sample));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_component_vector
Rcpp::List rcpp_get_component_vector(const Rcpp::DataFrame& graph);
RcppExport SEXP _dodgr_rcpp_get_component_vector(SEXP graphSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type graph(graphSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_component_vector(graph));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_sp_dists_par
Rcpp::NumericMatrix rcpp_get_sp_dists_par(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi, const std::string& heap_type);
RcppExport SEXP _dodgr_rcpp_get_sp_dists_par(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp_dists_par(graph, vert_map_in, fromi, toi, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_sp_dists_par_xy
Rcpp::NumericMatrix rcpp_get_sp_dists_par_xy(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi, const std::string& heap_type, const bool bidirected);
RcppExport SEXP _dodgr_rcpp_get_sp_dists_par_xy(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP heap_typeSEXP, SEXP bidirectedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    Rcpp::traits::input_parameter< const bool >::type bidirected(bidirectedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp_dists_par_xy(graph, vert_map_in, fromi, toi, heap_type, bidirected));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_sp_dists
Rcpp::NumericMatrix rcpp_get_sp_dists(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi, const std::string& heap_type);
RcppExport SEXP _dodgr_rcpp_get_sp_dists(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp_dists(graph, vert_map_in, fromi, toi, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_paths
Rcpp::List rcpp_get_paths(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi, const std::string& heap_type);
RcppExport SEXP _dodgr_rcpp_get_paths(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_paths(graph, vert_map_in, fromi, toi, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_aggregate_files
Rcpp::NumericVector rcpp_aggregate_files(const Rcpp::CharacterVector file_names, const int len);
RcppExport SEXP _dodgr_rcpp_aggregate_files(SEXP file_namesSEXP, SEXP lenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector >::type file_names(file_namesSEXP);
    Rcpp::traits::input_parameter< const int >::type len(lenSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_aggregate_files(file_names, len));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_flows_aggregate_par
void rcpp_flows_aggregate_par(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi, const Rcpp::NumericMatrix flows, const std::string dirtxt, const std::string heap_type);
RcppExport SEXP _dodgr_rcpp_flows_aggregate_par(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP, SEXP flowsSEXP, SEXP dirtxtSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix >::type flows(flowsSEXP);
    Rcpp::traits::input_parameter< const std::string >::type dirtxt(dirtxtSEXP);
    Rcpp::traits::input_parameter< const std::string >::type heap_type(heap_typeSEXP);
    rcpp_flows_aggregate_par(graph, vert_map_in, fromi, toi, flows, dirtxt, heap_type);
    return R_NilValue;
END_RCPP
}
// rcpp_flows_disperse
Rcpp::NumericVector rcpp_flows_disperse(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, double k, Rcpp::NumericMatrix flows, std::string heap_type);
RcppExport SEXP _dodgr_rcpp_flows_disperse(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP kSEXP, SEXP flowsSEXP, SEXP heap_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type flows(flowsSEXP);
    Rcpp::traits::input_parameter< std::string >::type heap_type(heap_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_flows_disperse(graph, vert_map_in, fromi, k, flows, heap_type));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sf_as_network
Rcpp::List rcpp_sf_as_network(const Rcpp::List& sf_lines, const Rcpp::DataFrame& pr);
RcppExport SEXP _dodgr_rcpp_sf_as_network(SEXP sf_linesSEXP, SEXP prSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type sf_lines(sf_linesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type pr(prSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sf_as_network(sf_lines, pr));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_points_index_par
Rcpp::IntegerVector rcpp_points_index_par(const Rcpp::DataFrame& xy, Rcpp::DataFrame& pts);
RcppExport SEXP _dodgr_rcpp_points_index_par(SEXP xySEXP, SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type xy(xySEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_points_index_par(xy, pts));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_points_index
Rcpp::IntegerVector rcpp_points_index(const Rcpp::DataFrame& xy, Rcpp::DataFrame& pts);
RcppExport SEXP _dodgr_rcpp_points_index(SEXP xySEXP, SEXP ptsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type xy(xySEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type pts(ptsSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_points_index(xy, pts));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dodgr_rcpp_aggregate_to_sf", (DL_FUNC) &_dodgr_rcpp_aggregate_to_sf, 3},
    {"_dodgr_rcpp_fundamental_cycles", (DL_FUNC) &_dodgr_rcpp_fundamental_cycles, 2},
    {"_dodgr_rcpp_contract_graph", (DL_FUNC) &_dodgr_rcpp_contract_graph, 2},
    {"_dodgr_rcpp_merge_flows", (DL_FUNC) &_dodgr_rcpp_merge_flows, 1},
    {"_dodgr_rcpp_sample_graph", (DL_FUNC) &_dodgr_rcpp_sample_graph, 2},
    {"_dodgr_rcpp_get_component_vector", (DL_FUNC) &_dodgr_rcpp_get_component_vector, 1},
    {"_dodgr_rcpp_get_sp_dists_par", (DL_FUNC) &_dodgr_rcpp_get_sp_dists_par, 5},
    {"_dodgr_rcpp_get_sp_dists_par_xy", (DL_FUNC) &_dodgr_rcpp_get_sp_dists_par_xy, 6},
    {"_dodgr_rcpp_get_sp_dists", (DL_FUNC) &_dodgr_rcpp_get_sp_dists, 5},
    {"_dodgr_rcpp_get_paths", (DL_FUNC) &_dodgr_rcpp_get_paths, 5},
    {"_dodgr_rcpp_aggregate_files", (DL_FUNC) &_dodgr_rcpp_aggregate_files, 2},
    {"_dodgr_rcpp_flows_aggregate_par", (DL_FUNC) &_dodgr_rcpp_flows_aggregate_par, 7},
    {"_dodgr_rcpp_flows_disperse", (DL_FUNC) &_dodgr_rcpp_flows_disperse, 6},
    {"_dodgr_rcpp_sf_as_network", (DL_FUNC) &_dodgr_rcpp_sf_as_network, 2},
    {"_dodgr_rcpp_points_index_par", (DL_FUNC) &_dodgr_rcpp_points_index_par, 2},
    {"_dodgr_rcpp_points_index", (DL_FUNC) &_dodgr_rcpp_points_index, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_dodgr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
