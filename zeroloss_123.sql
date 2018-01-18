-- phpMyAdmin SQL Dump
-- version 4.7.3
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Generation Time: Jan 18, 2018 at 03:21 PM
-- Server version: 10.1.30-MariaDB
-- PHP Version: 5.6.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `zeroloss_123`
--

-- --------------------------------------------------------

--
-- Table structure for table `clients`
--

CREATE TABLE `clients` (
  `id` int(11) NOT NULL,
  `passkey` varchar(150) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `uri` varchar(150) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `ps` text CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `clients`
--

INSERT INTO `clients` (`id`, `passkey`, `uri`, `ps`) VALUES
(1, 'yeni33', '', ''),
(2, 'yeni22', '', '');

-- --------------------------------------------------------

--
-- Table structure for table `orders`
--

CREATE TABLE `orders` (
  `id` int(11) NOT NULL,
  `passkey` varchar(100) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `market` varchar(30) CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL,
  `raw_order` text CHARACTER SET utf8 COLLATE utf8_unicode_ci NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `orders`
--

INSERT INTO `orders` (`id`, `passkey`, `market`, `raw_order`) VALUES
(32, 'test123', 'BTC-ADA', 'a:1:{s:6:\"orders\";a:2:{s:4:\"sell\";a:3:{s:6:\"market\";s:7:\"BTC-ADA\";s:5:\"fiyat\";s:10:\"0.00004848\";s:6:\"miktar\";s:11:\"10.00000000\";}s:8:\"stopsell\";a:4:{s:6:\"market\";s:7:\"BTC-ADA\";s:4:\"stop\";s:10:\"0.00004848\";s:5:\"fiyat\";s:10:\"0.00004848\";s:6:\"miktar\";s:11:\"10.00000000\";}}}');

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `id` int(11) NOT NULL,
  `email` varchar(150) NOT NULL,
  `password` varchar(150) NOT NULL,
  `hwid` varchar(150) NOT NULL,
  `passkey` varchar(150) NOT NULL,
  `api_key` varchar(150) NOT NULL,
  `api_secret` varchar(150) NOT NULL,
  `btc` varchar(40) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`id`, `email`, `password`, `hwid`, `passkey`, `api_key`, `api_secret`, `btc`) VALUES
(1, 'eyupsahin147147@gmail.com', 'eyup1112', '15C8-898B-B52C-26B3-B328-2FC0-533E-ED23', 'yeni22', '903674be12fd4726afd26e34e6e6704b', '97dd19b5ed394b19aabe8925f28ef116', '1QHthptGqCszdAGZQRFUvtZdFhGraHAeGx'),
(2, 'asddsasda@gmail.com', 'eyup1112', 'AEEA-23F3-686B-A9EF-2565-6222-2619-71F0', 'yeni33', '903674be12fd4726afd26e34e6e6704b', '97dd19b5ed394b19aabe8925f28ef116', '1QHthptGqCszdAGZQRFUvtZdFhGraHAeGx'),
(3, 'mirzajoe3591@gmail.com', 'delibalta1.', '', '', '', '', '38iyJDNh1D3B7zowF7SvqMv7Xx5PewggR5'),
(4, 'asddsa@asdds.com', 'sddsads', '15C8-898B-B52C-26B3-B328-2FC0-533E-ED23', 'test123', '903674be12fd4726afd26e34e6e6704b', '97dd19b5ed394b19aabe8925f28ef116', '1QHthptGqCszdAGZQRFUvtZdFhGraHAeGx');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `clients`
--
ALTER TABLE `clients`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `orders`
--
ALTER TABLE `orders`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `users`
--
ALTER TABLE `users`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `clients`
--
ALTER TABLE `clients`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
--
-- AUTO_INCREMENT for table `orders`
--
ALTER TABLE `orders`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=33;
--
-- AUTO_INCREMENT for table `users`
--
ALTER TABLE `users`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
