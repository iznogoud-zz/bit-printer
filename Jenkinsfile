pipeline {
  agent {
    docker {
      image 'rikorose/gcc-cmake'
    }

  }
  stages {
    stage('Build') {
      steps {
        cmakeBuild 'cmake'
        sh 'make'
      }
    }
    stage('Run') {
      steps {
        sh './bit-printer 1024'
      }
    }
  }
}