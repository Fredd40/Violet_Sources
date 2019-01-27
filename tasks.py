from git import Repo
from invoke import task
import os, re, shutil, subprocess

def emptyDir(directoryName):
    shutil.rmtree(directoryName, ignore_errors=True)
    os.makedirs(directoryName)

def formatDate(date):
    date -= date.utcoffset()
    return re.sub(r"([+-]\d{2}):(\d{2})", r" \1\2", date.isoformat())

@task(
    name="deploy-website",
    help={
        "message": "The message to add to the commit"
    })
def deploy(context, message):
    """
    Deploys the website to GitHub
    """
    repo = Repo(search_parent_directories=True)
    os.chdir(os.path.join(repo.working_dir, "website"))
    pageFolder = "website/github-page"
    targetRepo = repo.submodule(pageFolder).module()
    print("Cleaning up the website-build...")
    commands = ["git clean -fdx", "git clean -fdX"]

    if len(targetRepo.index.entries) > 0:
        commands.insert(0, "git rm *")

    for command in commands:
        subprocess.Popen(command, cwd=targetRepo.working_dir).wait()

    print()
    print("Building the website...")
    os.system("nikola build")
    print()
    print("Committing the changes...")
    subprocess.Popen("git add *", cwd=targetRepo.working_dir).wait()

    newCommit = targetRepo.index.commit(message)

    targetRepo.remote().push()
    subprocess.Popen("git add " + pageFolder, cwd=repo.working_dir).wait()

    repo.index.commit(
        newCommit.message,
        author=newCommit.author,
        author_date=formatDate(newCommit.authored_datetime),
        committer=newCommit.committer,
        commit_date=formatDate(newCommit.committed_datetime))
    repo.remote().push()
    print("Done!")