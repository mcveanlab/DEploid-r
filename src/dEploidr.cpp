#include <Rcpp.h>

#include <iostream>
#include <fstream>
#include <memory>

#include "DEploid/dEploidIO.hpp"
#include "DEploid/random/fastfunc.hpp"


using namespace Rcpp;
std::ofstream fs;
bool write_file;


// [[Rcpp::plugins(cpp11)]]
//' Deconvolute mixed haplotypes, and reporting the mixture proportions from each sample
//' This function provieds an interface for calling \emph{dEploid} from R.
//' The command line options are passed via the \code{args} argument.
//'
//' @section blahblah:
//' Blah blah
//'
//' @param args A string containing the command line arguments from scrm.
//'
//' @return A named list of something something ...
//'
//' @export
//'
//' @examples
//' set.seed(1234)
//'
// [[Rcpp::export]]

List dEploid(std::string args, std::string file = "") {

    /** Parse args and generate the model */
    DEploidIO dEploidIO(args);

    // Print help or version information if user asked for it
    if (dEploidIO.help()) stop("Please use '?dEploid' for help");
    if (dEploidIO.version()) {
        return List::create(_("version") = VERSION);
    }

  //std::shared_ptr<FastFunc> ff = std::make_shared<FastFunc>();
  //RRandomGenerator rrg(ff);

    /** Open a file for writing if 'file' is given */
    if (file.length() > 0) {
      fs.open(file);
      if(!fs.is_open()) stop(std::string("Failed to write the file '") + file +
                             std::string("'! Does the directory exist?"));
      write_file = true;
      fs << dEploidIO << std::endl;
    } else {
      write_file = false;
    }

    /** Throw a warning if -seed argmuent is used */
    if (dEploidIO.randomSeedWasSet()){
      Rf_warning("Ignoring seed argument. Set a seed in R.");
    }
    /** Clean up */
    return 1;
}
