% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{validate_gzip_file}
\alias{validate_gzip_file}
\title{Validate if a File is a Valid Gzip File}
\usage{
validate_gzip_file(file_path)
}
\arguments{
\item{file_path}{A string representing the path of the file to validate.}
}
\value{
A boolean value indicating whether the file is a valid gzip file.
\code{TRUE} if the file is valid, \code{FALSE} otherwise.
}
\description{
This function takes a file path as input and checks if it's a valid gzip-compressed file.
It reads the file in chunks and tries to decompress it using the zlib library.
If any step fails, the function returns \code{FALSE}. Otherwise, it returns \code{TRUE}.
}
\examples{
validate_gzip_file("path/to/your/file.gz")
}
