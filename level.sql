-- phpMyAdmin SQL Dump
-- version 3.2.0.1
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: Jul 09, 2014 at 04:54 PM
-- Server version: 5.1.37
-- PHP Version: 5.3.0

SET SQL_MODE="NO_AUTO_VALUE_ON_ZERO";

--
-- Database: `test`
--

-- --------------------------------------------------------

--
-- Table structure for table `blockedusers`
--

CREATE TABLE IF NOT EXISTS `blockedusers` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `blocker` varchar(16) NOT NULL,
  `blockee` varchar(16) NOT NULL,
  `blockdate` datetime NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

--
-- Dumping data for table `blockedusers`
--


-- --------------------------------------------------------

--
-- Table structure for table `chat`
--

CREATE TABLE IF NOT EXISTS `chat` (
  `sender` varchar(255) DEFAULT NULL,
  `receiver` varchar(255) DEFAULT NULL,
  `msg` text,
  `time` datetime DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `chat`
--

INSERT INTO `chat` (`sender`, `receiver`, `msg`, `time`) VALUES
('gaurav', 'ramu', 'Â hi', '2014-01-16 14:23:20'),
('ramu', 'gaurav', 'Â aur hai', '2014-01-16 14:23:49'),
('gaurav', 'ramu', 'Â ', '2014-01-16 14:24:10'),
('gaurav', 'ramu', 'saas', '2014-01-16 14:24:12'),
('gaurav', 'ramu', 'Â sasa', '2014-01-16 14:28:46'),
('ramu', 'gaurav', 'Â asas', '2014-01-16 14:28:50'),
('ramu', 'gaurav', 'sasas', '2014-01-16 14:29:01'),
('gaurav', 'ramu', 'asas', '2014-01-16 14:29:25'),
('ramu', 'gaurav', 'aass', '2014-01-16 14:29:29'),
('gaurav', 'ramu', 'wwqw', '2014-01-16 14:31:17'),
('gaurav', 'ramu', 'Â sasa', '2014-01-16 14:34:40'),
('ramu', 'gaurav', 'Â aur bhai', '2014-01-16 14:35:04'),
('gaurav', 'ramu', 'Â as', '2014-01-16 14:55:08'),
('gaurav', 'ramu', 'as', '2014-01-16 14:55:12'),
('gaurav', 'ramu', 'Â ass', '2014-01-16 14:56:00'),
('gaurav', 'ramu', 'Â asa', '2014-01-16 15:02:16'),
('gaurav', 'ramu', 'aasas', '2014-01-16 15:02:24'),
('gaurav', 'ramu', 'Â assa', '2014-01-16 15:03:17'),
('gaurav', 'ramu', 'Â asa', '2014-01-16 15:06:04'),
('gaurav', 'ramu', 'asa', '2014-01-16 15:06:07'),
('gaurav', 'ramu', 'as', '2014-01-16 15:06:12'),
('gaurav', 'ramu', 'asds', '2014-01-16 15:07:01'),
('gaurav', 'ramu', 'Â sasa', '2014-01-16 15:08:42'),
('gaurav', 'ramu', 'assas', '2014-01-16 15:08:45'),
('ramu', 'gaurav', 'Â hiii\n\n\n', '2014-01-16 16:31:11'),
('ramu', 'gaurav', 'naveen\n', '2014-01-16 16:32:07'),
('ramu', 'gaurav', 'Â hello', '2014-01-17 12:09:30'),
('gaurav', 'ramu', 'Â heelo bhai', '2014-01-17 16:29:23'),
('ramu', 'gaurav', 'Â he\n', '2014-01-17 16:29:35'),
('gaurav', 'ramu', 'ok', '2014-01-17 16:29:43'),
('gaurav', 'kiran', 'Â hi', '2014-01-18 14:22:34'),
('kiran', 'gaurav', 'Â ok', '2014-01-18 14:22:41'),
('gaurav', 'kiran', 'no ways', '2014-01-18 14:22:49'),
('kiran', 'ramu', 'Â hey', '2014-01-18 14:51:30'),
('kiran', 'ramu', 'Â sdsd', '2014-01-18 15:16:06'),
('kiran', 'ramu', 'sdd', '2014-01-18 15:16:07'),
('kiran', 'ramu', '', '2014-01-18 15:16:08'),
('kiran', 'ramu', 'ssd', '2014-01-18 15:16:09'),
('kiran', 'ramu', 'd', '2014-01-18 15:16:10'),
('kiran', 'ramu', '', '2014-01-18 15:16:11'),
('kiran', 'ramu', '', '2014-01-18 15:16:13'),
('kiran', 'ramu', 'sds', '2014-01-18 15:16:17'),
('kiran', 'ramu', 'dsds', '2014-01-18 15:16:18'),
('kiran', 'gaurav', 'Â ssd', '2014-01-18 15:28:07'),
('kiran', 'gaurav', 'Â ssdsdsd', '2014-01-18 15:28:11'),
('kiran', 'gaurav', 'Â sdsd', '2014-01-18 15:28:24'),
('kiran', 'gaurav', 'Â sdsd', '2014-01-18 15:28:25'),
('kiran', 'gaurav', 'Â ssdd\n', '2014-01-18 15:32:32'),
('kiran', 'gaurav', 'cx', '2014-01-18 15:34:57'),
('kiran', 'gaurav', 'Â asa', '2014-01-18 15:49:21'),
('kiran', 'gaurav', 'sa', '2014-01-18 15:49:28'),
('kiran', 'gaurav', 'Â assa', '2014-01-18 15:49:51'),
('kiran', 'gaurav', 'sasa', '2014-01-18 15:49:59'),
('kiran', 'gaurav', 'asas', '2014-01-18 15:50:02'),
('kiran', 'gaurav', 'gaurav', '2014-01-18 15:50:08'),
('kiran', 'ramu', 'Â sdsd', '2014-01-18 15:58:42'),
('kiran', 'ramu', 'Â ssd', '2014-01-18 16:02:07'),
('kiran', 'ramu', 'Â sss', '2014-01-18 16:19:19'),
('kiran', 'ramu', 'sdd', '2014-01-18 16:23:05'),
('kiran', 'ramu', 'Â ok', '2014-01-18 16:26:02'),
('kiran', 'ramu', 'Â sdss', '2014-01-18 16:29:06'),
('kiran', 'ramu', 'ssdsd', '2014-01-18 16:29:23'),
('kiran', 'ramu', 'Â sdsddsd', '2014-01-18 16:30:11'),
('kiran', 'ramu', 'Â sdsdds', '2014-01-18 16:54:05'),
('kiran', 'ramu', 'dsds', '2014-01-18 16:54:28'),
('kiran', 'ramu', 'Â sdsd', '2014-01-18 16:57:07'),
('gaurav', 'ramu', 'Â hello', '2014-01-19 17:19:56'),
('ramu', 'gaurav', 'Â hello', '2014-01-19 17:20:08'),
('kiran', 'gaurav', 'Â ', '2014-02-04 22:05:59'),
('kiran', 'gaurav', '', '2014-02-04 22:06:04');

-- --------------------------------------------------------

--
-- Table structure for table `fdlikes`
--

CREATE TABLE IF NOT EXISTS `fdlikes` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `pid` int(11) NOT NULL,
  `user` varchar(25) NOT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `user` (`user`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1 AUTO_INCREMENT=1 ;

--
-- Dumping data for table `fdlikes`
--


-- --------------------------------------------------------

--
-- Table structure for table `friends`
--

CREATE TABLE IF NOT EXISTS `friends` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `user1` varchar(16) NOT NULL,
  `user2` varchar(16) NOT NULL,
  `datemade` datetime NOT NULL,
  `accepted` enum('0','1') NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=20 ;

--
-- Dumping data for table `friends`
--

INSERT INTO `friends` (`id`, `user1`, `user2`, `datemade`, `accepted`) VALUES
(17, 'taru', 'gaurav', '2014-04-16 22:57:50', '1'),
(7, 'gaurav', 'gau', '2014-04-16 20:21:46', '0'),
(3, 'kiran', 'ramu', '2014-01-18 12:31:56', '1'),
(8, 'gaurav', 'gaurav1', '2014-04-16 20:22:00', '0'),
(19, 'kiran', 'gaurav', '2014-04-18 11:29:15', '1');

-- --------------------------------------------------------

--
-- Table structure for table `games`
--

CREATE TABLE IF NOT EXISTS `games` (
  `id` int(29) NOT NULL,
  `game` varchar(100) NOT NULL,
  `type` varchar(2000) NOT NULL,
  `pic` varchar(40) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `games`
--

INSERT INTO `games` (`id`, `game`, `type`, `pic`) VALUES
(1, 'adventures of blob', '<br /><object width="900" height="500"> 					<param name="movie" value="http://www.santa.net/free-santa-claus-games/arcade/1034.swf"> 					<embed src="http://www.santa.net/free-santa-claus-games/arcade/1034.swf" width="900" height="700"> 					</embed> 					</object><br>', 'blob.jpg'),
(2, 'farm', '<br /><object width="900" height="500"> 					<param name="movie" value="http://bigfarm.goodgamestudios.com/"> 					<embed src="http://bigfarm.goodgamestudios.com/" width="900" height="700"> 					</embed> 					</object><br>', NULL),
(3, 'super mario', '<a class=''aclass'' href=<div align="center"><object width="640" height="480"><param name="movie" value="http://www.gamesforblog.com/gamesforyou/super-mario-63.swf"><param name="quality" value="high"><embed src="http://www.gamesforblog.com/gamesforyou/super-mario-63.swf" quality="high" width="640" height="400" type="application/x-shockwave-flash" pluginspage= "http://www.macromedia.com/go/getflashplayer"></embed></object><br/><a href="http://www.knugo.com/games/Mario_Games"><strong>Mario games on Knugo.com</strong></a></div> <p>"http://www.softschools.com/games/action_games/crazy_taxi/">Crazy Taxi</a>', NULL);

-- --------------------------------------------------------

--
-- Table structure for table `mst_admin`
--

CREATE TABLE IF NOT EXISTS `mst_admin` (
  `loginid` varchar(20) DEFAULT NULL,
  `pass` varchar(20) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `mst_admin`
--

INSERT INTO `mst_admin` (`loginid`, `pass`) VALUES
('sairam', 'sairam');

-- --------------------------------------------------------

--
-- Table structure for table `mst_question`
--

CREATE TABLE IF NOT EXISTS `mst_question` (
  `que_id` int(5) NOT NULL AUTO_INCREMENT,
  `test_id` int(5) DEFAULT NULL,
  `que_desc` varchar(150) DEFAULT NULL,
  `ans1` varchar(75) DEFAULT NULL,
  `ans2` varchar(75) DEFAULT NULL,
  `ans3` varchar(75) DEFAULT NULL,
  `ans4` varchar(75) DEFAULT NULL,
  `true_ans` int(1) DEFAULT NULL,
  PRIMARY KEY (`que_id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=134 ;

--
-- Dumping data for table `mst_question`
--

INSERT INTO `mst_question` (`que_id`, `test_id`, `que_desc`, `ans1`, `ans2`, `ans3`, `ans4`, `true_ans`) VALUES
(16, 8, 'What  Default Data Type ?', 'String', 'Variant', 'Integer', 'Boolear', 2),
(17, 8, 'What is Default Form Border Style ?', 'Fixed Single', 'None', 'Sizeable', 'Fixed Diaglog', 3),
(18, 8, 'Which is not type of Control ?', 'text', 'lable', 'checkbox', 'option button', 1),
(19, 9, 'Which of the follwing contexts are available in the add watch window?', 'Project', 'Module', 'Procedure', 'All', 4),
(20, 9, 'Which window will allow you to halt the execution of your code when a variable changes?', 'The call stack window', 'The immedite window', 'The locals window', 'The watch window', 4),
(22, 9, 'How can you print the object name associated with the last VB  error to the Immediate window?', 'Debug.Print Err.Number', 'Debug.Print Err.Source', 'Debug.Print Err.Description', 'Debug.Print Err.LastDLLError', 2),
(23, 9, 'How can you print the object name associated with the last VB  error to the Immediate window?', 'Debug.Print Err.Number', 'Debug.Print Err.Source', 'Debug.Print Err.Description', 'Debug.Print Err.LastDLLError', 2),
(24, 9, 'What function does the TabStop property on a command button perform?', 'It determines whether the button can get the focus', 'If set to False it disables the Tabindex property.', 'It determines the order in which the button will receive the focus', 'It determines if the access key swquence can be used', 1),
(25, 10, 'You application creates an instance of a form. What is the first event that will be triggered in the from?', 'Load', 'GotFocus', 'Instance', 'Initialize', 4),
(26, 10, 'Which of the following is Hungarian notation for a menu?', 'Menu', 'Men', 'mnu', 'MN', 3),
(27, 10, 'You are ready to run your program to see if it works.Which key on your keyboard will start the program?', 'F2', 'F3', 'F4', 'F5', 4),
(28, 10, 'Which of the following snippets of code will unload a form named frmFo0rm from memory?', 'Unload Form', 'Unload This', 'Unload Me', 'Unload', 3),
(29, 10, 'You want the text in text box named txtMyText to read My Text.In which property will you place this string?', 'Caption', 'Text', 'String', 'None of the above', 2),
(30, 11, 'How many data types are there in c ?', '8', '7', '6', '5', 3),
(31, 11, 'Range of integer type of data ?', '-32768 to 32767', '123-133', '152 to 258', '-78954 to 32564', 1),
(32, 11, 'getchar() is used to get ?', 'integer', 'string', 'character', 'print', 3),
(33, 11, 'gets() is used to get???', 'number', 'character', 'string', 'integer', 3),
(34, 11, 'short cut key to save is _', 'f4', 'f9', 'f2', 'f1', 3),
(35, 11, 'short cut key to close the program?.?', 'f7', 'f3', 'f8', 'f9', 2),
(36, 11, 'who invented c language ?', 'Denis Ritchie', 'Pascal Blaise', 'Denis reddy', 'Bill gets', 1),
(37, 11, 'To come out of c __shortcut key is used?', 'alt+b', 'alt+k', 'alt+m', 'alt+x', 4),
(38, 11, 'strlen() return _____ types of data ?', 'integer', 'character', 'string', 'void', 1),
(40, 11, 'how many keyword are there in c?', '56', '54', '64', '32', 4),
(49, 11, 'for multiline comment ___ is used', '//', '??', '/*', '\\*', 3),
(50, 11, '"default: " statement is a part of ___', 'switch case', 'If else', 'if', 'loop', 1),
(53, 11, 'or operator in c is ________type of operator ?', 'arethametic', 'logical', 'bitwise', 'conditional', 2),
(54, 11, '___is assignment operator in c ?', '*', '++', '=', '--', 3),
(55, 11, 'Every function returns___type of value ?', 'int', 'char', 'float', 'none of these', 4),
(56, 11, 'what is the answer of 8%5', '4.5', '3', '1', '1.3', 2),
(57, 11, 'gets() is defined in ?', 'stdio.h', 'conio.h', 'string.h', 'dos.h', 1),
(58, 11, '__key is used to zoom the screen', 'f5', 'f6', 'f9', 'alt+f9', 1),
(59, 11, '____decision making control', 'for loop', 'do while', 'function', 'switch case', 4),
(60, 12, 'RAM Stands for', 'Random Access Memory', 'Random accelerated Memory', 'Random Access Machenism', 'Random Accurace Mantan', 1),
(61, 12, 'PC Stands for', 'pocket computer', 'personal computer', 'phisycal computer', 'personal card', 2),
(62, 12, 'Personal Computer are the type of computer', 'super computer', 'mini computer', 'micro computer', 'mainframe computer', 3),
(63, 12, 'floppy disk is the type of memory', 'magnatic & secondarymain memory', 'main memory', 'o primary', 'none of the above', 1),
(64, 12, 'keybord is the type of device', 'input', 'pointing', 'output', 'sound', 1),
(65, 12, 'mouse is the type of device', 'input', 'pointing', 'scanning', 'none of the above', 2),
(66, 12, 'which of the following is input device', 'speaker', 'printer', 'plotter', 'scanner', 4),
(67, 12, '________is colled the brain of computer', 'mouse', 'keyboard', 'cpu', 'memory', 3),
(68, 12, 'the development of first generation computer is', '1955-1965', '1965-1975', '1945-1954', 'none', 3),
(69, 12, 'all arithmetic and logical processing is done in', 'ALU', 'CU', 'CPU', 'none of the above', 3),
(70, 12, 'the delete the character right side of the cursor which key is used', 'inst', 'del', 'backspace', 'home', 2),
(71, 12, 'to deleter the character towards left side is', 'backspace', 'del', 'inst', 'home', 1),
(72, 12, 'in keyboard the function of which type keys change according the software', 'alphanumeric key', 'numeric key pad', 'function key', 'none of the above', 2),
(73, 12, 'to enter the number a special key slot is given on the keyboard which is', 'alphanumeric number', 'numeric key pad', 'function key', 'none of the above', 2),
(74, 12, 'on numeric key pad the keyu present are', '0 to 9 numbers', '+/*characters', 'arrow key', 'all of the above', 4),
(75, 12, 'to move the cursor beginning of the which key is used', 'end', 'home', 'pgup', 'pgdn', 2),
(76, 12, 'to move the cursor end of the which key is used', 'end', 'home', 'pgup', 'pgdn', 1),
(77, 12, 'the touchable part of computer is called as', 'hardware', 'software', 'programe', 'none', 1),
(78, 12, 'if caps lock key is on then', 'small letters are printed', 'the lowercase letter are printed', 'capital letters print', 'none of the above', 3),
(79, 12, '________are equivalent to 1 mb', '1022 kb', '1024 kb', '1024 byte', '1000 gb', 2),
(80, 13, 'the combination key for command in ms-word is', 'ctrl+f', 'ctrl+f3', 'ctrl+s', 'none', 1),
(81, 13, 'while editing document in ms-word the colour of the selected text can be changed by', 'format font', 'format text', 'format paragraph', 'none of the above', 1),
(82, 13, 'which keystroke is used to move end of document quickly', 'end', 'pgdn', 'ctrl+pgdn', 'ctrl+end', 4),
(83, 13, 'from the following option does not present in the picture option of insert menu', 'auto shpe', 'clip art', 'from file', 'object', 4),
(84, 13, 'in ms-word to appear full form abberiatin automatically we can use', 'autotext', 'auto correct', 'comments', 'drop cap', 1),
(85, 13, 'to appear the same information at the top or bottom of each page we use', 'headers & footer', 'hyperlink', 'field', 'none', 1),
(86, 13, 'which option is not present under tool menu', 'mail merge', 'auto text', 'language', 'drop cap', 4),
(87, 13, 'to convert "the computer" in to "THE COMPUTER" which option is used', 'title case', 'toggle case', 'upper case', 'all caps', 3),
(88, 13, 'which is the shortcut key to replace the text', 'ctrl+r', 'ctrl+h', 'ctrl+d', 'ctrl+e', 2),
(89, 13, 'which sortcut key is used to redo action?', 'ctrl+r', 'ctrl+y', 'ctrl+e', 'ctrl+u', 2),
(90, 13, 'to change the size of document page using', 'file properties', 'file page setup', 'tools option', 'format paragraph', 2),
(91, 13, 'to set the shading for the paragrph in ms-word chose', 'insert shading', 'format border & shading', 'view shading', 'all the above', 2),
(92, 13, 'bold,italic,underline are the part of_________toolbar', 'formating', 'standerd', 'drawing', 'central', 1),
(93, 13, 'the list in bottom of the file menu', 'display last foure file you use', 'display all opened files', 'allow to close file', 'none of the above', 1),
(94, 13, 'the date and time command', 'inaert the date & time you specify', 'insert current system date & time', 'inmsert last updated date & time', 'none of the above', 2),
(95, 13, 'if you want to copy a selection of text,which button do you click?', 'move', 'copy', 'duplicate', 'cut', 2),
(96, 13, 'which of the follwing is not option of edit menu', 'cut', 'copy', 'page setup', 'paste', 3),
(97, 13, 'alignment buttons are available on______________', 'ststus bar', 'for mating toolbar', 'standerd toolbar', 'none of these', 2),
(98, 13, 'when microsoft word gets loaded the opening screen display a document named', 'document1', 'document', 'doc1', 'no document name', 1),
(99, 13, 'the document can be zoomed maximum up to', '100%', '150%', '200%', '500%', 4),
(100, 13, 'to delete the selected sentence we can press the following press', 'del', 'backspace', 'both a&b', 'none of the above', 3),
(101, 13, 'to start a new line', 'enter', 'shift+enter', 'ctrl+enter', 'none of these', 1),
(102, 13, 'Spelling check is not possible in ___________________', 'Normal View', 'Out Line View', 'Print Lay Out View', 'None of these', 4),
(103, 13, 'Word Text can be made italic by____________________', 'Ctrl+I', 'Ctrl+B', 'Ctrl+U', 'None of the above', 1),
(104, 13, 'By Default Word Format your text as', '14 Point Times New Roman', '12 Point Times New Roman', '11 point Times New Roman', 'None of the above', 2),
(105, 14, 'Which city is known as The City of Palaces?', 'Kolkatta', 'Jerusalem', 'Mumbai', 'Udaipur', 1),
(106, 14, 'The Gateway of India is ?', 'Delhi', 'Kolkatta', 'Mumbai', 'Jammu', 3),
(107, 14, 'Which city is known as Pink City?', 'Hyderabad', 'Jaipur', 'Bangalore', 'Patna', 2),
(108, 14, 'Which is the city of Golden Temple?', 'Amritsar', 'Banaras', 'Chennai', 'Delhi', 1),
(109, 14, 'The Land of Lilies ?', 'Finland', 'Japan', 'USA', 'Canada', 4),
(110, 14, 'The symbol dove signifies ?', 'Strength', 'Dignity', 'Peace', 'Distress', 3),
(113, 14, 'How many players are there on each side in a baseball match', '7', '9', '5', '11', 2),
(114, 14, 'Which one of seven wonders of the world is in India', 'Leaning Tower', 'Eiffel Tower', 'TajMahal', 'Colosseum', 3),
(115, 14, 'Who started the ancient Olympic Games', 'the Greeks', 'the Egyptians', 'the Romans', 'the Aryans', 1),
(116, 14, 'The first Indian in Space was?', 'Vishnu Bhagvat', 'Rakesh Sharma', 'Kalpana Chawla', 'Juhi Chawla', 2),
(117, 14, 'After how many years gap is the Cricket World Cup held?', '3', '4', '5', '6', 2),
(119, 14, 'The slogan Piyo Sar Utha ke is associated with which company?', 'Pepsi', 'Mirinda', 'Thums Up', 'Coca-Cola', 4),
(120, 14, 'Which of these is a renewable source of energy?', 'sunlight', 'petrol', 'coal', 'diesel', 1),
(121, 14, 'Biogas consists mainly of ?', 'carbon monoxide', 'methane', 'chlorine', 'nitrogen', 2),
(122, 14, 'Deafness can be caused by ?', 'water pollution', 'air pollution', 'noise pollution', 'soil pollution', 3),
(123, 14, 'Which animal is the logo of WWF?', 'bear', 'giant panda', 'eagle', 'tiger', 2),
(124, 14, 'Acoustics deals with ?', 'sound', 'light', 'insects', 'air', 1),
(125, 14, 'Fatehpur Sikri was built by ?', 'Aurungzeb', 'Akbar', 'Shah Jahan', 'Jahengir', 2),
(126, 14, 'Which is the largest ocean in the world?', 'Atlantic', 'Pacific', 'Indian', 'Arctic', 2),
(127, 14, 'The sea-route to India was discovered in?', '1598', '1558', '1498', '1458', 3),
(128, 14, 'When is U.N. Day celebrated?', '24 Oct', '23 Oct', '24 Sep', '23 Nov', 1),
(129, 14, 'Which of the following countries celebrates Christmas festival in the summer season?', 'Canada', 'Britian', 'Australia', 'Zimbabwe', 3),
(131, 15, 'How do u write "Hello world" in PHP?', 'echo "Hello world";', 'document.write("Hello world");', '"Hello world";', 'printf("Hello world");', 1),
(130, 15, 'what does PHP stand for?', 'personal hypertext  processor', 'private home page', 'personal home page', 'PHP:Hypertext preprocessor', 4),
(1, 15, 'All variable in PHP start with which symbol?', '!', '$', '&', '#', 2),
(2, 15, 'what is the correct way to end a PHP  statement?', '</php>', '.', ';', 'new line', 3),
(3, 15, 'The PHP syntax is most similar to?', 'VB script', 'Java script', 'Perl ', 'c#', 2),
(4, 15, 'how do u get information from a form that is submitted using the "get" method?', 'Request.Form;', '$_GET[ ];', 'Request.QueryString;', '$_POST[ ];', 2),
(8, 16, 'What does SQL stand for?', 'Structured Question Language', 'Strong Question Language', 'Structured Query Language', 'String Query Language', 3),
(5, 15, 'What is the correct way to create a function in PHP?', 'create myFunction()', 'function myFunction()', 'new_function myFunction()', 'load_function myFunction()', 2),
(6, 15, 'What is the correct way to add 1 to the $count variable?', 'count++;', '$count =+1', '++count', '$count++;', 4),
(7, 15, 'Which one of these variables has an illegal name?', '$my_Var', '$my-Var', '$myVar', '$my&Var', 3);

-- --------------------------------------------------------

--
-- Table structure for table `mst_subject`
--

CREATE TABLE IF NOT EXISTS `mst_subject` (
  `sub_id` int(5) NOT NULL AUTO_INCREMENT,
  `sub_name` varchar(25) DEFAULT NULL,
  PRIMARY KEY (`sub_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=13 ;

--
-- Dumping data for table `mst_subject`
--

INSERT INTO `mst_subject` (`sub_id`, `sub_name`) VALUES
(1, 'VB'),
(5, 'Computer Fundamental'),
(7, 'C Language'),
(8, 'Ms Office'),
(9, 'General Knowledge'),
(10, 'php'),
(11, 'SQL'),
(12, 'java');

-- --------------------------------------------------------

--
-- Table structure for table `mst_test`
--

CREATE TABLE IF NOT EXISTS `mst_test` (
  `test_id` int(5) NOT NULL AUTO_INCREMENT,
  `sub_id` int(5) DEFAULT NULL,
  `test_name` varchar(30) DEFAULT NULL,
  `total_que` varchar(15) DEFAULT NULL,
  PRIMARY KEY (`test_id`)
) ENGINE=InnoDB  DEFAULT CHARSET=latin1 AUTO_INCREMENT=19 ;

--
-- Dumping data for table `mst_test`
--

INSERT INTO `mst_test` (`test_id`, `sub_id`, `test_name`, `total_que`) VALUES
(8, 1, 'VB Basic Test', '3'),
(9, 1, 'Essentials of VB', '5'),
(10, 1, 'Creating User Services', '5'),
(11, 7, 'Objactive Test', '20'),
(12, 5, 'General Question', '20'),
(13, 8, 'Ms Office Question', '25'),
(14, 9, 'Knowledge Question', '22'),
(15, 10, 'php basic', '20'),
(16, 11, 'basic SQL', '10'),
(17, 12, 'basic java', '10'),
(18, 7, 'hell', '3');

-- --------------------------------------------------------

--
-- Table structure for table `mst_useranswer`
--

CREATE TABLE IF NOT EXISTS `mst_useranswer` (
  `sess_id` varchar(80) DEFAULT NULL,
  `test_id` int(11) DEFAULT NULL,
  `que_des` varchar(200) DEFAULT NULL,
  `ans1` varchar(50) DEFAULT NULL,
  `ans2` varchar(50) DEFAULT NULL,
  `ans3` varchar(50) DEFAULT NULL,
  `ans4` varchar(50) DEFAULT NULL,
  `true_ans` int(11) DEFAULT NULL,
  `your_ans` int(11) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `mst_useranswer`
--

INSERT INTO `mst_useranswer` (`sess_id`, `test_id`, `que_des`, `ans1`, `ans2`, `ans3`, `ans4`, `true_ans`, `your_ans`) VALUES
('2b8e3337837b82112def8d3e2f42f26e', 8, 'What  Default Data Type ?', 'String', 'Variant', 'Integer', 'Boolear', 2, 1),
('2b8e3337837b82112def8d3e2f42f26e', 8, 'What is Default Form Border Style ?', 'Fixed Single', 'None', 'Sizeable', 'Fixed Diaglog', 3, 3),
('2b8e3337837b82112def8d3e2f42f26e', 8, 'Which is not type of Control ?', 'text', 'lable', 'checkbox', 'option button', 1, 3),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Which city is known as The City of Palaces?', 'Kolkatta', 'Jerusalem', 'Mumbai', 'Udaipur', 1, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'The Gateway of India is ?', 'Delhi', 'Kolkatta', 'Mumbai', 'Jammu', 3, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Which city is known as Pink City?', 'Hyderabad', 'Jaipur', 'Bangalore', 'Patna', 2, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Which is the city of Golden Temple?', 'Amritsar', 'Banaras', 'Chennai', 'Delhi', 1, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'The Land of Lilies ?', 'Finland', 'Japan', 'USA', 'Canada', 4, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'The symbol dove signifies ?', 'Strength', 'Dignity', 'Peace', 'Distress', 3, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'How many players are there on each side in a baseball match', '7', '9', '5', '11', 2, 2),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Which one of seven wonders of the world is in India', 'Leaning Tower', 'Eiffel Tower', 'TajMahal', 'Colosseum', 3, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Who started the ancient Olympic Games', 'the Greeks', 'the Egyptians', 'the Romans', 'the Aryans', 1, 2),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'The first Indian in Space was?', 'Vishnu Bhagvat', 'Rakesh Sharma', 'Kalpana Chawla', 'Juhi Chawla', 2, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'After how many years gap is the Cricket World Cup held?', '3', '4', '5', '6', 2, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'The slogan Piyo Sar Utha ke is associated with which company?', 'Pepsi', 'Mirinda', 'Thums Up', 'Coca-Cola', 4, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Which of these is a renewable source of energy?', 'sunlight', 'petrol', 'coal', 'diesel', 1, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Biogas consists mainly of ?', 'carbon monoxide', 'methane', 'chlorine', 'nitrogen', 2, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Deafness can be caused by ?', 'water pollution', 'air pollution', 'noise pollution', 'soil pollution', 3, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Which animal is the logo of WWF?', 'bear', 'giant panda', 'eagle', 'tiger', 2, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Acoustics deals with ?', 'sound', 'light', 'insects', 'air', 1, 1),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Fatehpur Sikri was built by ?', 'Aurungzeb', 'Akbar', 'Shah Jahan', 'Jahengir', 2, 2),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Which is the largest ocean in the world?', 'Atlantic', 'Pacific', 'Indian', 'Arctic', 2, 2),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'The sea-route to India was discovered in?', '1598', '1558', '1498', '1458', 3, 3),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'When is U.N. Day celebrated?', '24 Oct', '23 Oct', '24 Sep', '23 Nov', 1, 2),
('a732eca2e5a08f17a4cfd53fe0ba1dfa', 14, 'Which of the following countries celebrates Christmas festival in the summer season?', 'Canada', 'Britian', 'Australia', 'Zimbabwe', 3, 1),
('2ef2bbec5a7a11bd9f39428d51474cae', 8, 'What  Default Data Type ?', 'String', 'Variant', 'Integer', 'Boolear', 2, 3),
('2ef2bbec5a7a11bd9f39428d51474cae', 8, 'What is Default Form Border Style ?', 'Fixed Single', 'None', 'Sizeable', 'Fixed Diaglog', 3, 2),
('51518d1da75a6898608a9f2ffacd5ab8', 14, 'Which city is known as The City of Palaces?', 'Kolkatta', 'Jerusalem', 'Mumbai', 'Udaipur', 1, 2),
('51518d1da75a6898608a9f2ffacd5ab8', 14, 'The Gateway of India is ?', 'Delhi', 'Kolkatta', 'Mumbai', 'Jammu', 3, 2),
('51518d1da75a6898608a9f2ffacd5ab8', 14, 'Which city is known as Pink City?', 'Hyderabad', 'Jaipur', 'Bangalore', 'Patna', 2, 1),
('51518d1da75a6898608a9f2ffacd5ab8', 14, 'Which is the city of Golden Temple?', 'Amritsar', 'Banaras', 'Chennai', 'Delhi', 1, 3),
('51518d1da75a6898608a9f2ffacd5ab8', 14, 'The Land of Lilies ?', 'Finland', 'Japan', 'USA', 'Canada', 4, 3),
('51518d1da75a6898608a9f2ffacd5ab8', 14, 'The symbol dove signifies ?', 'Strength', 'Dignity', 'Peace', 'Distress', 3, 1),
('51518d1da75a6898608a9f2ffacd5ab8', 14, 'How many players are there on each side in a baseball match', '7', '9', '5', '11', 2, 3),
('a5fb8d913086cc708d27f5c6fe77685a', 8, 'What  Default Data Type ?', 'String', 'Variant', 'Integer', 'Boolear', 2, 2),
('a5fb8d913086cc708d27f5c6fe77685a', 8, 'What is Default Form Border Style ?', 'Fixed Single', 'None', 'Sizeable', 'Fixed Diaglog', 3, 4),
('a5fb8d913086cc708d27f5c6fe77685a', 8, 'Which is not type of Control ?', 'text', 'lable', 'checkbox', 'option button', 1, 2),
('d9b2f430a181d2f8f84528adbbfe6da7', 8, 'What  Default Data Type ?', 'String', 'Variant', 'Integer', 'Boolear', 2, 2),
('d9b2f430a181d2f8f84528adbbfe6da7', 8, 'What is Default Form Border Style ?', 'Fixed Single', 'None', 'Sizeable', 'Fixed Diaglog', 3, 2),
('d9b2f430a181d2f8f84528adbbfe6da7', 8, 'Which is not type of Control ?', 'text', 'lable', 'checkbox', 'option button', 1, 2),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'if caps lock key is on then', 'small letters are printed', 'the lowercase letter are printed', 'capital letters print', 'none of the above', 3, 3),
('0f38cfc0215a52cb3897e828dc3f450d', 12, '________are equivalent to 1 mb', '1022 kb', '1024 kb', '1024 byte', '1000 gb', 2, 2),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'to move the cursor beginning of the which key is used', 'end', 'home', 'pgup', 'pgdn', 2, 2),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'to move the cursor end of the which key is used', 'end', 'home', 'pgup', 'pgdn', 1, 2),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'the touchable part of computer is called as', 'hardware', 'software', 'programe', 'none', 1, 3),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'to enter the number a special key slot is given on the keyboard which is', 'alphanumeric number', 'numeric key pad', 'function key', 'none of the above', 2, 1),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'on numeric key pad the keyu present are', '0 to 9 numbers', '+/*characters', 'arrow key', 'all of the above', 4, 3),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'the delete the character right side of the cursor which key is used', 'inst', 'del', 'backspace', 'home', 2, 2),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'to deleter the character towards left side is', 'backspace', 'del', 'inst', 'home', 1, 4),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'in keyboard the function of which type keys change according the software', 'alphanumeric key', 'numeric key pad', 'function key', 'none of the above', 2, 2),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'all arithmetic and logical processing is done in', 'ALU', 'CU', 'CPU', 'none of the above', 3, 3),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'which of the following is input device', 'speaker', 'printer', 'plotter', 'scanner', 4, 4),
('0f38cfc0215a52cb3897e828dc3f450d', 12, '________is colled the brain of computer', 'mouse', 'keyboard', 'cpu', 'memory', 3, 3),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'the development of first generation computer is', '1955-1965', '1965-1975', '1945-1954', 'none', 3, 1),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'mouse is the type of device', 'input', 'pointing', 'scanning', 'none of the above', 2, 1),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'keybord is the type of device', 'input', 'pointing', 'output', 'sound', 1, 2),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'floppy disk is the type of memory', 'magnatic & secondarymain memory', 'main memory', 'o primary', 'none of the above', 1, 3),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'Personal Computer are the type of computer', 'super computer', 'mini computer', 'micro computer', 'mainframe computer', 3, 3),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'RAM Stands for', 'Random Access Memory', 'Random accelerated Memory', 'Random Access Machenism', 'Random Accurace Mantan', 1, 3),
('0f38cfc0215a52cb3897e828dc3f450d', 12, 'PC Stands for', 'pocket computer', 'personal computer', 'phisycal computer', 'personal card', 2, 4),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'on numeric key pad the keyu present are', '0 to 9 numbers', '+/*characters', 'arrow key', 'all of the above', 4, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'to enter the number a special key slot is given on the keyboard which is', 'alphanumeric number', 'numeric key pad', 'function key', 'none of the above', 2, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'in keyboard the function of which type keys change according the software', 'alphanumeric key', 'numeric key pad', 'function key', 'none of the above', 2, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'to deleter the character towards left side is', 'backspace', 'del', 'inst', 'home', 1, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'the development of first generation computer is', '1955-1965', '1965-1975', '1945-1954', 'none', 3, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'all arithmetic and logical processing is done in', 'ALU', 'CU', 'CPU', 'none of the above', 3, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'the delete the character right side of the cursor which key is used', 'inst', 'del', 'backspace', 'home', 2, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, '________is colled the brain of computer', 'mouse', 'keyboard', 'cpu', 'memory', 3, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'mouse is the type of device', 'input', 'pointing', 'scanning', 'none of the above', 2, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'which of the following is input device', 'speaker', 'printer', 'plotter', 'scanner', 4, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'floppy disk is the type of memory', 'magnatic & secondarymain memory', 'main memory', 'o primary', 'none of the above', 1, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'keybord is the type of device', 'input', 'pointing', 'output', 'sound', 1, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'Personal Computer are the type of computer', 'super computer', 'mini computer', 'micro computer', 'mainframe computer', 3, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'RAM Stands for', 'Random Access Memory', 'Random accelerated Memory', 'Random Access Machenism', 'Random Accurace Mantan', 1, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'PC Stands for', 'pocket computer', 'personal computer', 'phisycal computer', 'personal card', 2, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'to move the cursor beginning of the which key is used', 'end', 'home', 'pgup', 'pgdn', 2, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'to move the cursor end of the which key is used', 'end', 'home', 'pgup', 'pgdn', 1, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'the touchable part of computer is called as', 'hardware', 'software', 'programe', 'none', 1, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, 'if caps lock key is on then', 'small letters are printed', 'the lowercase letter are printed', 'capital letters print', 'none of the above', 3, 2),
('rd4plcmddn45a2h6p1kfq9t492', 12, '________are equivalent to 1 mb', '1022 kb', '1024 kb', '1024 byte', '1000 gb', 2, 2);

-- --------------------------------------------------------

--
-- Table structure for table `notifications`
--

CREATE TABLE IF NOT EXISTS `notifications` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `username` varchar(16) NOT NULL,
  `initiator` varchar(16) NOT NULL,
  `app` varchar(255) NOT NULL,
  `note` varchar(255) NOT NULL,
  `did_read` enum('0','1') NOT NULL DEFAULT '0',
  `date_time` datetime NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=409 ;

--
-- Dumping data for table `notifications`
--

INSERT INTO `notifications` (`id`, `username`, `initiator`, `app`, `note`, `did_read`, `date_time`) VALUES
(1, 'gaurav', 'ramu', 'Posted', 'ramu posted on: <br /><a href="user.php?u=ramu#status_24">ramu&#39;s Profile</a>', '0', '2014-01-17 22:54:10'),
(8, 'kiran', 'gaurav', 'Replied', 'gaurav commented here:<br /><a href="user.php?u=gaurav#status_30">Click here to view the conversation</a>', '0', '2014-01-18 14:03:27'),
(3, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_28">gaurav&#39;s Profile</a>', '0', '2014-01-18 11:09:18'),
(4, 'kiran', 'ramu', 'Posted', 'ramu posted on: <br /><a href="user.php?u=ramu#status_31">ramu&#39;s Profile</a>', '0', '2014-01-18 12:35:33'),
(5, 'gaurav', 'ramu', 'Posted', 'ramu posted on: <br /><a href="user.php?u=ramu#status_31">ramu&#39;s Profile</a>', '0', '2014-01-18 12:35:33'),
(6, 'kiran', 'ramu', 'Posted', 'ramu posted on: <br /><a href="user.php?u=ramu#status_32">ramu&#39;s Profile</a>', '0', '2014-01-18 12:35:35'),
(7, 'gaurav', 'ramu', 'Posted', 'ramu posted on: <br /><a href="user.php?u=ramu#status_32">ramu&#39;s Profile</a>', '0', '2014-01-18 12:35:35'),
(9, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_35">kiran&#39;s Profile</a>', '0', '2014-01-18 14:07:48'),
(10, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_35">kiran&#39;s Profile</a>', '0', '2014-01-18 14:07:48'),
(11, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_36">kiran&#39;s Profile</a>', '0', '2014-01-18 14:11:15'),
(12, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_36">kiran&#39;s Profile</a>', '0', '2014-01-18 14:11:15'),
(13, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_37">kiran&#39;s Profile</a>', '0', '2014-01-18 14:23:59'),
(14, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_37">kiran&#39;s Profile</a>', '0', '2014-01-18 14:23:59'),
(15, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_3">kiran&#39;s Profile</a>', '0', '2014-01-18 17:14:28'),
(16, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_3">kiran&#39;s Profile</a>', '0', '2014-01-18 17:14:28'),
(17, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_4">kiran&#39;s Profile</a>', '0', '2014-01-18 17:15:03'),
(18, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_4">kiran&#39;s Profile</a>', '0', '2014-01-18 17:15:03'),
(19, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_15">kiran&#39;s Profile</a>', '0', '2014-01-18 17:17:27'),
(20, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_15">kiran&#39;s Profile</a>', '0', '2014-01-18 17:17:27'),
(21, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_16">kiran&#39;s Profile</a>', '0', '2014-01-18 17:30:58'),
(22, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_16">kiran&#39;s Profile</a>', '0', '2014-01-18 17:30:58'),
(23, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_17">kiran&#39;s Profile</a>', '0', '2014-01-18 17:31:08'),
(24, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_17">kiran&#39;s Profile</a>', '0', '2014-01-18 17:31:08'),
(25, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_18">kiran&#39;s Profile</a>', '0', '2014-01-18 17:31:12'),
(26, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_18">kiran&#39;s Profile</a>', '0', '2014-01-18 17:31:12'),
(27, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_19">kiran&#39;s Profile</a>', '0', '2014-01-18 17:31:27'),
(28, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="user.php?u=kiran#status_19">kiran&#39;s Profile</a>', '0', '2014-01-18 17:31:27'),
(29, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_38">gaurav&#39;s Profile</a>', '0', '2014-01-18 19:25:42'),
(30, 'kiran', 'ramu', 'Posted', 'ramu posted on: <br /><a href="home.php?u=ramu#status_39">ramu&#39;s Profile</a>', '0', '2014-01-18 19:27:07'),
(31, 'gaurav', 'ramu', 'Posted', 'ramu posted on: <br /><a href="home.php?u=ramu#status_39">ramu&#39;s Profile</a>', '0', '2014-01-18 19:27:07'),
(32, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_40">gaurav&#39;s home page</a>', '0', '2014-01-19 10:52:24'),
(33, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_40">gaurav&#39;s home page</a>', '0', '2014-01-19 10:52:24'),
(34, 'kiran', 'ramu', 'Posted', 'ramu posted on: <br /><a href="user.php?u=ramu#status_8">ramu&#39;s Profile</a>', '0', '2014-01-19 11:31:19'),
(35, 'gaurav', 'ramu', 'Posted', 'ramu posted on: <br /><a href="user.php?u=ramu#status_8">ramu&#39;s Profile</a>', '0', '2014-01-19 11:31:19'),
(36, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_9">gaurav&#39;s Profile</a>', '0', '2014-01-19 17:18:06'),
(37, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_9">gaurav&#39;s Profile</a>', '0', '2014-01-19 17:18:06'),
(38, 'kiran', 'ramu', 'Posted', 'ramu posted on: <br /><a href="user.php?u=ramu#status_10">ramu&#39;s Profile</a>', '0', '2014-01-19 22:25:25'),
(39, 'gaurav', 'ramu', 'Posted', 'ramu posted on: <br /><a href="user.php?u=ramu#status_10">ramu&#39;s Profile</a>', '0', '2014-01-19 22:25:25'),
(40, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_12">gaurav&#39;s Profile</a>', '0', '2014-01-20 00:18:06'),
(41, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_12">gaurav&#39;s Profile</a>', '0', '2014-01-20 00:18:06'),
(42, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_14">gaurav&#39;s Profile</a>', '0', '2014-01-20 00:20:34'),
(43, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_14">gaurav&#39;s Profile</a>', '0', '2014-01-20 00:20:34'),
(44, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_17">gaurav&#39;s Profile</a>', '0', '2014-01-20 00:48:10'),
(45, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_17">gaurav&#39;s Profile</a>', '0', '2014-01-20 00:48:10'),
(46, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_20">gaurav&#39;s Profile</a>', '0', '2014-01-20 01:37:47'),
(47, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_20">gaurav&#39;s Profile</a>', '0', '2014-01-20 01:37:47'),
(48, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_42">gaurav&#39;s home page</a>', '0', '2014-01-20 14:12:37'),
(49, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_42">gaurav&#39;s home page</a>', '0', '2014-01-20 14:12:37'),
(50, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_43">gaurav&#39;s home page</a>', '0', '2014-01-20 14:12:44'),
(51, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_43">gaurav&#39;s home page</a>', '0', '2014-01-20 14:12:44'),
(52, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_44">gaurav&#39;s home page</a>', '0', '2014-01-20 14:30:24'),
(53, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_44">gaurav&#39;s home page</a>', '0', '2014-01-20 14:30:24'),
(54, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_47">gaurav&#39;s home page</a>', '0', '2014-01-20 16:12:08'),
(55, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_47">gaurav&#39;s home page</a>', '0', '2014-01-20 16:12:08'),
(56, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_48">gaurav&#39;s home page</a>', '0', '2014-01-20 16:17:46'),
(57, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_48">gaurav&#39;s home page</a>', '0', '2014-01-20 16:17:46'),
(58, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_18">gaurav&#39;s Profile</a>', '0', '2014-01-26 17:11:58'),
(59, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_18">gaurav&#39;s Profile</a>', '0', '2014-01-26 17:11:58'),
(60, 'kiran', 'gaurav', 'Replied', 'gaurav commented here:<br /><a href="user.php?u=gaurav#status_37">Click here to view the conversation</a>', '0', '2014-02-02 10:08:48'),
(61, 'kiran', 'gaurav', 'Replied', 'gaurav commented here:<br /><a href="user.php?u=gaurav#status_36">Click here to view the conversation</a>', '0', '2014-02-02 10:09:11'),
(62, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_51">gaurav&#39;s home page</a>', '0', '2014-02-02 10:22:26'),
(63, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_51">gaurav&#39;s home page</a>', '0', '2014-02-02 10:22:26'),
(64, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_53">gaurav&#39;s home page</a>', '0', '2014-02-02 10:23:21'),
(65, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_53">gaurav&#39;s home page</a>', '0', '2014-02-02 10:23:21'),
(66, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_55">kiran&#39;s home page</a>', '0', '2014-02-02 10:29:29'),
(67, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_55">kiran&#39;s home page</a>', '0', '2014-02-02 10:29:29'),
(68, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_56">kiran&#39;s home page</a>', '0', '2014-02-02 10:34:46'),
(69, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_56">kiran&#39;s home page</a>', '0', '2014-02-02 10:34:46'),
(70, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_59">kiran&#39;s home page</a>', '0', '2014-02-02 11:29:35'),
(71, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_59">kiran&#39;s home page</a>', '0', '2014-02-02 11:29:35'),
(72, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_60">kiran&#39;s home page</a>', '0', '2014-02-02 11:31:57'),
(73, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_60">kiran&#39;s home page</a>', '0', '2014-02-02 11:31:57'),
(74, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_61">kiran&#39;s home page</a>', '0', '2014-02-02 11:34:58'),
(75, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_61">kiran&#39;s home page</a>', '0', '2014-02-02 11:34:58'),
(76, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_62">kiran&#39;s home page</a>', '0', '2014-02-02 11:43:43'),
(77, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_62">kiran&#39;s home page</a>', '0', '2014-02-02 11:43:43'),
(78, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_65">gaurav&#39;s home page</a>', '0', '2014-02-02 23:13:27'),
(79, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_65">gaurav&#39;s home page</a>', '0', '2014-02-02 23:13:27'),
(80, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_66">gaurav&#39;s home page</a>', '0', '2014-02-02 23:13:40'),
(81, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_66">gaurav&#39;s home page</a>', '0', '2014-02-02 23:13:40'),
(82, 'gaurav', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_69">kiran&#39;s home page</a>', '0', '2014-02-03 02:24:17'),
(83, 'ramu', 'kiran', 'Posted', 'kiran posted on: <br /><a href="home.php?u=kiran#status_69">kiran&#39;s home page</a>', '0', '2014-02-03 02:24:17'),
(84, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_71">gaurav&#39;s home page</a>', '0', '2014-02-03 03:33:30'),
(85, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_71">gaurav&#39;s home page</a>', '0', '2014-02-03 03:33:30'),
(86, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_73">gaurav&#39;s home page</a>', '0', '2014-02-05 00:08:56'),
(87, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_73">gaurav&#39;s home page</a>', '0', '2014-02-05 00:08:56'),
(88, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_75">gaurav&#39;s home page</a>', '0', '2014-02-05 00:13:40'),
(89, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_75">gaurav&#39;s home page</a>', '0', '2014-02-05 00:13:40'),
(90, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_76">gaurav&#39;s home page</a>', '0', '2014-02-05 00:13:48'),
(91, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_76">gaurav&#39;s home page</a>', '0', '2014-02-05 00:13:48'),
(92, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_81">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:17'),
(93, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_81">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:17'),
(94, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_82">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:24'),
(95, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_82">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:24'),
(96, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_83">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:44'),
(97, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_83">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:44'),
(98, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_84">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:48'),
(99, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_84">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:48'),
(100, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_85">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:51'),
(101, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_85">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:51'),
(102, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_86">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:55'),
(103, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_86">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:55'),
(104, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_87">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:59'),
(105, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_87">gaurav&#39;s home page</a>', '0', '2014-02-05 00:19:59'),
(106, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_88">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:05'),
(107, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_88">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:05'),
(108, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_89">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:12'),
(109, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_89">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:12'),
(110, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_90">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:17'),
(111, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_90">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:17'),
(112, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_91">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:25'),
(113, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_91">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:25'),
(114, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_92">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:32'),
(115, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_92">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:32'),
(116, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_93">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:37'),
(117, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_93">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:37'),
(118, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_94">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:43'),
(119, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_94">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:43'),
(120, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_95">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:49'),
(121, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_95">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:49'),
(122, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_96">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:55'),
(123, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_96">gaurav&#39;s home page</a>', '0', '2014-02-05 00:20:55'),
(124, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_97">gaurav&#39;s home page</a>', '0', '2014-02-05 00:21:00'),
(125, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_97">gaurav&#39;s home page</a>', '0', '2014-02-05 00:21:00'),
(126, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_98">gaurav&#39;s home page</a>', '0', '2014-02-05 00:21:05'),
(127, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_98">gaurav&#39;s home page</a>', '0', '2014-02-05 00:21:05'),
(128, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_99">gaurav&#39;s home page</a>', '0', '2014-02-05 00:21:10'),
(129, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_99">gaurav&#39;s home page</a>', '0', '2014-02-05 00:21:10'),
(130, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_100">gaurav&#39;s home page</a>', '0', '2014-02-05 00:21:15'),
(131, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_100">gaurav&#39;s home page</a>', '0', '2014-02-05 00:21:15'),
(132, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_101">gaurav&#39;s home page</a>', '0', '2014-02-05 00:21:24'),
(133, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_101">gaurav&#39;s home page</a>', '0', '2014-02-05 00:21:24'),
(134, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_102">gaurav&#39;s home page</a>', '0', '2014-02-05 00:23:12'),
(135, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_102">gaurav&#39;s home page</a>', '0', '2014-02-05 00:23:12'),
(136, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_20">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:32:04'),
(137, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_20">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:32:04'),
(138, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_21">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:32:55'),
(139, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_21">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:32:55'),
(140, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_22">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:27'),
(141, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_22">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:27'),
(142, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_23">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:30'),
(143, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_23">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:30'),
(144, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_24">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:35'),
(145, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_24">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:35'),
(146, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_25">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:39'),
(147, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_25">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:39'),
(148, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_26">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:46'),
(149, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_26">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:46'),
(150, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_27">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:54'),
(151, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_27">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:35:54'),
(152, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_28">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:01'),
(153, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_28">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:01'),
(154, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_29">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:13'),
(155, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_29">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:13'),
(156, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_30">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:18'),
(157, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_30">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:18'),
(158, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_31">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:25'),
(159, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_31">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:25'),
(160, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_32">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:31'),
(161, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_32">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:31'),
(162, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_33">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:38'),
(163, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_33">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:38'),
(164, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_34">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:42'),
(165, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_34">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:42'),
(166, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_35">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:47'),
(167, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_35">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:47'),
(168, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_36">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:53'),
(169, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_36">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:53'),
(170, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_37">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:57'),
(171, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_37">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:36:57'),
(172, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_38">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:13'),
(173, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_38">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:13'),
(174, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_39">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:20'),
(175, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_39">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:20'),
(176, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_40">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:23'),
(177, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_40">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:23'),
(178, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_41">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:28'),
(179, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_41">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:28'),
(180, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_42">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:32'),
(181, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_42">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:32'),
(182, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_43">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:35'),
(183, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_43">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:35'),
(184, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_44">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:40'),
(185, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_44">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:40'),
(186, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_45">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:45'),
(187, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_45">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:37:45'),
(188, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_46">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:40:21'),
(189, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_46">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:40:21'),
(190, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_47">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:40:24'),
(191, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_47">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:40:24'),
(192, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_48">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:41:58'),
(193, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_48">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:41:58'),
(194, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_49">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:42:05'),
(195, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_49">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:42:05'),
(196, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_50">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:42:08'),
(197, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_50">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:42:08'),
(198, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_51">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:42:11'),
(199, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_51">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:42:11'),
(200, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_22">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:48:23'),
(201, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_22">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:48:23'),
(202, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_25">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:57:55'),
(203, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_25">gaurav&#39;s Profile</a>', '0', '2014-02-05 00:57:55'),
(204, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_27">gaurav&#39;s Profile</a>', '0', '2014-02-05 01:07:20'),
(205, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_27">gaurav&#39;s Profile</a>', '0', '2014-02-05 01:07:20'),
(206, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_28">gaurav&#39;s Profile</a>', '0', '2014-02-05 02:25:31'),
(207, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_28">gaurav&#39;s Profile</a>', '0', '2014-02-05 02:25:31'),
(208, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_29">gaurav&#39;s Profile</a>', '0', '2014-02-05 02:27:10'),
(209, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_29">gaurav&#39;s Profile</a>', '0', '2014-02-05 02:27:10'),
(210, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_30">gaurav&#39;s Profile</a>', '0', '2014-02-05 02:29:32'),
(211, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_30">gaurav&#39;s Profile</a>', '0', '2014-02-05 02:29:32'),
(212, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_31">gaurav&#39;s Profile</a>', '0', '2014-02-05 12:10:14'),
(213, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_31">gaurav&#39;s Profile</a>', '0', '2014-02-05 12:10:14'),
(214, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_32">gaurav&#39;s Profile</a>', '0', '2014-02-05 12:13:20'),
(215, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_32">gaurav&#39;s Profile</a>', '0', '2014-02-05 12:13:20'),
(216, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_33">gaurav&#39;s Profile</a>', '0', '2014-02-05 12:18:38'),
(217, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_33">gaurav&#39;s Profile</a>', '0', '2014-02-05 12:18:38'),
(218, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_106">gaurav&#39;s home page</a>', '0', '2014-02-05 12:26:26'),
(219, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_106">gaurav&#39;s home page</a>', '0', '2014-02-05 12:26:26'),
(220, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_107">gaurav&#39;s home page</a>', '0', '2014-02-05 12:26:32'),
(221, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_107">gaurav&#39;s home page</a>', '0', '2014-02-05 12:26:32'),
(222, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_108">gaurav&#39;s home page</a>', '0', '2014-02-05 12:26:37'),
(223, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_108">gaurav&#39;s home page</a>', '0', '2014-02-05 12:26:37'),
(224, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_109">gaurav&#39;s home page</a>', '0', '2014-02-05 12:26:54'),
(225, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_109">gaurav&#39;s home page</a>', '0', '2014-02-05 12:26:54'),
(226, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_34">gaurav&#39;s Profile</a>', '0', '2014-02-05 12:28:09'),
(227, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_34">gaurav&#39;s Profile</a>', '0', '2014-02-05 12:28:09'),
(228, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_35">gaurav&#39;s Profile</a>', '0', '2014-02-05 12:34:09'),
(229, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_35">gaurav&#39;s Profile</a>', '0', '2014-02-05 12:34:09'),
(230, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_36">gaurav&#39;s Profile</a>', '0', '2014-02-05 19:56:53'),
(231, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_36">gaurav&#39;s Profile</a>', '0', '2014-02-05 19:56:53'),
(232, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_38">gaurav&#39;s Profile</a>', '0', '2014-02-05 23:20:05'),
(233, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_38">gaurav&#39;s Profile</a>', '0', '2014-02-05 23:20:05'),
(234, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_39">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:41:24'),
(235, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_39">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:41:24'),
(236, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_40">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:42:09'),
(237, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_40">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:42:09'),
(238, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_41">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:42:15'),
(239, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_41">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:42:15'),
(240, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_42">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:45:46'),
(241, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_42">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:45:46'),
(242, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_43">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:46:20'),
(243, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_43">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:46:20'),
(244, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_44">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:48:16'),
(245, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_44">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:48:16'),
(246, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_45">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:52:33'),
(247, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_45">gaurav&#39;s Profile</a>', '0', '2014-02-08 16:52:33'),
(248, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_60">gaurav&#39;s Profile</a>', '0', '2014-02-08 17:53:33'),
(249, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_60">gaurav&#39;s Profile</a>', '0', '2014-02-08 17:53:33'),
(250, 'kiran', 'gaurav', 'Replied', 'gaurav commented here:<br /><a href="user.php?u=gaurav#status_56">Click here to view the conversation</a>', '0', '2014-02-08 19:50:36'),
(251, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_46">gaurav&#39;s Profile</a>', '0', '2014-02-09 12:32:03'),
(252, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_46">gaurav&#39;s Profile</a>', '0', '2014-02-09 12:32:03'),
(253, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_47">gaurav&#39;s Profile</a>', '0', '2014-02-09 12:35:40'),
(254, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_47">gaurav&#39;s Profile</a>', '0', '2014-02-09 12:35:40'),
(255, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_48">gaurav&#39;s Profile</a>', '0', '2014-02-09 12:39:19'),
(256, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_48">gaurav&#39;s Profile</a>', '0', '2014-02-09 12:39:19'),
(257, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_51">gaurav&#39;s Profile</a>', '0', '2014-02-09 13:55:27'),
(258, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_51">gaurav&#39;s Profile</a>', '0', '2014-02-09 13:55:27'),
(259, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_112">gaurav&#39;s home page</a>', '0', '2014-03-28 15:50:25'),
(260, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_112">gaurav&#39;s home page</a>', '0', '2014-03-28 15:50:25'),
(261, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_52">gaurav&#39;s Profile</a>', '0', '2014-03-28 15:53:05'),
(262, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_52">gaurav&#39;s Profile</a>', '0', '2014-03-28 15:53:05'),
(263, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_53">gaurav&#39;s Profile</a>', '0', '2014-03-28 15:54:29'),
(264, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_53">gaurav&#39;s Profile</a>', '0', '2014-03-28 15:54:29'),
(265, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_54">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:00:49'),
(266, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_54">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:00:49'),
(267, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_55">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:01:27'),
(268, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_55">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:01:27'),
(269, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_56">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:06:08'),
(270, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_56">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:06:08'),
(271, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_57">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:06:38'),
(272, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_57">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:06:38'),
(273, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_58">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:07:32'),
(274, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_58">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:07:32'),
(275, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_59">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:07:41'),
(276, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_59">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:07:41'),
(277, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_60">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:09:30'),
(278, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_60">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:09:30'),
(279, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_61">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:11:15'),
(280, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_61">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:11:15'),
(281, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_62">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:11:40'),
(282, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_62">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:11:40'),
(283, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_63">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:13:09'),
(284, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_63">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:13:09'),
(285, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_64">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:13:39'),
(286, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_64">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:13:39'),
(287, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_65">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:14:15'),
(288, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_65">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:14:15'),
(289, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_66">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:15:59'),
(290, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_66">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:15:59'),
(291, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_67">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:16:30'),
(292, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_67">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:16:30'),
(293, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_68">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:36:11'),
(294, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_68">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:36:11'),
(295, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_69">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:36:54'),
(296, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_69">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:36:54'),
(297, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_70">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:38:16'),
(298, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_70">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:38:16'),
(299, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_71">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:43:06'),
(300, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_71">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:43:06'),
(301, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_72">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:43:27'),
(302, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_72">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:43:27'),
(303, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_73">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:44:41'),
(304, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_73">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:44:41'),
(305, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_74">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:48:28'),
(306, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_74">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:48:28'),
(307, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_75">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:51:04'),
(308, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_75">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:51:04'),
(309, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_76">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:55:45'),
(310, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_76">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:55:45'),
(311, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_77">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:59:08'),
(312, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_77">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:59:08'),
(313, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_78">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:59:21'),
(314, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_78">gaurav&#39;s Profile</a>', '0', '2014-03-28 16:59:21'),
(315, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_79">gaurav&#39;s Profile</a>', '0', '2014-03-28 17:00:46'),
(316, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_79">gaurav&#39;s Profile</a>', '0', '2014-03-28 17:00:46'),
(317, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_80">gaurav&#39;s Profile</a>', '0', '2014-03-28 17:01:06'),
(318, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_80">gaurav&#39;s Profile</a>', '0', '2014-03-28 17:01:06'),
(319, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_81">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:06:55'),
(320, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_81">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:06:55'),
(321, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_82">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:08:17'),
(322, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_82">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:08:17'),
(323, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_83">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:14:57'),
(324, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_83">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:14:57'),
(325, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_84">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:16:29'),
(326, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_84">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:16:29'),
(327, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_85">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:16:49'),
(328, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_85">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:16:49'),
(329, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_86">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:16:56'),
(330, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_86">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:16:56');
INSERT INTO `notifications` (`id`, `username`, `initiator`, `app`, `note`, `did_read`, `date_time`) VALUES
(331, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_87">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:17:22'),
(332, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_87">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:17:22'),
(333, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_88">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:17:35'),
(334, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_88">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:17:35'),
(335, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_89">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:18:17'),
(336, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_89">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:18:17'),
(337, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_90">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:21:42'),
(338, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_90">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:21:42'),
(339, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_91">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:21:50'),
(340, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_91">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:21:50'),
(341, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_92">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:22:13'),
(342, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_92">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:22:13'),
(343, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_93">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:26:47'),
(344, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_93">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:26:47'),
(345, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_94">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:27:06'),
(346, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_94">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:27:06'),
(347, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_95">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:28:23'),
(348, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_95">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:28:23'),
(349, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_96">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:43:15'),
(350, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_96">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:43:15'),
(351, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_97">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:43:37'),
(352, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_97">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:43:37'),
(353, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_98">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:44:31'),
(354, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_98">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:44:31'),
(355, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_99">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:45:00'),
(356, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_99">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:45:00'),
(357, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_100">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:45:15'),
(358, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_100">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:45:15'),
(359, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_101">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:50:55'),
(360, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_101">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:50:55'),
(361, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_102">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:57:03'),
(362, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_102">gaurav&#39;s Profile</a>', '0', '2014-03-28 18:57:03'),
(363, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_103">gaurav&#39;s Profile</a>', '0', '2014-03-29 23:07:10'),
(364, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_103">gaurav&#39;s Profile</a>', '0', '2014-03-29 23:07:10'),
(365, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_104">gaurav&#39;s Profile</a>', '0', '2014-03-29 23:07:26'),
(366, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_104">gaurav&#39;s Profile</a>', '0', '2014-03-29 23:07:26'),
(367, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_105">gaurav&#39;s Profile</a>', '0', '2014-03-29 23:07:43'),
(368, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_105">gaurav&#39;s Profile</a>', '0', '2014-03-29 23:07:43'),
(369, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_106">gaurav&#39;s Profile</a>', '0', '2014-03-29 23:08:23'),
(370, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_106">gaurav&#39;s Profile</a>', '0', '2014-03-29 23:08:23'),
(371, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_61">gaurav&#39;s Profile</a>', '0', '2014-03-30 22:05:54'),
(372, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_62">gaurav&#39;s Profile</a>', '0', '2014-03-30 22:06:06'),
(373, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_63">gaurav&#39;s Profile</a>', '0', '2014-03-30 22:15:44'),
(374, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_64">gaurav&#39;s Profile</a>', '0', '2014-03-30 22:15:55'),
(375, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_65">gaurav&#39;s Profile</a>', '0', '2014-03-30 22:16:28'),
(376, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_66">gaurav&#39;s Profile</a>', '0', '2014-03-30 22:21:28'),
(377, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_107">gaurav&#39;s Profile</a>', '0', '2014-03-30 22:52:48'),
(378, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_108">gaurav&#39;s Profile</a>', '0', '2014-03-30 22:54:21'),
(379, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_109">gaurav&#39;s Profile</a>', '0', '2014-03-30 22:59:18'),
(380, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_114">gaurav&#39;s Profile</a>', '0', '2014-03-30 23:49:05'),
(381, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_116">gaurav&#39;s Profile</a>', '0', '2014-03-31 00:02:14'),
(382, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_67">gaurav&#39;s Profile</a>', '0', '2014-03-31 00:10:19'),
(383, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_68">gaurav&#39;s Profile</a>', '0', '2014-03-31 00:10:23'),
(384, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_71">gaurav&#39;s Profile</a>', '0', '2014-03-31 00:14:31'),
(385, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_72">gaurav&#39;s Profile</a>', '0', '2014-03-31 00:14:37'),
(386, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_118">gaurav&#39;s Profile</a>', '0', '2014-03-31 00:15:55'),
(387, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_119">gaurav&#39;s Profile</a>', '0', '2014-03-31 00:16:11'),
(388, 'kiran', 'ramu', 'Replied', 'ramu commented here:<br /><a href="user.php?u=ramu#status_4">Click here to view the conversation</a>', '0', '2014-04-02 14:10:18'),
(389, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_120">gaurav&#39;s Profile</a>', '0', '2014-04-03 18:46:33'),
(390, 'ramu', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_122">gaurav&#39;s Profile</a>', '0', '2014-04-07 16:31:00'),
(391, 'taru', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_123">gaurav&#39;s Profile</a>', '0', '2014-04-20 12:30:02'),
(392, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_123">gaurav&#39;s Profile</a>', '0', '2014-04-20 12:30:02'),
(393, 'taru', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_124">gaurav&#39;s Profile</a>', '0', '2014-04-20 12:30:13'),
(394, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_124">gaurav&#39;s Profile</a>', '0', '2014-04-20 12:30:13'),
(395, 'taru', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_76">gaurav&#39;s Profile</a>', '0', '2014-04-20 22:47:54'),
(396, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_76">gaurav&#39;s Profile</a>', '0', '2014-04-20 22:47:54'),
(397, 'taru', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_77">gaurav&#39;s Profile</a>', '0', '2014-04-20 22:48:02'),
(398, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_77">gaurav&#39;s Profile</a>', '0', '2014-04-20 22:48:02'),
(399, 'taru', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_78">gaurav&#39;s Profile</a>', '0', '2014-06-01 14:52:55'),
(400, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_78">gaurav&#39;s Profile</a>', '0', '2014-06-01 14:52:55'),
(401, 'taru', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_114">gaurav&#39;s home page</a>', '0', '2014-06-01 14:55:35'),
(402, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="home.php?u=gaurav#status_114">gaurav&#39;s home page</a>', '0', '2014-06-01 14:55:35'),
(403, 'taru', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_79">gaurav&#39;s Profile</a>', '0', '2014-06-01 14:55:45'),
(404, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_79">gaurav&#39;s Profile</a>', '0', '2014-06-01 14:55:45'),
(405, 'taru', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_80">gaurav&#39;s Profile</a>', '0', '2014-06-01 14:55:59'),
(406, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_80">gaurav&#39;s Profile</a>', '0', '2014-06-01 14:55:59'),
(407, 'taru', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_125">gaurav&#39;s Profile</a>', '0', '2014-06-01 14:56:19'),
(408, 'kiran', 'gaurav', 'Posted', 'gaurav posted on: <br /><a href="user.php?u=gaurav#status_125">gaurav&#39;s Profile</a>', '0', '2014-06-01 14:56:19');

-- --------------------------------------------------------

--
-- Table structure for table `photos`
--

CREATE TABLE IF NOT EXISTS `photos` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `user` varchar(16) NOT NULL,
  `gallery` varchar(16) NOT NULL,
  `filename` varchar(255) NOT NULL,
  `description` varchar(255) DEFAULT NULL,
  `uploaddate` datetime NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=5 ;

--
-- Dumping data for table `photos`
--

INSERT INTO `photos` (`id`, `user`, `gallery`, `filename`, `description`, `uploaddate`) VALUES
(1, 'ramu', 'Family', 'SatJan1823150220143984.jpg', NULL, '2014-01-18 23:14:38'),
(3, 'ramu', 'Myself', 'SunJan1922233220143844.jpg', NULL, '2014-01-19 22:23:09'),
(4, 'ramu', 'Myself', 'SunJan1922235120147642.jpg', NULL, '2014-01-19 22:23:28');

-- --------------------------------------------------------

--
-- Table structure for table `ques`
--

CREATE TABLE IF NOT EXISTS `ques` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `osid` int(11) NOT NULL,
  `account_name` varchar(16) NOT NULL,
  `author` varchar(16) NOT NULL,
  `type` enum('a','b','c') NOT NULL,
  `data` text NOT NULL,
  `postdate` datetime NOT NULL,
  `topic` varchar(28) DEFAULT NULL,
  `liked` varchar(10) DEFAULT NULL,
  `unlike` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=126 ;

--
-- Dumping data for table `ques`
--

INSERT INTO `ques` (`id`, `osid`, `account_name`, `author`, `type`, `data`, `postdate`, `topic`, `liked`, `unlike`) VALUES
(15, 15, 'kiran', 'kiran', 'a', '&amp;lt;ol&amp;gt;\n&amp;lt;li&amp;gt;gaurav&amp;lt;/li&amp;gt;\n&amp;lt;li&amp;gt;mishra&amp;lt;/li&amp;gt;\n&amp;lt;li&amp;gt;is great&amp;lt;/li&amp;gt;\n&amp;lt;/ol&amp;gt;', '2014-01-18 17:17:27', NULL, NULL, NULL),
(16, 16, 'kiran', 'kiran', 'a', '&amp;lt;p&amp;gt;sdsds', '2014-01-18 17:30:58', NULL, NULL, NULL),
(17, 17, 'kiran', 'kiran', 'a', '&amp;lt;p&amp;gt;sasas&amp;lt;/p&amp;gt;\n&amp;lt;p&amp;gt;', '2014-01-18 17:31:08', NULL, NULL, NULL),
(18, 18, 'kiran', 'kiran', 'a', '&amp;lt;p&amp;gt;asass&amp;lt;/p&amp;gt;', '2014-01-18 17:31:12', NULL, NULL, NULL),
(19, 19, 'kiran', 'kiran', 'a', '&amp;lt;p&amp;gt;asass&amp;lt;sup&amp;gt;ssaasa&amp;lt;/sup&amp;gt;&amp;lt;/p&amp;gt;', '2014-01-18 17:31:27', NULL, NULL, NULL),
(92, 92, 'gaurav', 'gaurav', 'a', '&amp;lt;!DOCTYPE html&amp;gt;\n&amp;lt;html&amp;gt;\n&amp;lt;head&amp;gt;\n&amp;lt;/head&amp;gt;\n&amp;lt;body&amp;gt;\n&amp;lt;p&amp;gt;sdsdd&amp;lt;/p&amp;gt;\n&amp;lt;/body&amp;gt;\n&amp;lt;/html&amp;gt;', '2014-03-28 18:22:13', 'algorithms', NULL, NULL),
(97, 97, 'gaurav', 'gaurav', 'a', '&amp;lt;!DOCTYPE html&amp;gt;\n&amp;lt;html&amp;gt;\n&amp;lt;head&amp;gt;\n&amp;lt;/head&amp;gt;\n&amp;lt;body&amp;gt;\n&amp;lt;p&amp;gt;sddsdsd&amp;lt;/p&amp;gt;\n&amp;lt;/body&amp;gt;\n&amp;lt;/html&amp;gt;', '2014-03-28 18:43:37', 'algorithms', NULL, NULL),
(120, 120, 'gaurav', 'gaurav', 'a', '&amp;lt;p&amp;gt;dsd&amp;lt;strong&amp;gt;dsddsdsd&amp;lt;/strong&amp;gt;&amp;lt;/p&amp;gt;', '2014-04-03 18:46:33', 'algorithms', NULL, NULL),
(121, 120, 'gaurav', 'gaurav', 'b', 'hello', '2014-04-07 16:30:48', 'algorithms', NULL, NULL),
(122, 122, 'gaurav', 'gaurav', 'a', '&amp;lt;p&amp;gt;&amp;lt;strong&amp;gt;hello&amp;lt;/strong&amp;gt;&amp;lt;/p&amp;gt;', '2014-04-07 16:31:00', 'algorithms', NULL, NULL),
(95, 95, 'gaurav', 'gaurav', 'a', '&amp;lt;!DOCTYPE html&amp;gt;\n&amp;lt;html&amp;gt;\n&amp;lt;head&amp;gt;\n&amp;lt;/head&amp;gt;\n&amp;lt;body&amp;gt;\n&amp;lt;p&amp;gt;&amp;lt;img src=&amp;quot;js/tinymce/plugins/emoticons/img/smiley-cool.gif&amp;quot; alt=&amp;quot;&amp;quot; /&amp;gt;sdsddsdd&amp;lt;/p&amp;gt;\n&amp;lt;/body&amp;gt;\n&amp;lt;/html&amp;gt;', '2014-03-28 18:28:23', 'algorithms', NULL, NULL),
(96, 96, 'gaurav', 'gaurav', 'a', '&amp;lt;!DOCTYPE html&amp;gt;\n&amp;lt;html&amp;gt;\n&amp;lt;head&amp;gt;\n&amp;lt;/head&amp;gt;\n&amp;lt;body&amp;gt;\n&amp;lt;p&amp;gt;sasasas&amp;lt;/p&amp;gt;\n&amp;lt;/body&amp;gt;\n&amp;lt;/html&amp;gt;', '2014-03-28 18:43:15', 'algorithms', NULL, NULL),
(123, 123, 'gaurav', 'gaurav', 'a', '&amp;lt;p&amp;gt;sdsdsd&amp;lt;/p&amp;gt;', '2014-04-20 12:30:02', 'algorithms', NULL, NULL),
(124, 124, 'gaurav', 'gaurav', 'a', '&amp;lt;p&amp;gt;&amp;lt;strong&amp;gt;hello&amp;lt;/strong&amp;gt;&amp;lt;/p&amp;gt;', '2014-04-20 12:30:13', 'algorithms', NULL, NULL),
(125, 125, 'gaurav', 'gaurav', 'a', '&amp;lt;p&amp;gt;&amp;lt;strong&amp;gt;heelo&amp;lt;/strong&amp;gt;&amp;lt;/p&amp;gt;', '2014-06-01 14:56:19', 'algorithms', NULL, NULL);

-- --------------------------------------------------------

--
-- Table structure for table `ratings`
--

CREATE TABLE IF NOT EXISTS `ratings` (
  `rating` varchar(7) NOT NULL,
  `id` int(11) NOT NULL,
  `user` varchar(28) DEFAULT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `ratings`
--

INSERT INTO `ratings` (`rating`, `id`, `user`) VALUES
('like', 106, 'gaurav'),
('like', 45, 'kiran'),
('like', 36, 'ramu'),
('dislike', 36, 'gaurav'),
('dislike', 37, 'gaurav'),
('dislike', 61, 'kiran'),
('dislike', 68, ''),
('like', 69, ''),
('like', 63, 'gaurav'),
('like', 102, 'gaurav'),
('like', 62, 'gaurav'),
('like', 71, 'gaurav'),
('like', 65, 'gaurav'),
('dislike', 112, '');

-- --------------------------------------------------------

--
-- Table structure for table `status`
--

CREATE TABLE IF NOT EXISTS `status` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `osid` int(11) NOT NULL,
  `account_name` varchar(16) NOT NULL,
  `author` varchar(16) NOT NULL,
  `type` enum('a','b','c') NOT NULL,
  `data` text NOT NULL,
  `postdate` datetime NOT NULL,
  `branch` varchar(28) NOT NULL,
  `like` int(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=115 ;

--
-- Dumping data for table `status`
--

INSERT INTO `status` (`id`, `osid`, `account_name`, `author`, `type`, `data`, `postdate`, `branch`, `like`) VALUES
(56, 56, 'kiran', 'kiran', 'a', 'sasa', '2014-02-02 10:34:46', '', 0),
(57, 56, 'kiran', 'kiran', 'b', 'asa', '2014-02-02 10:34:49', '', 0),
(58, 56, 'kiran', 'kiran', 'b', 'dsd', '2014-02-02 10:37:10', '', 0),
(62, 62, 'kiran', 'kiran', 'a', 'sdsds', '2014-02-02 11:43:43', '', 0),
(63, 62, 'kiran', 'kiran', 'b', 'sddsdd', '2014-02-02 11:43:54', '', 0),
(45, 41, 'gaurav', 'gaurav', 'b', 'sdsdds', '2014-01-20 15:12:45', '', 0),
(64, 63, 'gaurav', 'gaurav', 'b', 'fdsf\n\nklhjllkj', '2014-02-02 23:12:54', '', 0),
(68, 62, 'kiran', 'kiran', 'b', 'dcxc', '2014-02-02 23:53:21', '', 0),
(69, 69, 'kiran', 'kiran', 'a', 'sdsdsdss', '2014-02-03 02:24:17', '', 0),
(110, 56, 'gaurav', 'gaurav', 'b', 'fuck\n', '2014-02-08 19:50:35', '', 0),
(111, 57, 'gaurav', 'gaurav', 'b', 'fuck', '2014-02-08 19:50:53', '', 0),
(114, 114, 'gaurav', 'gaurav', 'a', 'hello\n', '2014-06-01 14:55:35', '', 0);

-- --------------------------------------------------------

--
-- Table structure for table `tdata`
--

CREATE TABLE IF NOT EXISTS `tdata` (
  `id` int(11) NOT NULL,
  `branch` varchar(28) NOT NULL,
  `topic` varchar(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `tdata`
--

INSERT INTO `tdata` (`id`, `branch`, `topic`) VALUES
(1, 'cse', 'algorithms'),
(2, 'cse', 'datastructures');

-- --------------------------------------------------------

--
-- Table structure for table `topic`
--

CREATE TABLE IF NOT EXISTS `topic` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `osid` int(11) NOT NULL,
  `account_name` varchar(16) NOT NULL,
  `author` varchar(16) NOT NULL,
  `type` enum('a','b','c') NOT NULL,
  `data` text NOT NULL,
  `postdate` datetime NOT NULL,
  `topic` varchar(28) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=81 ;

--
-- Dumping data for table `topic`
--

INSERT INTO `topic` (`id`, `osid`, `account_name`, `author`, `type`, `data`, `postdate`, `topic`) VALUES
(1, 1, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=sdsd">sdsd</a>', '2014-01-16 20:10:58', 'algorithms'),
(2, 2, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=sdsds">sdsds</a>', '2014-01-17 20:17:29', 'algorithms'),
(3, 3, 'kiran', 'kiran', 'c', '<a href="ques.php?d=xzdsd">xzdsd</a>', '2014-01-18 17:14:28', 'datastructures'),
(4, 4, 'kiran', 'kiran', 'c', '<a href="ques.php?d=asasa">asasa</a>', '2014-01-18 17:15:03', 'datastructures'),
(6, 0, 'gaurav', 'gaurav', 'b', 'sas', '2014-01-19 10:38:09', 'algorithms'),
(7, 0, 'gaurav', 'gaurav', 'b', 'gaurav', '2014-01-19 10:38:41', 'algorithms'),
(8, 8, 'ramu', 'ramu', 'c', '<a href="ques.php?d=teachme">teachme</a>', '2014-01-19 11:31:19', 'algorithms'),
(9, 9, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=what are arrays">what are arrays</a>', '2014-01-19 17:18:06', 'algorithms'),
(11, 0, 'gaurav', 'gaurav', 'b', 'sdd', '2014-01-20 00:09:50', 'algorithms'),
(12, 12, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=sdsd">sdsd</a>', '2014-01-20 00:18:06', 'algorithms'),
(13, 0, 'gaurav', 'gaurav', 'b', 'sasa', '2014-01-20 00:18:13', 'algorithms'),
(14, 14, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=asas">asas</a>', '2014-01-20 00:20:34', 'algorithms'),
(15, 14, 'gaurav', 'gaurav', 'b', 'sdds', '2014-01-20 00:20:42', 'algorithms'),
(16, 9, 'gaurav', 'gaurav', 'b', 'you tell', '2014-01-20 00:22:37', 'algorithms'),
(17, 17, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=algorithms i hate them">algorithms i hate them</a>', '2014-01-20 00:48:10', 'algorithms'),
(18, 18, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=dhdhksdhask\n">dhdhksdhask\n</a>', '2014-01-26 17:11:58', 'algorithms'),
(19, 18, 'gaurav', 'gaurav', 'b', 'ssdd', '2014-02-03 03:32:49', 'algorithms'),
(20, 20, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=wwww">wwww</a>', '2014-02-05 00:32:04', 'algorithms'),
(21, 21, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=wwwww">wwwww</a>', '2014-02-05 00:32:55', 'algorithms'),
(22, 22, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=sdsddsd">sdsddsd</a>', '2014-02-05 00:35:27', 'algorithms'),
(23, 23, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=asasa">asasa</a>', '2014-02-05 00:35:30', 'algorithms'),
(24, 24, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=zdzxzx">zdzxzx</a>', '2014-02-05 00:35:35', 'algorithms'),
(25, 25, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=asasass">asasass</a>', '2014-02-05 00:35:39', 'algorithms'),
(77, 77, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=hi">hi</a>', '2014-04-20 22:48:02', 'algorithms'),
(46, 46, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=dsdsd">dsdsd</a>', '2014-02-05 00:40:21', 'algorithms'),
(47, 47, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=ssdsdsd">ssdsdsd</a>', '2014-02-05 00:40:24', 'algorithms'),
(48, 48, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=sdsddsd">sdsddsd</a>', '2014-02-05 00:41:58', 'algorithms'),
(49, 49, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=dsdsd">dsdsd</a>', '2014-02-05 00:42:05', 'algorithms'),
(50, 50, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=sdsdds">sdsdds</a>', '2014-02-05 00:42:08', 'algorithms'),
(51, 51, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=sddsd">sddsd</a>', '2014-02-05 00:42:11', 'algorithms'),
(52, 50, 'gaurav', 'gaurav', 'b', 'dsdsd', '2014-02-05 01:13:46', 'algorithms'),
(53, 50, 'gaurav', 'gaurav', 'b', 'dsdsd', '2014-02-05 01:13:57', 'algorithms'),
(73, 4, 'ramu', 'ramu', 'b', 'reererre', '2014-04-02 14:10:18', 'datastructures'),
(75, 71, 'gaurav', 'gaurav', 'b', 'ssdsds', '2014-04-11 03:22:08', 'algorithms'),
(71, 71, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=sas">sas</a>', '2014-03-31 00:14:31', 'algorithms'),
(76, 76, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=hello">hello</a>', '2014-04-20 22:47:54', 'algorithms'),
(60, 60, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=fdfsdfds">fdfsdfds</a>', '2014-02-08 17:53:33', 'algorithms'),
(61, 61, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=dfdffd">dfdffd</a>', '2014-03-30 22:05:54', 'algorithms'),
(62, 62, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=dd">dd</a>', '2014-03-30 22:06:06', 'algorithms'),
(65, 65, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=dsdsdds">dsdsdds</a>', '2014-03-30 22:16:28', 'algorithms'),
(66, 66, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=sdsds">sdsds</a>', '2014-03-30 22:21:28', 'algorithms'),
(67, 67, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=SDDSD">SDDSD</a>', '2014-03-31 00:10:19', 'algorithms'),
(78, 78, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=hello">hello</a>', '2014-06-01 14:52:55', 'algorithms'),
(79, 79, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=hello">hello</a>', '2014-06-01 14:55:45', 'algorithms'),
(80, 80, 'gaurav', 'gaurav', 'c', '<a href="ques.php?d=life sucks">life sucks</a>', '2014-06-01 14:55:59', 'algorithms');

-- --------------------------------------------------------

--
-- Table structure for table `trending`
--

CREATE TABLE IF NOT EXISTS `trending` (
  `id` int(20) NOT NULL,
  `data` varchar(200) NOT NULL,
  `link` varchar(200) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `trending`
--

INSERT INTO `trending` (`id`, `data`, `link`) VALUES
(1, 'One jawan killed, three injured in Manipur ambush', 'http://www.thehindu.com/news/national/other-states/one-jawan-killed-three-injured-in-manipur-ambush/article5667656.ece?homepage=true');

-- --------------------------------------------------------

--
-- Table structure for table `tutorial`
--

CREATE TABLE IF NOT EXISTS `tutorial` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `osid` int(11) NOT NULL,
  `account_name` varchar(16) NOT NULL,
  `author` varchar(16) NOT NULL,
  `type` enum('a','b','c') NOT NULL,
  `data` text NOT NULL,
  `postdate` datetime NOT NULL,
  `topic` varchar(28) NOT NULL,
  `avatar` varchar(28) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=50 ;

--
-- Dumping data for table `tutorial`
--

INSERT INTO `tutorial` (`id`, `osid`, `account_name`, `author`, `type`, `data`, `postdate`, `topic`, `avatar`) VALUES
(48, 48, 'gaurav', 'gaurav', 'a', '&lt;p style=&quot;text-align: left;&quot;&gt;sdsdsdsdsdds&lt;/p&gt;', '2014-03-29 23:22:26', 'algorithms', ''),
(47, 47, 'gaurav', 'gaurav', 'a', '&lt;p&gt;sd&lt;strong&gt;dsdsddsd&lt;/strong&gt;&lt;/p&gt;', '2014-03-29 23:22:16', 'algorithms', ''),
(46, 46, 'gaurav', 'gaurav', 'a', '&lt;p&gt;sddsddsds&lt;/p&gt;', '2014-03-29 23:14:50', 'algorithms', ''),
(43, 42, 'gaurav', 'gaurav', 'b', 'asass', '2014-02-09 14:01:15', 'algorithms', '-500380764.png'),
(44, 42, 'gaurav', 'gaurav', 'b', 'sdsd', '2014-02-09 14:04:01', 'algorithms', '-500380764.png'),
(41, 41, 'gaurav', 'gaurav', 'a', '&lt;p&gt;&lt;strong&gt;dfdfdf&lt;/strong&gt;&lt;/p&gt;', '2014-01-21 23:20:23', '', ''),
(42, 42, 'gaurav', 'gaurav', 'a', '&lt;p&gt;sddsdsd&lt;/p&gt;', '2014-01-23 23:53:41', 'algorithms', '-208863500.jpg'),
(22, 0, 'ramu', 'ramu', 'b', 'dsdd', '2014-01-19 23:17:06', 'algorithms', '-61859575.png'),
(19, 0, 'ramu', 'ramu', 'b', 'SDSS', '2014-01-19 23:07:48', 'algorithms', '-61859575.png'),
(20, 0, 'ramu', 'ramu', 'b', 'sddsd', '2014-01-19 23:15:11', 'algorithms', '-61859575.png'),
(21, 0, 'ramu', 'ramu', 'b', 'sdds', '2014-01-19 23:16:00', 'algorithms', '-61859575.png'),
(40, 40, 'ramu', 'ramu', 'a', '&lt;p&gt;sasassa&lt;/p&gt;', '2014-01-21 13:13:22', 'algorithms', '-61859575.png'),
(17, 0, 'ramu', 'ramu', 'b', 'SSD', '2014-01-19 23:06:43', 'algorithms', '-61859575.png'),
(39, 39, 'gaurav', 'gaurav', 'a', '&lt;p&gt;asddsdsd&lt;/p&gt;', '2014-01-21 13:12:32', 'algorithms', '-208863500.jpg'),
(49, 49, 'gaurav', 'gaurav', 'a', '&lt;ul&gt;\n&lt;li&gt;dfdffdffdfdfdfffdfd&lt;/li&gt;\n&lt;li&gt;dffd&lt;/li&gt;\n&lt;li&gt;f&lt;/li&gt;\n&lt;li&gt;d&lt;/li&gt;\n&lt;li&gt;df&lt;/li&gt;\n&lt;/ul&gt;', '2014-03-29 23:22:36', 'algorithms', '');

-- --------------------------------------------------------

--
-- Table structure for table `upload`
--

CREATE TABLE IF NOT EXISTS `upload` (
  `id` int(10) NOT NULL,
  `name` varchar(18) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `upload`
--

INSERT INTO `upload` (`id`, `name`) VALUES
(0, '895179_p.jpg'),
(0, '');

-- --------------------------------------------------------

--
-- Table structure for table `user`
--

CREATE TABLE IF NOT EXISTS `user` (
  `user_id` varchar(255) NOT NULL,
  `last_visit` datetime NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `user`
--

INSERT INTO `user` (`user_id`, `last_visit`) VALUES
('kiran', '2014-04-11 03:40:53'),
('gaurav', '2014-04-11 03:42:57'),
('ramu', '2014-04-11 03:39:36'),
('gaurav>', '2014-01-16 13:31:38');

-- --------------------------------------------------------

--
-- Table structure for table `useroptions`
--

CREATE TABLE IF NOT EXISTS `useroptions` (
  `id` int(11) NOT NULL,
  `username` varchar(16) NOT NULL,
  `background` varchar(255) NOT NULL,
  `question` varchar(255) DEFAULT NULL,
  `answer` varchar(255) DEFAULT NULL,
  `temp_pass` varchar(28) DEFAULT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `username` (`username`)
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Dumping data for table `useroptions`
--

INSERT INTO `useroptions` (`id`, `username`, `background`, `question`, `answer`, `temp_pass`) VALUES
(19, 'gaurav594', 'original', NULL, NULL, NULL),
(20, 'gaurav12', 'original', NULL, NULL, NULL),
(21, 'raman', 'original', NULL, NULL, NULL);

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE IF NOT EXISTS `users` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `username` varchar(16) NOT NULL,
  `email` varchar(255) NOT NULL,
  `password` varchar(255) NOT NULL,
  `gender` enum('m','f') NOT NULL,
  `website` varchar(255) DEFAULT NULL,
  `country` varchar(255) DEFAULT NULL,
  `userlevel` enum('a','b','c','d') NOT NULL DEFAULT 'a',
  `avatar` varchar(255) DEFAULT NULL,
  `ip` varchar(255) NOT NULL,
  `signup` datetime NOT NULL,
  `lastlogin` datetime NOT NULL,
  `notescheck` datetime NOT NULL,
  `activated` enum('0','1') NOT NULL DEFAULT '0',
  `branch` varchar(255) NOT NULL,
  `temp_pass` varchar(28) DEFAULT NULL,
  `fullname` varchar(20) DEFAULT NULL,
  `college` varchar(20) DEFAULT NULL,
  `comapany` varchar(20) DEFAULT NULL,
  `designation` varchar(20) DEFAULT NULL,
  `about` varchar(200) DEFAULT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `username` (`username`,`email`),
  KEY `branch` (`branch`)
) ENGINE=MyISAM  DEFAULT CHARSET=latin1 AUTO_INCREMENT=23 ;

--
-- Dumping data for table `users`
--

INSERT INTO `users` (`id`, `username`, `email`, `password`, `gender`, `website`, `country`, `userlevel`, `avatar`, `ip`, `signup`, `lastlogin`, `notescheck`, `activated`, `branch`, `temp_pass`, `fullname`, `college`, `comapany`, `designation`, `about`) VALUES
(2, 'gaurav', 'gaurav', '29be54a52396750258d886abc5417fda', 'm', NULL, 'india', 'a', '609650087.jpg', '1', '2014-01-16 10:19:54', '2014-07-09 16:38:27', '2014-07-09 16:38:27', '0', 'cse', NULL, 'gaurav mishra', 'rkgit', '', '', 'i am cool\n'),
(5, 'ramu', 'ramu', '58ecfdc7967e35bac8738978c0070a2c', 'm', NULL, 'india', 'a', '891323602.png', '1', '2014-01-16 10:38:02', '2014-04-17 14:13:58', '2014-04-17 14:13:59', '0', 'cse', NULL, NULL, NULL, NULL, NULL, NULL),
(6, 'kiran', 'kiran', 'b1a5b64256e27fa5ae76d62b95209ab3', 'm', NULL, 'india', 'a', '373518731.png', '1', '2014-01-18 12:31:10', '2014-04-18 11:28:59', '2014-04-18 11:29:26', '0', 'cse', NULL, NULL, NULL, NULL, NULL, NULL),
(19, 'gaurav594', 'gaurav.mishra594@gmail.com', '29be54a52396750258d886abc5417fda', 'm', NULL, NULL, 'a', NULL, '1', '2014-04-17 23:03:26', '2014-04-17 23:03:26', '2014-04-17 23:03:26', '0', '', NULL, 'gaurav594', NULL, NULL, NULL, NULL),
(8, 'gaurav1', 'gaurav1', '0297eb15f4fa8d3cbc68bedf9f41dfdb', 'm', NULL, 'india', 'a', NULL, '1', '2014-04-05 10:58:30', '2014-04-08 11:12:04', '2014-04-08 11:12:04', '0', '', NULL, NULL, NULL, NULL, NULL, NULL),
(12, 'gau', 'gau', '29be54a52396750258d886abc5417fda', 'm', NULL, NULL, 'a', NULL, '1', '2014-04-07 11:48:18', '2014-04-07 11:48:18', '2014-04-07 11:48:18', '0', '', NULL, NULL, NULL, NULL, NULL, NULL),
(13, 'pera', 'pera', 'd8795f0d07280328f80e59b1e8414c49', 'm', NULL, 'mishra', 'a', '68362539.JPG', '1', '2014-04-08 11:12:38', '2014-04-10 19:13:28', '2014-04-10 19:21:17', '0', 'dsd', NULL, 'gaurav', 'sdds', '', '', 'sdsd'),
(14, 'ramesh1', 'ramesh1', 'f56222ad376450b3b1178842381978ce', 'm', NULL, NULL, 'a', '-521965850.jpg', '1', '2014-04-11 02:42:51', '2014-04-11 02:43:08', '2014-04-11 02:44:05', '0', '', NULL, NULL, NULL, NULL, NULL, NULL),
(15, 'taru', 'taru', '554b23810065f110ca8a156b6e47d345', 'm', NULL, NULL, 'a', '-169251309.png', '1', '2014-04-16 22:07:08', '2014-04-16 22:54:25', '2014-04-16 22:57:46', '0', '', NULL, NULL, NULL, NULL, NULL, NULL),
(16, 'satish', 'satish', 'b8377b23bb86899405d2455cc6da3556', 'm', NULL, NULL, 'a', NULL, '1', '2014-04-17 11:11:24', '2014-04-17 11:13:21', '2014-04-17 11:24:10', '0', '', NULL, 'satish verma', NULL, NULL, NULL, NULL),
(20, 'gaurav12', 'gauravmishra_594@yahoo.com', '29be54a52396750258d886abc5417fda', 'm', NULL, NULL, 'a', NULL, '1', '2014-04-18 01:17:01', '2014-04-18 01:17:01', '2014-04-18 01:17:01', '0', '', NULL, 'gaurav', NULL, NULL, NULL, NULL),
(22, 'raman', 'raman', '3e8961306a7d9c49c15e97d4943b2529', 'm', NULL, '', 'a', '1198140185.jpg', '1', '2014-04-20 12:05:57', '2014-04-20 12:06:09', '2014-04-20 12:22:53', '0', '', NULL, '', '', '', '', '');

-- --------------------------------------------------------

--
-- Table structure for table `webchat_lines`
--

CREATE TABLE IF NOT EXISTS `webchat_lines` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `author` varchar(16) NOT NULL,
  `gravatar` varchar(32) NOT NULL,
  `text` varchar(255) NOT NULL,
  `ts` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `ts` (`ts`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=32 ;

--
-- Dumping data for table `webchat_lines`
--


-- --------------------------------------------------------

--
-- Table structure for table `webchat_users`
--

CREATE TABLE IF NOT EXISTS `webchat_users` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(16) NOT NULL,
  `gravatar` varchar(32) NOT NULL,
  `last_activity` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  UNIQUE KEY `name` (`name`),
  KEY `last_activity` (`last_activity`)
) ENGINE=MyISAM  DEFAULT CHARSET=utf8 AUTO_INCREMENT=50 ;

--
-- Dumping data for table `webchat_users`
--

