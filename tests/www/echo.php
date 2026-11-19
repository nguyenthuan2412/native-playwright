<?php header('Content-Type: application/json'); echo json_encode(['ua' => $_SERVER['HTTP_USER_AGENT'] ?? '', 'x' => $_SERVER['HTTP_X_TEST'] ?? '', 'lang' => $_SERVER['HTTP_ACCEPT_LANGUAGE'] ?? '']);
