import React from 'react';
import clsx from 'clsx';
import styles from './styles.module.css';


import { MDXEmbedProvider } from 'mdx-embed';

export default (props) => <MDXEmbedProvider>{props.children}</MDXEmbedProvider>;
