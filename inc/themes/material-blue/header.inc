<!DOCTYPE html>
<html lang="es">
<head>
    <title><?php echo $appInfo['appname'], ' :: ', $appInfo['appdesc']; ?></title>
    <meta http-equiv="Content-Type" content="text/html; charset=UTF-8"/>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="icon" type="image/png" href="<?php echo $logoIcon; ?>">
    <link rel="stylesheet" href="<?php echo $cssLink; ?>"/>
    <?php if (isset($cssLinkTheme)): ?>
        <link rel="stylesheet" href="<?php echo $cssLinkTheme; ?>"/>
    <?php endif; ?>
</head>
