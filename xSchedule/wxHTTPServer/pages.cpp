// Copyright (c) 2014 framerik <framerik@gmail.com>
// All rights reserved
//
// This library is dual-licensed: you can redistribute it and/or modify it under the terms
// of the GNU General Public License version 2 as published by the Free Software Foundation.
// For the terms of this license, see <http://www.gnu.org/licenses/>.
//
// You are free to use this library under the terms of the GNU General Public License, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU General Public License for more details.
//
// If you find this project useful and wish to donate you can do with an
// Amazon Gift Cards - E-mail Delivery https://www.amazon.it/gp/product/B005VG4G3U/gcrnsts

#include "wxhttpserver.h"

const char *PAGE400 =
	"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">"
	"<html xmlns=\"http://www.w3.org/1999/xhtml\" >"
	"<head>"
	"	<title>400 - Bad Request</title>"
	"	<style type=\"text/css\">"
	"	* { font-family: Arial, Helvetica, sans-serif; }"
	"	h1 { color: #039; }"
	"	p { color: #333; }"
	"	hr { color:#36c; }"
	"  </style>"
	"</head>"
	"<body>"
	"	<h1>400 - Bad Request</h1>"
	"	<hr />"
	"	<p>The request could not be understood by the server due to malformed syntax.</p>"
	"	<div style=\"border: 1px solid #ccc\">"
	"	<dl>"
	"		<dt>Method</dt><dd>%METHOD%</dd>"
	"		<dt>Requested URI</dt><dd>%URI%</dd>"
	"		<dt>HTTP Version</dt><dd>%VERSION%</dd>"
	"	</dl>"
	"	</div>"
	"	<hr />"
	"	<p><small>" SERVER_NAME " version " SERVER_VERSION "</small></p>"
	"</body>"
	"</html>";

const char *PAGE404 =
	"<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">"
	"<html xmlns=\"http://www.w3.org/1999/xhtml\" >"
	"<head>"
	"	<title>404 - Not Found</title>"
	"	<style type=\"text/css\">"
	"	* { font-family: Arial, Helvetica, sans-serif; }"
	"	h1 { color: #039; }"
	"	p { color: #333; }"
	"	hr { color:#36c; }"
	"  </style>"
	"</head>"
	"<body>"
	"	<h1>404 - Not Found</h1>"
	"	<hr />"
	"	<p>The server has not found anything matching the Request-URI.</p>"
	"	<div style=\"border: 1px solid #ccc\">"
	"	<dl>"
	"		<dt>Method</dt><dd>%METHOD%</dd>"
	"		<dt>Requested URI</dt><dd>%URI%</dd>"
	"		<dt>HTTP Version</dt><dd>%VERSION%</dd>"
	"	</dl>"
	"	</div>"
	"	<hr />"
	"	<p><small>" SERVER_NAME " version " SERVER_VERSION "</small></p>"
	"</body>"
	"</html>";
